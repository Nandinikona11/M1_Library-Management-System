# TEST PLAN and Corresponding Output

## High Level Test Plan
| Test ID | Description | Exp.i/p | Exp.o/p | Actual o/p | Type of Test |
| -------:|:-----------:|:-------:|:-------:|:----------:|:------------:|
| H_01 | Check the credentials of the user | Program execution | Formatted Menu Page | Formatted Menu Page | Requirement |
| H_02 | Check if the menu is displayed properly | Login Credentials | Formatted Menu Page | Formatted Menu Page | Requirement |
| H_03 | Not Stuck inside any Function | Function call | Proper function execution with return type and message | Proper function execution with return type and message | Requirement |

## Low Level Test Plan
| Test ID | Description | Exp.i/p | Exp.o/p | Actual o/p | Type of Test |
|--------:|:-----------:|:-------:|:-------:|:----------:|:------------:|
| L_01 | Verify user credentials | Login | Success->Menu; Failure->exit | Success->Menu; Failure->exit | Scenario |
| L_02 | Add books into the library| Details of book | Details Added Successfully | Details Added Successfully | Technical |
| L_03 | Search books in the library | Details of the book searched  |If found shows Record |If not found shows there is no record of searched book | Technical |
| L_04 | View Books | Shows books in the library| Views all the books | Shows all the available books | Technical |
| L_05 | Update Credentials| new username ; new password  | Shows menu page | login credentials |Updates the credentilas|Technical|
