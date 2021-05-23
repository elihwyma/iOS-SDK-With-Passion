/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

@interface SCNTransaction : NSObject

+ (void)setValue:(id)arg1 forKey:(id)arg2;
+ (void)lock;
+ (void)unlock;
+ (id)valueForKey:(id)arg1;
+ (CDUnknownBlockType)completionBlock;
+ (void)setCompletionBlock:(CDUnknownBlockType)arg1;
+ (void)begin;
+ (void)commit;
+ (unsigned int)currentState;
+ (void)flush;
+ (void)setDisableActions:(_Bool)arg1;
+ (double)animationDuration;
+ (id)animationTimingFunction;
+ (void)setAnimationDuration:(double)arg1;
+ (void)setAnimationTimingFunction:(id)arg1;
+ (_Bool)disableActions;
+ (void)postCommandWithContext:(struct __C3DScene *)arg1 object:(id)arg2 applyBlock:(CDUnknownBlockType)arg3;
+ (_Bool)immediateMode;
+ (void)setImmediateMode:(_Bool)arg1;
+ (void)postCommandWithContext:(struct __C3DScene *)arg1 object:(id)arg2 keyPath:(id)arg3 applyBlock:(CDUnknownBlockType)arg4;
+ (void)commitImmediate;
+ (void)postCommandWithContext:(struct __C3DScene *)arg1 object:(id)arg2 key:(id)arg3 applyBlock:(CDUnknownBlockType)arg4;
+ (void)setImmediateModeRestrictedContext:(struct __C3DScene *)arg1;
+ (struct __C3DScene *)immediateModeRestrictedContext;
+ (void)checkUncommittedTransactions;

- (void)lock;
- (void)unlock;
- (void)begin;
- (void)commit;
- (void)flush;
- (void)setDisableActions:(_Bool)arg1;
- (double)animationDuration;
- (id)animationTimingFunction;
- (void)setAnimationDuration:(double)arg1;
- (void)setAnimationTimingFunction:(id)arg1;
- (_Bool)disableActions;

@end
