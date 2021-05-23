/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXComponentAnimationHandler.h>

@class NSString;

@interface SXScaleAndFadeComponentAnimationHandler : SXComponentAnimationHandler

{
    double _initialAlpha;
    double _initialScale;
}

@property (nonatomic) double initialAlpha;
@property (nonatomic) double initialScale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)startAnimation;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)finishAnimation;
- (id)initWithComponent:(id)arg1 withAnimation:(id)arg2;
- (void)prepareAnimation;
- (void)updateAnimationWithFactor:(double)arg1;

@end
