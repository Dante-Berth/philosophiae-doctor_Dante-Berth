from Scott de Marchi and Scott E.Page
## Resume in few words
Paper  presenting the fundamental concepts and theories of Agent based model. [[AGENT-BASED MODELING AND SIMULATION]]

## What is ABM ?
Autonomous objects called agents interacting with each others with laws in a time-spaced world. Agents recieve information from their environment and take actions in response.
ABMs can be stochastic or deterministic.
ABM are not game-theoretic models because in gtm places a primary emphasis on equilibrum properties rather than dynamics.

## Why choosing ABM ?

1. **Behavioral Mapping:** ABMs allow researchers to link individual behavioral rules to overall patterns within a system. By modeling the behaviors of multiple agents, researchers can observe how these behaviors collectively contribute to complex patterns and outcomes.
    
2. **Micro-to-Macro Mapping:** These models bridge the gap between micro-level behaviors and macro-level outcomes. They help in understanding how individual decision-making processes aggregate to form larger societal patterns.
    
3. **Behavioral Rules and Realism:** ABMs can incorporate a wide range of behavioral rules, from psychologically based behaviors to rational-choice models. They are used when purely deductive models fail to produce outcomes that align with real-world observations.
    
4. **Inclusion of Geographic and Social Space:** ABMs can incorporate spatial dimensions and social networks, allowing for a more comprehensive understanding of how geographical factors and social interactions influence behaviors and outcomes.
    
5. **Simultaneous Inclusion of Multiple Processes:** ABMs have the capability to include various processes simultaneously, allowing for the examination of general equilibrium effects across different domains like politics, economics, disease, and the environment.
    
6. **Heterogeneity and Realism:** These models can account for heterogeneity in multiple aspects such as beliefs, preferences, learning rules, and demographics, providing a more nuanced and realistic representation of populations.
    
7. **Handling Messy Contingent Outcomes:** ABMs excel in capturing messy, contingent outcomes, randomness, patterns, and complexities, offering insights into scenarios where equilibrium might not be reached or might not be of scientific interest.
    
8. **Focus on Outcome Robustness:** ABMs emphasize assessing the robustness of systems in adapting to changes rather than focusing solely on equilibrium existence and efficiency.
    
9. **Exploration of Neighboring Models:** Researchers can explore variations of models by altering assumptions, behaviors, or network structures, allowing for a deeper understanding of the core model and its implications.
## AGENT-BASED MODELS : The basics
###  Agent attributes and Behaviors

$$ a\in A.$$
$A$ is the space containing all agents, while $a$ is an agent.

$$ \{ x_{i,1},\dots,x_{i,n}\}= a_{i} \in\mathbb{R}^{n}, where \ A =\{a_{1},...,a_{m}\}$$
$a_{i}$ represents the features of an agent, while $A$ refers to a set of features of all agents.
However the system evolves  $a_{j}^{t} = (x_{{j,1}}^{t},\dots,x_{{j,n}}^{t})$
The system can be characterized for each time steps by $A_{t}= \{a_{1}^{t},...,a_{m}^{t}\}$



>[!Ideas : Modelisation]
> Initial state is defined by $A_{t=0}$, through the time $A_{t}$ is evolving until reaching a equilibrum or not 
> We can discuss the evolution of $A_{t}$, in biology some agents can duplicate or die. That means the $A$ has a changing size. 
> > [!danger] GNN for $A$ changing size
> > A graph neural networks can be used for manipulating multiple agents.
> > Given this idea, a Graph Neural networks operates on a Graph where nodes are the agents, the edges are relations between agents. And the rules can be the aggregator functions.
>
>But we can constraint it with some equations , that will constraint the ABS model evolution. For instance, we can constraint the model by law conservations. 
> 
> Thus it can exist two major ABM :
>  A "closed ABM" operates in isolation, unaffected by external influences, remaining self-contained.
> An "open ABM" allows for perturbations; the evolution of $A_{t}$ might result in exponential changes, influenced by external factors or disturbances.


>[!Definition]
>**Rules**  : refer to formulated guidelines that outline the specific, clearly defined behaviors an individual agent can execute within a discrete time-step. These behaviors are contingent upon the agent's current state and its immediate local environment, potentially responding to both. Rules can exhibit either probabilistic or deterministic characteristics, offering flexibility to consider various factors such as prior agent states, simulation time, and other parameters specific to the system being studied.
>

>[!definition] 
>**Emergent properties**  : are the characteristics or behaviors that arise in a complex system as a result of interactions among its individual components.


>[!attention] 
>It is difficult to predict the final state of the model solely based on the properties or behaviors of individual components. That's why it is important to understand emergent properties.

>[!question] 
>How to predict the final state of the model given the rules or behaviors of agents ?

ABM are not modelized to converge to an equilibrum state , it seems impossible to predict the final state noted as $A_{t_{n\to \infty}}$ or at least  $A_{t_{{n}}}$. ML framework can learn from ABM and could predict the final state or an equilibrum state.















