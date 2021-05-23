/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/SCNPhysicsField.h>

__attribute__((visibility("hidden")))
@interface SCNPhysicsVortexField : SCNPhysicsField

- (id)init;
- (void)setDirection:(struct SCNVector3)arg1;
- (struct SCNVector3)axis;
- (struct c3dPhysicsField *)_createField;

@end
