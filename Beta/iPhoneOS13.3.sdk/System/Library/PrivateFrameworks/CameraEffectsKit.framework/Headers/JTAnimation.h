/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <Foundation/NSObject.h>

@interface JTAnimation : NSObject

+ (void)performAnimation:(CDUnknownBlockType)arg1 duration:(double)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)performAnimation:(CDUnknownBlockType)arg1 curve:(long long)arg2 duration:(double)arg3 completion:(CDUnknownBlockType)arg4 delay:(double)arg5 userInteractionEnabled:(_Bool)arg6;
+ (void)performWithAnimator:(id)arg1 animation:(CDUnknownBlockType)arg2 duration:(double)arg3 completion:(CDUnknownBlockType)arg4 delay:(double)arg5 userInteractionEnabled:(_Bool)arg6;
+ (void)performAnimation:(CDUnknownBlockType)arg1 timingParameters:(id)arg2 duration:(double)arg3 completion:(CDUnknownBlockType)arg4 delay:(double)arg5 userInteractionEnabled:(_Bool)arg6;
+ (void)performAnimation:(CDUnknownBlockType)arg1 timingParameters:(id)arg2 duration:(double)arg3 completion:(CDUnknownBlockType)arg4 delay:(double)arg5;

@end
