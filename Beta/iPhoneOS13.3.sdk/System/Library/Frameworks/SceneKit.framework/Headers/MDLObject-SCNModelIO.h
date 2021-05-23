/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <ModelIO/MDLObject.h>

@interface MDLObject (SCNModelIO)

+ (id)objectWithSCNNode:(id)arg1;
+ (id)objectWithSCNNode:(id)arg1 bufferAllocator:(id)arg2;

- (void)_updateAssociatedSCNNodeWithGeometrySetter:(CDUnknownBlockType)arg1 texturePathProvider:(CDUnknownBlockType)arg2 vertexAttributeNamed:(id)arg3 materialPropertyNamed:(id)arg4;
- (id)_associatedSCNNode;

@end
