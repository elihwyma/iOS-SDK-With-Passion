/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/SCNPhysicsField.h>

__attribute__((visibility("hidden")))
@interface SCNPhysicsCustomField : SCNPhysicsField

{
    CDUnknownBlockType _block;
}

@property CDUnknownBlockType block;

- (void)dealloc;
- (struct c3dPhysicsField *)_createField;

@end
