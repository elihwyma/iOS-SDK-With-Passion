/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

@class FBKVOController;

@interface NSObject (POP)

@property (retain, nonatomic) FBKVOController *KVOController;
@property (retain, nonatomic) FBKVOController *KVOControllerNonRetaining;

- (void)pop_addAnimation:(id)arg1 forKey:(id)arg2;
- (void)pop_removeAllAnimations;
- (void)pop_removeAnimationForKey:(id)arg1;
- (id)pop_animationKeys;
- (id)pop_animationForKey:(id)arg1;

@end
