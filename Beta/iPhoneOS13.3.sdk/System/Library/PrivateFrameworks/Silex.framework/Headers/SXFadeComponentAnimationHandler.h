/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXComponentAnimationHandler.h>

@interface SXFadeComponentAnimationHandler : SXComponentAnimationHandler

- (void)startAnimation;
- (void)finishAnimation;
- (double)initialAlpha;
- (void)prepareAnimation;
- (void)updateAnimationWithFactor:(double)arg1;

@end
