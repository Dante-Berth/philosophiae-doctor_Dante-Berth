from Ashish Kumar Shakya, Gopinatha Pillai, Sohom Chakrabarty

## Resume in few words
Paper dedicated to explore the realm of RL, present the main algorithms, does not deep dive into them.

## Introduction
Reinforcement Learning (RL) is a machine learning paradigm where an agent / multiple agents learn(s) to make sequences of decisions by interacting with an environment, aiming to maximize a reward signal over time. It involves learning from trial and error by receiving feedback in the form of rewards or penalties for its actions based humans/animal learning, aiming to discover the best strategies or policies to achieve long-term goals in uncertain environments.

🟢adaptability compared to other scientific and engineering fields  

RL combines human learning, the combination of [dynamic programming](https://en.wikipedia.org/wiki/Dynamic_programming)(to solve problems by breaking them down into smaller subproblems and solving those iteratively.) and [temporal difference](https://en.wikipedia.org/wiki/Temporal_difference_learning)($V(s_{t+1})-V(s_{t})$). 

In <u>1911</u> (the paper) or <u>1898 </u>(wiki), the principle of trial and error learning principle  ["Law of Effect"](https://en.wikipedia.org/wiki/Law_of_effect) was theorized by Edward Thorndike : "the essential idea is that behavior can be modified by its consequences". Behaviors that result in satisfying outcomes lead to an increased probability of repeating those behaviors.

In <u>1952</u>, Shannon demonstrated the first successful application of the "Law of Effect"on a maze running mechanical mouse.

In <u>1956</u>, [Bellman's equations]() are proposed. It is a concept in dynamic programming and optimization. 
Policy evaluation (prediction), for all $s\in\mathbb{S}$: 
$$v_{\pi}(s)= \sum_{a\in{A(s)}}\pi(a|s)\sum_{s',r}p(s',r|s,a)[r+\gamma v_{\pi}(s')]$$
There is also the policy improvement.

For converging to the optimal policy, you have to loop this loop contains policy evaluation and policy improvement. We stop the loop when the old actions of the old policy are the same than the actions than the improved policy.

![[../Figures/Policy Iteration for estimating the best policy.png]]

| Symbols | Description |
| ---- | ---- |
| $p$ | Transition dynamics probability: Given state $s$ and action $a$, the probability of transitioning to next state $s'$ with reward $r$ |
| $A(s)$ | Set of possible actions available in state $s$ |
| $\pi$ | Policy: Agent's strategy |
| $s,s'$ | State, Next state |
| $r$ | Reward |
| $\gamma$ | Discount-rate parameter |
| $a,a'$ | Action, Next action |
| $v_{\pi}$ | Value of being in state $s$ given policy $\pi$ |
Finding an optimal strategy/policy thanks to Bellman Equation can be computationally challenging. 

Value Iteration :
![[../Figures/Value iteration for estimating the best policy.png]]

In <u>1968</u>, Michie and Chambers introduced GLEE a RL agent and a controller BOXES for the pole balancing task.
In <u>1989</u> Chris Watkins integrated DP with online learning also known as Q learning.



