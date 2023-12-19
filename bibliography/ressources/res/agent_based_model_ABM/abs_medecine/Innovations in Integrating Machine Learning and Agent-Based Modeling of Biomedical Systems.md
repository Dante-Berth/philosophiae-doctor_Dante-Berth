from Nikita Sivakumar, Cameron Mura, and Shayn M. Peirce
## Resume in few words
Overview of ABM  and machine learning methods in biology

## Abstract
ABM is a primitive/prior model, while ML models utilize statistical methods to learn from data. Biology lacks data, so ABM models tend to modelize biological processes through the biases of agents that follow predefined rules. These rules can either be learned from data or developed by experts. ML can assist in inferring optimal, system-specific ABM rules. For more details about ABM refers to [[Agent-Based Models]] and [[AGENT-BASED MODELING AND SIMULATION]].

Moreover, ABM can generate multiple synthetic datasets, which can be reused to enhance the accuracy of ML.



## Introduction 
In the field of biology, numerous questions come to light, including:

1. **Interconnectedness of Individual Entities:**
>[!question]  
> How are the individual entities related or connected to each other?
> What connections exist between these separate entities?
**Example:** In an cancer environnement, how does a change in the population of  lymphocytes  affect the cancer cells that rely on them ?

2. **Impact of Actions and Interactions:**
>[!question]  
>How do the actions and behaviors of these independent agents influence each other?
>What effects do the interactions between these entities have on their behaviors?
>**Example:** How do the behaviors and interactions of lymphocytes  within a cancer environnement affect the overall success of the cancer?

3. **Overall Influence on the Population:**
>[!question]  
> In what ways do the actions and interactions of individual entities impact larger-scale outcomes for the entire population?
>How do these individual behaviors contribute to broader, population-wide results?

"The discretized nature of ABMs, in time and space, allows them to capture the temporal stochasticity and spatial heterogeneities that are inherent to most complex dynamical systems, biological or otherwise. The variabilities that arise from stochasticity and heterogeneity1 can be handled in ABM simulations in a manner that is numerically robust (e.g., to singularities, divergences) and, thus, capable of emulating how real biological processes may progress towards potentially different outcomes (i.e., non-deterministic behavior), based on (i) heterogeneity among the unique agents in a population, (ii) stochasticity at the level of individual agents (i.e. inherent variability stemming from differential responses of each individual agent), or (iii) variability in the environment and the coupling of agents to that potentially dynamic environment" 

ABM is a excellent model which does not suffer from asumptions.



## Snapshot of ML methods
![[ML_methods_1_Innovations_in_integrating.png]]

![[ML_methods_2_Innovations_in_integrating.png]]

![[ML_methods_3_Innovations_in_integrating.png]]


"Inspired by this potential synergy, the remainder of this Review highlights some published studies that have integrated ML with ABMs in the following ways, in order to create more advanced and accurate computational models of biological systems, at both the multicellular and epidemiological scales:  Learning ABM Rules via ML: Reinforcement learning and supervised learning methods can be used to infer and refine agent rules, which are critical inasmuch as these rules are applied at each discrete time step and, thus, largely define the ABM.  Parameter Calibration and Surrogate Models of ABMs: Stochastic optimization approaches, such as genetic algorithms and particle-swarm methods, can be used to calibrate ABM parameters. Supervised learning algorithms can be trained to create surrogate models of an ABM, which also aids in calibration and in mitigating the computational costs of having to execute numerous ABMs.  Exploring ABMs via ML: ML methods can help explore the complex, high-dimensional parameter space of an ABM, in terms of sensitivity analysis, model robustness, and so on."

## Using ML to Derive and Determine Agent Rules

ABM's rules are the agent's action. Rules are defined as distributions.
"To overcome this potential issue, recent ABMs have begun leveraging ML to computationally determine—in a less ad hoc and heuristic manner—the rules governing agent behaviors based on an agent’s spatial environment at a given time-step. Instead of manually-generated rules, which could be unwittingly biased towards a particular set of predictions that are not statistically representative of the target population or system behavior at large, ML algorithms can learn the rules, parameterizations, and so forth more objectively—by examining experimental data or by applying fundamental mathematical relationships (Figure 3); indeed, this "learn from the data" capacity stems directly from the roots of ML in information theory and statistical learning (Hastie et al., 2009)."

>[!question]  
>How can they learn the rules if the action space is defined by the user in RL ?

>[!Definition]
>Real-World Evidence (RWE):  refers to clinical evidence / obvious rules product derived from real-world data 

"Then, in a type of approach that has been termed "informed ML" **(von Rueden et al., 2021)**, domain experts can subjectively adjust these learned probabilities based on experience and published literature. One study **(Abdulkareem et al., 2019)** used this approach to determine human agent rules in a previously developed ABM of cholera spread in Kumasi, Ghana."

When data is limited, create a first ABM model from the data and create second ABM model learning also from the fake data can lead to a better accuracy "when the available training data is limited, but also that the feedback process in sequential learning can further improve the accuracy of a learning algorithm by utilizing data generated by the ABM simulation."

Expert knowledge based on Dense layers to determine cellular behavior ( Gerlee and Anderson 2007)

### Reinforcement Learning : Determining Agent behavior in multicellular ABMS


"REINFORCEMENT LEARNING: DETERMINING AGENT BEHAVIOR IN MULTICELLULAR ABMS Another type of learning algorithm used in multicellular ABMs is reinforcement learning (RL), which learns cellular behaviors as ‘policies’ that maximize a (cumulative) reward based on the surrounding environmen

Machine Learning & Agent-based Modeling of Biomedical Systems Sivakumar et al. 12/32 and transitions of the system from one ‘state’ to the next (Table 1). Conceptual similarities between RL and ABM rule-sets run deep: the RL approach can be largely viewed as being a type of agent-based Markov decision process (Puterman, 1990). The key elements of this approach are four interrelated concepts: (i) the state that is occupied by an agent at a given instant (e.g., a cell can be in a ‘quiescent’ versus ‘proliferating’ state); (ii) the action which an agent can take (e.g., apoptose versus divide); (iii) a probabilistic policy map, specifying the chance (and rewards) of transitions between a given combination of states and actions (call it {𝑠𝑖, 𝑎}) to a new state, 𝑠𝑖+1 (in other words, the conditional probability of taking action 𝑎 and thus adopting state 𝑠𝑖+1, while in state 𝑠𝑖); and (iv) the notion of a reward, value or return (these interrelated quantities can be treated as equivalent for present purposes), which is computed both instantaneously, for incremental state transitions 𝑖 → 𝑖 + 1, as well as cumulatively (a global reward value, for the entire/completed process; ultimately, RL methods seek to maximize this latter quantity). The reward function can be formulated by the modeler to promote known/expected cellular behaviors, such as elevated metabolism in the presence of glucose or contact inhibition when surrounded by cells (Kaelbling et al., 1996; Kulkarni, 2012). Recent studies of multicellular systems (Zangooei and Habibi, 2017; Wang et al., 2018; Hou et al., 2019) have exploited a type of ‘model-free’ RL algorithm known as Q-learning (Table 1) to quantitatively learn which cellular behavior, or action, an agent should take on, based on its surroundings (environmental context). In this approach, state-action pairs (see above) are mapped to a reward space by a quality function, Q, which can be roughly viewed as the expectation value of the reward over a series of state-action pairs (i.e., a series of actions and the successive states that they link). Q-learning seeks state-action policies which are optimal in the sense of maximizing the overall/cumulative reward. As one might imagine, achieving this goal involves both exploration and exploitation in the solution space: (i) roughly speaking, ‘exploration’ means sampling new, potentially distant regions of a system’s universe of possible state-action pairs under the current policy (this can be viewed as a long-term/delayed reward), whereas (ii) ‘exploitation’ means (re)sampling an already characterized and advantageous region of the space (e.g., a local energy minimum). The exploration/exploitation trade-off enters the Q equation as the (adjustable) learning rate. Intuitively, one can imagine that more exploration occurs relatively early in an RL episode (at which point the solution space, or policy space, has been less mapped-out), whereas the balance might shift towards exploitation in later stages (once the algorithm has learned more productive/rewarding types of actions, corresponding to particular regions of the state-action space). As an example of the applicability of this type of ML in ABMs, one study developed a 3D hybrid agentbased model of a vascularized tumor, wherein a Q-learning algorithm dynamically determined individual cell phenotypes based on features of their surrounding environment (Figure 5), such as local oxygen and glucose concentrations, cell division count, and number of healthy and cancerous neighbors (Zangooei and Habibi, 2017). Comparison with predictions from other, validated ODE-based models (Wodarz and Komarova, 2009; Gerlee, 2013) indicated that the ABM could accurately recapitulate cell phenotype selection and angiogenesis behaviors. Q-learning has also been used to model cell migration behaviors in multicellular systems. Cell migration is an intricate and challenging process to model because a subtle combination of chemotactic gradients, cell···substrate interactions, and other factors influence the direction of movement. One study, which used Q-learning to develop cell migration rules in an ABM of C. elegans embryogenesis (Wang et al., 2018), trained a deep-Q network that optimizes individual cell migratory behaviors in the system. Deep-Q networks are a deep-RL approach which integrate deep NNs (e.g., deep convolutional neural nets) with the Qlearning framework in order to improve the power and efficiency of a basic RL approach (Alpaydin, 2021); this improvement is achieved by virtue of using a DNN, versus a variant of Bellman’s equation from dynami

Machine Learning & Agent-based Modeling of Biomedical Systems Sivakumar et al. 13/32 programming (Eddy, 2004), to represent and optimize the Q-function mentioned above (which, again, underlies the mapping of state-action pairs and probabilistic policies to the reward space). In a similar way, Q-learning also has been used to define cell migration behaviors in leader-follower systems (Hou et al., 2019). In these contexts in particular, RL methods can be seen as a complement to popular ‘swarm intelligence’-based approaches (Table 1), such as the particle-swarm, ant-colony, and dragonfly stochastic optimization algorithms (Meraihi et al., 2020; Jin et al., 2021), which feature ants, dragonflies, etc., as agents."

RL is employed as a learning algorithm in multicellular ABMs to ascertain cellular behaviors, referred to as 'policies,' that maximize cumulative rewards based on the surrounding environment and the system's transitions from one 'state' to the next. RL shares conceptual similarities with ABM rule-sets and can be viewed as an agent-based Markov decision process.

Key Elements of RL Approach:

- State: The agent's current state (e.g., cell in a 'quiescent' or 'proliferating' state).
- Action: Possible agent actions (e.g., apoptosis or cell division).
- Policy: Probabilistic map defining transitions and rewards between states and actions ({𝑠𝑖, 𝑎} → 𝑠𝑖+1).
- Reward: Represents immediate and cumulative values, seeking maximization.

Applications of RL in Multicellular Systems:

- Use of Q-learning algorithm to learn cellular behaviors based on environmental context (state-action pairs).
- Exploitation of Q-learning for tumor modeling, cell migration rules, and optimizing cell migratory behaviors.
- Integration of deep-Q networks enhancing RL for optimizing cell behaviors in multicellular ABMs.

RL Methods as Complementary to 'Swarm Intelligence':

- RL methods complement popular 'swarm intelligence' approaches (e.g., particle-swarm, ant-colony, dragonfly algorithms) in defining agent behaviors in specific contexts.

These studies demonstrate how RL techniques are instrumental in optimizing cellular behaviors and understanding complex multicellular phenomena in agent-based modeling within biomedical systems.

## Surrogate models
Supervised learning algorithms is a surrogate model to the function which maps y given x.ABM model can be surrigated by amachine learning algorithm.
Given fake data generated thanks to the ABM, the Deep learning model would learn these data.
"A relatively recent microsimulation study (Cevik et al., 2016), tracking the progression of breast cancer in women, used a novel active learning7 approach for parameter calibration. In that work, a surrogate ensemble of ANNs (a ‘bag’ of ANNs, or ‘bagANN’) was trained based on ABM-generated training datasets. Then, the bagANN model was used to predict fitness for untested parameter combinations."

New challenge : "To address such challenges, a newly promising family of approaches views ABMs and conventional, equationbased modeling not as mutually exclusive approaches (Van Dyke Parunak et al., 1998) but rather as opportunities to calibrate ABMs (Ye et al., 2021) and/or ‘learn’ (in the ML sense and beyond) a system’s dynamics in terms of classic, differential-equation–based frameworks; see, e.g. Nardini et al. (2021) for “a promising, novel and unifying approach” for developing and analyzing biological ABMs."

"As regards equation-based mechanistic models, a recent study leveraged the training of surrogate models to improve the computational efficiency of a **multiscale model of immune cell interactions in the tumor microenvironment (Cess and Finley, 2020).**"

"One conceivable approach to such exploration is sensitivity analysis (SA); in this general approach, one perturbs an ABM and its independent parameters, while monitoring predicted changes in dependent variables and other relevant outputs (ten Broeke et al., 2016). SA is an especially fine-grained instrument for probing the behavior of an ABM system. To assess the coarser-scale behavior of a model, e.g. for ‘what-if’ type analyses, one might create interventions in the ABM (e.g., by setting certain parameter values to specific ranges corresponding to the intervention), make drastic alterations to thresholds, and/or make similarly large-scale changes to the ABM and its input. **On a finer scale, examining regions of a parameter space via SA could aim to determine the optimal values (or assess the effects) of an intervention; for example, in an ABM of tumorigenesis the modeler could find the optimal dosage and scheduling of a drug agent to minimize tumor size.** [Deep Reinforcement Learning and Simulation as a Path Toward Precision Medicine BRENDEN K. PETERSEN](https://www.liebertpub.com/doi/pdf/10.1089/cmb.2018.0168)