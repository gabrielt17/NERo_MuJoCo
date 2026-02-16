# NERo_MuJoCo
NERo's workspace with MuJoCo, including models, simulations, controllers and much more.

## MJCF models

The processes we used to convert some of our robots models (available on Models directory) are fairly straight foward.

* We used 3D models made by our team and re-scaled them using blender to fit the necessary orientation and real size needed in MuJoCo simulations.

* Having the model ready, we exported them in a folder, containing .obj and .mtl files.

* Using Kevinzakka's obj2mjcf (https://github.com/kevinzakka/obj2mjcf) tool, we segmented our model into a MJCF. To conclude it, we did some fine adjustments by rearanging some values.




