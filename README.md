
# Challenge 2

# Project Title
Covid 19 Risk Assessment

# Relation with the state transition
It uses the Deterministic finite automaton in which the system evaluates every condition in determining if the person has a high risk of having contract with the Covid 19 virus.

# States
1. Q1: Close contact with covid patient? /n
2. Q2: Is the contact longer than 15 mins? /n
3. Q3: Was the person wearing a mask?
4. Q4: Were you wearing a mask?
5. Q5: Experienced any symptoms?
6. Q6: Quarantine (High Risk)
7. Q7: No Quarantine (Low Risk)

# State transition table:
STATE  1     	   0
Q1	   Q2 (Yes)	 Q7 (No)
Q2	   Q3 (Yes)	 Q7 (No)
Q3	   Q4 (No)	 Q7 (Yes)
Q4	   Q5 (No)	 Q6 (Yes)
Q5	   Q6 (Yes)	 Q6 (No)
Q6	   TRAP	     TRAP
Q7	   TRAP      TRAP

# Explaination of Code 


# Examples of input strings
Accepted (Will Quarantine): Y -> Y -> N -> N -> Y
Rejected (Will Not Quarantine): Y -> Y -> Y
