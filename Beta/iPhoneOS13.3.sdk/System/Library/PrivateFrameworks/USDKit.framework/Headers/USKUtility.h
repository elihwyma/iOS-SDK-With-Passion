/*
 Image: /System/Library/PrivateFrameworks/USDKit.framework/USDKit
 */

#import <Foundation/NSObject.h>

@interface USKUtility : NSObject

+ (id)shaderNodeType:(id)arg1;
+ (id)targetPropertyWithProperty:(id)arg1;
+ (_Bool)isSceneGraphNode:(id)arg1;
+ (_Bool)isTransformNode:(id)arg1;
+ (CDStruct_f1db2b5e)localTransformWithNode:(id)arg1 time:(double)arg2;
+ (id)transformKeyTimesWithNode:(id)arg1;
+ (id)meshGroupsWithNode:(id)arg1;
+ (id)firstUVMeshAttributeNameInMaterial:(id)arg1;
+ (id)constantMaterialPropertiesWithMaterial:(id)arg1;
+ (id)USDPreviewSurfaceDefaults;
+ (id)textureMaterialPropertiesWithMaterial:(id)arg1;
+ (void)setLocalTransformWithNode:(id)arg1 transform:(CDStruct_f1db2b5e)arg2 time:(double)arg3;
+ (_Bool)isShaderOutputProperty:(id)arg1;
+ (id)bufferMaterialPropertiesWithMaterial:(id)arg1;
+ (id)meshUniqueAndTriangulate:(id)arg1 names:(id)arg2;

@end
