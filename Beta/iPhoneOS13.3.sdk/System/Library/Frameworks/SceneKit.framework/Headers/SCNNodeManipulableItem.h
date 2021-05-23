/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/SCNManipulableItem.h>

__attribute__((visibility("hidden")))
@interface SCNNodeManipulableItem : SCNManipulableItem

+ (void)removeItemsFromScene:(id)arg1;
+ (void)addItems:(id)arg1 toScene:(id)arg2;
+ (id)nodeManipulatorItemWithNode:(id)arg1 screenSize:(double)arg2;

- (struct SCNMatrix4)transform;
- (struct SCNVector3)scale;
- (void)setTransform:(struct SCNMatrix4)arg1;
- (void)setPosition:(struct SCNVector3)arg1;
- (id)parentItem;
- (struct SCNMatrix4)worldTransform;
- (void)setWorldTransform:(struct SCNMatrix4)arg1;
- (void)validateClone;
- (id)cloneForManipulators;
- (_Bool)isNodeManipulator;

@end
