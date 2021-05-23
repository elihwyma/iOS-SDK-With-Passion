/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <CALayer.h>

@interface CALayer (PKCAUtilities)

- (double)pkui_elapsedDurationForAnimation:(id)arg1;
- (double)pkui_remainingDurationForAnimation:(id)arg1;
- (id)pkui_additiveAnimationKeyPrefixForKeyPath:(id)arg1;
- (id)pkui_addAdditiveAnimation:(id)arg1 withKeyPath:(id)arg2;
- (id)_pkui_nextAdditiveAnimationKeyWithKeyPath:(id)arg1;
- (id)pkui_addAdditiveAnimation:(id)arg1;
- (double)pkui_elapsedDurationForAnimationWithKey:(id)arg1;
- (double)pkui_remainingDurationForAnimationWithKey:(id)arg1;
- (_Bool)pkui_hasAdditiveAnimationForKeyPath:(id)arg1;
- (double)pkui_animateToOpacity:(double)arg1 withCompletion:(CDUnknownBlockType)arg2;

@end
