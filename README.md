### Assignment 1 - COMP313 CRN:25049 ###
# licame - Cameron Li

Developed with Unreal Engine 4

# Video Gameplay:
https://www.youtube.com/watch?v=HIqWSrsZbVw

# Game Description:
This is a 2D platformer where you must stay alive as long as possible.
There are enemies that will patrol and chase you if you're within their line of site.
You can move on top of platforms to escape them but keep in mind, the platforms dissapear after 3 seconds!
Overall, a very simple and intuitive game that has a very low difficulty.

The hardest part to get working was the player itself. Coming into this course, I had no prior experience with Unreal so this was quite hard.
What I needed the player to do was collide with objects, move around, and jump.
I initially tried to implement this myself, but, adding my own movement system wouldn't work well with Unreal's collisions.
Furthermore, I would've needed to add physics formulas for force, velocity and acceleration which seemed like a lot of work so eventually I settled on Unreal.

However, with Unreal's system, movement and collisions were easy, but jumping became difficult. Keep in mind that I was working off a Pawn blueprint, movement was
only possible by the add movement input node. This however, didn't allow impulse and velocity adjustments.

After a bunch of toiling, I just settled on making it a Character blueprint, that allowed me to use the built in Jump and movement methods which made it a lot simpler.
Although all my prior work was redundant, it did help me learn a lot about using Unreal in general which actually saved me time in the long run however.

The game itself isn't very interesting but if there's one thing I would choose, it'd be what I added on top of the Unreal's movement.
I added a stamina field which I used for sprinting and jumping which made it a lot more interesting than just a constant movement speed and unlimited jumps.

# Technology Description:
I experimented with a lot of technologies throughout the development of this game, such as Interfaces and AIs.
The technologies I implemented actually have a lot of support for them, making them easy to implement.
Interfaces, for example, were able to be created via widgets which through the Blueprint editor allowed you to setup buttons, text (basically anything you'll ever need for UI) easily.
You could then link them to the player's viewport with a simple blueprint node and the rest is simple. There's a lot to get into but the support is astonishing.

For AI on the other hand, it was the same situation. Behaviour trees and Blackboards (Variable storage for usage across multiple classes) made the process incredibly simple.
These blueprint templates offer a lot of intuitive functionality that after initial experimentation to implement a simple AI, allows you to create relatively complex ones.
Furthermore, the AI controller template offers senses that can be adjusted for player detection that can be easily tweaked like other variables in Unreal.

This isn't even mentioning the tutorials Epic themselves have created that guide you step by step to implement these yourself, which I used.
Overall, there are a lot of technologies and Unreal has the documentation and tutorials to guide you through each and every one of them.

The hardest technology to implement would have to be the volume settings I have in my game.
My initial thoughts when trying to implement this was how I was going to transfer the settings between menus, luckily there is an abundance of online resources available.

I used this tutorial: https://forums.unrealengine.com/community/community-content-tools-and-tutorials/1587490-audio-settings-menu

This tutorial showed me the usage of Game Instances to keep settings constant throughout the entire game, which was something I would have never discovered on my own.
I believe that this can also be used to store data or stats for a single player game that you might want to develop. 

In existing games, Behaviour trees (much more complex than mine) are used in abundance to create a realistic and immersive environment.
How NPCs react, move around and such all lead to building a world that feels alive. This is particularly important as you'd often notice that
games with empty streets feel lifeless which ruins the overall experience.

In the future, I believe with better graphics (more immersive worlds) and VR, spectacular behaviour trees might leave virtual reality and reality harder and harder to distinguish between.
Maybe one day Behaviour trees will be so complex that they'd even start creating their own logical sequences in the tree like we do as humans.



# Checklist:

    Control a character on screen - Done
    Change score on screen - Done
    Create/destroy objects - Done
    Move NPCs around - Done 
    Play sounds - Done
    Restart a level - Done
    Show a final screen - Done
    Create a settings menu - Done
    Create at least one blueprint node in C++ - Done
    
# Experimentation Repository:
https://github.com/Cameronl14320/licame---Assignment-1


# Credits:
Music from www.bensound.com
Jump effect by dklon
Hit and Menu Click sound effect from freesound.com
