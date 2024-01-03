ABM <=> virtual laboratory no needed to do experiments in vivo or in vitro

Can be viewed as a Graph, where nodes send stimuli to other nodes by the bias of signal that can be chemical signal.

From PhysiCeel_ws_2023_Session : 
>[!definition] 
>**Signal** : stimulis that can elicit (susciter french translation) a behavioral response 

For instance : a T-cell (sender) secretes [Perforin](https://en.wikipedia.org/wiki/Perforin-1) <u>signal</u> that drives the death (response) of the receiver cell ( recipient)
![[abs_medecine_agent_modeling_physicell_ws_2023_Session03.png]]
Agent rules are Signal-behavior for instance a stimuli (Perforin leads to the death of the cell if the process is coded :
From [wikipedia](https://en.wikipedia.org/wiki/Perforin-1)
This protein is one of the main cytolytic proteins of cytolytic granules, and it is known to be a key effector molecule for T-cell- and natural killer-cell-mediated cytolysis.
Perforin is thought to act by creating holes in the plasma membrane which triggers an influx of calcium and initiates membrane repair mechanisms. These repair mechanisms bring perforin and granzymes into early endosomes.
)
Thus it is needed to create this rule into the ABM.  In our case it is a cell rule because this behavior affects cells.

When a researcher creates its own ABM , its grammar is personal, the rules are written for instance the concept of T-cell process is re implemented. Occurring many problems such as likelihood of errors, large coding effort discourages multidisciplinary participation, variations in implementation implies many interpretation. 

When the model grows in size, it is harder to understand, less readable, harder to details the biological hypotheses ( new rules can break prior rules or can cause like-hood errors), harder to explain.


The Goal of [[PhysiCell]] is to create a modeling grammar : "a unifying language for modeling diverse biological concepts, transcending the limitations posed by individualized approaches in the realm of agent-based modeling"