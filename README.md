# dyn-boundry-surrogate-cfd

This repo is a working independent project aimed at creating a machine learning surrogate for transient, compressible CFD on an extruded body. Existing research demonstrates that CNNs are well equiped at this task, but few researches incorporate the continuity equation $\nabla \cdot \mathbf u$. This project tests to see if results can be improved by adding this condition (or really, deviations from this condition) to the loss function.
