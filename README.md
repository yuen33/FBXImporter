# FBXImporter
FBXImporter is a Unity plugin to import fbx model into Unity at runtime.
It import fbx model just like you drag it into Unity, all the values in Transform component, RenderFilter component and Renderer component should be the same as you import the fbx model at edit time.

## To use in Unity
1. Copy TestModelImporter/Assets/Plugins/x86_64/FBXImporterUnmanaged.dll to /Assets/Plugins/x86_64

2. Copy TestModelImporter/Assets/Assembly/ModelImporter.dll to /Assets

3. Call ModelImporter.Importer.Import( fbxFilePath ) to import model

## To modify source and build
1. The project using swig to wrap c++ interface to Unity, if your don't have it, download at http://www.swig.org/ and install it

2. Open build/WindowsDesktop_vc140.sln, Open Property Page of swig interface file FBXImporter.i, change path under CustomBuildTool/CommandLine to your swig install path

3. Build project FBXImporter, make sure all .cs files under FBXGenerated filter of project ModelImporter is generated by swig correctly

4. Build project ModelImporter. If success, you should find FBXImporterUnmanaged.dll under bin or bin64, and managed ModelImporter.dll under build/WindowsDesktop_vc140/ModelImporter/bin/Release/

5. Copy them to TestModelImporter project or your own Unity project to test

## Known issues
1. Animation is not supported

2. Calculation of normals and tangents is not supported, if there is no such data in fbx file

2. Split large mesh is not supported yet

3. Performance is not tested

## Thanks
Thanks Tristan ( CTO of Noitom Ltd ) for giving me permission to open this project<br />
Thanks Tapani ( http://tapaniheikkinen.com/ ) who helped me generate fbx samples to debug<br />

## Contact
If there is any issue, please contact drvkize@gmail.com
