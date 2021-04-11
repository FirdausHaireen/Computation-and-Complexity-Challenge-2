
# Challenge 2

# Project Title
Covid 19 Risk Assessment

# Relation with the state transition
It uses the Deterministic finite automaton in which the system evaluates every condition in determining if the person has a high risk of having contract with the Covid 19 virus.

# States
1. Q1: Close contact with covid patient?
2. Q2: Is the contact longer than 15 mins? 
3. Q3: Was the person wearing a mask?
4. Q4: Were you wearing a mask?
5. Q5: Experienced any symptoms?
6. Q6: Quarantine (High Risk)
7. Q7: No Quarantine (Low Risk)

# State Diagram
![Statediagram](https://user-images.githubusercontent.com/69784466/114307787-a7fd2080-9b13-11eb-9db3-a9bfc02a7ecd.png)

# State transition table:
![Screenshot (146)](https://user-images.githubusercontent.com/69784466/114307845-05916d00-9b14-11eb-902b-0e46a0bb17c7.png)

# Explaination of Code 
In this main fucntion, it will 

# Examples of input strings
<br>Accepted (Will Quarantine): Y -> Y -> N -> N -> Y</br>
Rejected (Will Not Quarantine): Y -> Y -> Y
