/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/SCNPhysicsField.h>

__attribute__((visibility("hidden")))
@interface SCNPhysicsDragField : SCNPhysicsField

- (struct c3dPhysicsField *)_createField;
- (_Bool)supportsDirection;
- (_Bool)supportsOffset;

@end
