#Status messages of a Quadrokopter:

* Untracked
* Tracked
* Launching
* Landing

All quadrokopters that were found are shown.
Ready to launch has to be checked so that the quadrokopter can be added to the current formation.
The Blink button makes the LED on the quadrokopter blink 3 times. This way the user can figure out which quadrokopter is which..

#Global status messages:

* Launching
* Launching into ... .
* Flying
* Transforming formation from ... to ... .

Where ... are formation names.

#Actions:

##Launching:

If the Launch button is pressed, x quadrokopters that are ready to launch are randomly selected to launch.
After launching, the button changes to "Land" if we implement that.

##Adding a formation:

Click "Add Formation".
A widget asking for the name pops up.
Pressing ok creates a new formation with that name (If the name doesn't already exist).

##Deleting a formation:

Click "Delete Formation".
An "Are you sure?" widget appears.
Pressing ok deletes the formation.

##Editing a formation:

Left-Clicking anywhere creates a new quadrokopter at this location. It has to be far enough away from other quadrokopters.
Right-Clicking on a quadrokopter deletes that quadrokopter.

##Searching for Quadrokopters:

Clicking the "Search for Quadrokopters" button makes the application search for additional quadrokopters. The connection to existing quadrokopters is not influenced.

##Disconnecting from all Quadrokopters:

Clicking the "Disconnect from all Quadrokopters" button makes the application cut all connections to the quadrokopters. Should display an "Are you sure?" widget first, since flying quadrokopters would simply fall down.
