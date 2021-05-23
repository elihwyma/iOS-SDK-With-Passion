/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoardUI/SBSceneHandle.h>

@interface SBSceneHandle (SceneViewControlling)

@property (nonatomic, readonly, getter=isEffectivelyForeground) _Bool effectivelyForeground;

- (id)newSceneViewWithReferenceSize:(struct CGSize)arg1 orientation:(long long)arg2 hostRequester:(id)arg3;
- (id)newScenePlaceholderContentContextWithActivationSettings:(id)arg1;
- (id)newSceneViewController;
- (_Bool)isDeviceApplicationSceneHandle;

@end
