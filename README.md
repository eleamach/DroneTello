# README
## Prcédure de lancement
Pour lancer toutes les fonctionnalitées il vous faudra 6 terminaux. Un launchfile est créer mais pour utiliser toutes les fonctionnalités sans toucher aux anciennes, nous avons préféré remapp dans le terminal directement. Lancer donc : 

/!\ Bien sourcer chaque terminal à l'aide de 
```bash
source /opt/ros/humble/setup.bash
source install/setup.bash
```
1. Lancement de joy
```bash
ros2 run joy joy_node
```
2. Lancement du drone
```bash
ros2 run tello tello
```
3. Lancement du lecteur de qrcode du drone
```bash
ros2 run zbar_ros barcode_reader --remap image:=image_raw
```
4. Lancement de la detection du centre du qrcode
```bash
 ros2 run pypackage center 
```
5. Le contrôle du drone
```bash
ros2 run pypackage control --ros-args --remap control:=secure_cmd
```
6. La gestion des modes du drone
```bash
ros2 run pypackage tello_behavior 
```

## Explication des fonctionnalitées
A -> Lancer le drone
X -> Atterir le drone
B -> Atterissage d'urgence du drone (il tombe)
Joystick gauche -> déplacement du drone en x et y
Joystick droit -> déplacement du drone en z et orientation du drone
Fleche haut -> Mode manuel (controle total du drone), mode par défaut
Flèche bas -> Mode surveillance
Flèche gauche -> Mode Spielberg
Flèche droite -> Mode de lecture de Qrcode

## Fonctionnement des modes
1. Surveillance
    Peu import la direction du joystick, il reste en levitation et tourne sur lui même à vitesse constante.
2. Spielberg
    Il tourne autour d'un objet (une personne serait assez dangereux) toute en étant focus sur l'objet.
3. Qrcode
    Plusieurs fonctionnalitées : 
        - Qrcode Start : Le drone se décale sur x jusqu'à rencontrer le qrcode Finish.
        - Qrcode Stop : Stop tout ce qui est en cours
        - Qrcode drop_area : Atterit le drone
        - Qrcode red_block : Le drone suit le centre de ce qrcode 

## Questions de cours
### Introduction
* Après lecture de cet extrait, répondez aux questions suivantes :
Quelles sont les quatre commandes classiques d’un drone quadrirotor ?

**Commande de roulis** : bascule autour de son axe vertical, notion de déplacement-> aller à gauche ou à droite

**Commande de tangage** : basculer le drone en avant ou en arrière -> aller en avant ou en arrière

**Commande de lacet** : pivoter autour de l'axe vertical, pas de notion de déplacement -> tourner sur lui-même

**Commande de gaz** : altitude

---
* A l’aide de schémas et de repères que vous aurez fixés, expliquez comment
peut-on contrôler la trajectoire d’un drone quadricoptère.

**Pour avancer** : utiliser le tangage en augmentant la puissance des moteurs arrières

**Pour reculer** : utiliser le tangage en augmentant la puissance des moteurs avant

**Pour tourner à droite** :  utiliser le roulis en augmentant la puissance du moteur gauche avant et diminuer celui avant de droite si on souhaite avancer. Si pas besoin d'avancer, lacet en augmentant le moteur de ceux de gauche, diminuer ceux de droite

**Pour tourner à gauche** :  utiliser le roulis en augmentant la puissance du moteur droit avant et diminuer celui avant de gauche si on souhaite avancer.Si pas besoin d'avancer, lacet en augmentant le moteur de ceux de droite, diminuer ceux de gauche

**Monter et descendre**: utiliser la commande de gaz, augmenter ou diminuer respectivement la vitesse des moteurs

### Preparation de l'environnement

* Quels topics correspondent à la commande du drone ?
```bash
$ ros2 topic list
/control
/emergency
/flip
/land
/parameter_events
/rosout
/takeoff
```

---
* Quel est respectivement le type de chacun des messages associés ?
```bash
$ ros2 topic info /control
Type : geometry_msgs/msg/Twist
$ ros2 topic info /emergency
Type : std_msgs/msg/Empty
$ ros2 topic info /flip
Type : std_msgs/msg/String
$ ros2 topic info /land

Type : std_msgs/msg/Empty
$ ros2 topic info /parameter_events
Type : rcl_interfaces/msg/ParameterEvent
$ ros2 topic info /rosout
Type : rcl_interfaces/msg/Log
$ ros2 topic info /takeoff
Type : std_msgs/msg/Empty
```

### Mise en route du drone
* rviz
![picturewithdrone1](/img/picture1.png) 

* rqt
![picturewithdrone2](/img/picture2.png) 

* Question Idem, mettez un petit screenshot de l'évolution de la mesure du capteur

![tofgraph](/img/tof.png) 

### Controle du drone

* Vous remarquerez que le topic sortant de joy à changer. Comment aller procéder pour faire cela ? Quel est l'interet ? Pourquoi effectuer le changement en sorti de joy est interessant plutot qu'autre part ?
Il faut réaliser un remap, cela permet de rediriger les messages d'un topics vers un autre topic. On le fait en sorti de joy pour une question de siimplicité, afin d'avoir directement les informations de joy.

### QRCODE
Démo : 

![screencast](/img/Screencastfrom04-17-2024052031PM-ezgif.com-video-to-gif-converter.gif) 

