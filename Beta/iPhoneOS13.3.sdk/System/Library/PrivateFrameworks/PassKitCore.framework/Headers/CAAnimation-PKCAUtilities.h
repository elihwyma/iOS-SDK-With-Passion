/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <CAAnimation.h>

@interface CAAnimation (PKCAUtilities)

+ (id)pkui_shakeAnimationWithInitalOffest:(double)arg1 springStiffness:(double)arg2 springDamping:(double)arg3;
+ (id)pkui_shakeAnimation;
+ (id)pkui_smallShakeAnimation;

- (void)pkui_setCompletionHandler:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)pkui_didStartHandler;
- (void)pkui_setDidStartHandler:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)pkui_completionHandler;

@end
