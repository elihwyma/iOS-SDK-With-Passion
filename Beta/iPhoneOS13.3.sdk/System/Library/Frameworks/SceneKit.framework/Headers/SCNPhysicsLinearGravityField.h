/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/SCNPhysicsField.h>

__attribute__((visibility("hidden")))
@interface SCNPhysicsLinearGravityField : SCNPhysicsField

- (struct SCNVector3)gravity;
- (void)setDirection:(struct SCNVector3)arg1;
- (struct c3dPhysicsField *)_createField;
- (_Bool)supportsOffset;

@end
