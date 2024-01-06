# PhysiCell Studio

A graphical tool to create, execute, and visualize a multicellular model using PhysiCell.

https://github.com/PhysiCell-Tools/Studio-Guide/blob/main/README.md

## Sample model: virus-macrophage

We will illustrate the Studio using the PhysiCell virus-macrophage model, i.e., we assume you have created
this model:
```
~/PhysiCell$ make reset
~/PhysiCell$ make virus-macrophage-sample
~/PhysiCell$ make 

# If the resulting config/PhysiCell_settings.xml is in a "flattened" format (which the Studio requires)
# then you should be able to run:
~/PhysiCell$ python studio/bin/studio.py -p -e virus-sample

# However, if you happen to have an older, hierarchical .xml format then you will need to use the flattened one in the studio folder:
~/PhysiCell$ python studio/bin/studio.py -c studio/config/virus_macrophage.xml -e virus-sample.exe
```
