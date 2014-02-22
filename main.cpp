/*
*******************************************************************************
	Author: Nam Thach
	Date: February 22nd, 2014

	Description:	This program will allow the user to input the model they 
	would like to use. The models will be open on a single scene graph.

*******************************************************************************
*/
#include <iostream>
#include <string>
#include <osg\Group>
#include <osgDB\ReadFile>
#include <osgViewer\Viewer>

using namespace std;

int main(){

	osg::ref_ptr<osg::Group> rootNode = new osg::Group;
	string modelName;

	//User enters in the location of first model
	cout << "Enter the location of the OSG Model 1: ";
	modelName ="E:/OSG/OpenSceneGraph-3.0.1-VS10.0.30319-x86/datasets/glider.osg";
	//getline(cin,modelName);
	osg::ref_ptr<osg::Node> model1 = osgDB::readNodeFile(modelName);

	rootNode->addChild(model1.get());

	//User enters in the location of second model
	cout << "Enter the location of the OSG Model 2: ";
	modelName ="E:/OSG/OpenSceneGraph-3.0.1-VS10.0.30319-x86/datasets/cow.osg";
	//getline(cin,modelName);
	osg::ref_ptr<osg::Node> model2 = osgDB::readNodeFile(modelName);

	rootNode->addChild(model2.get());

	//User enters in the location of third model
	cout << "Enter the location of the OSG Model 3: ";
	modelName ="E:/OSG/OpenSceneGraph-3.0.1-VS10.0.30319-x86/datasets/robot.osg";
	//getline(cin,modelName);
	osg::ref_ptr<osg::Node> model3 = osgDB::readNodeFile(modelName);

	rootNode->addChild(model3.get());
	
	osgViewer::Viewer viewer;
	viewer.setSceneData(rootNode.get());
	viewer.run();

	return 0;

}