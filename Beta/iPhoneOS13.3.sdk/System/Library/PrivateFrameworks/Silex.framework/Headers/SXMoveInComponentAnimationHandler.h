/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXComponentAnimationHandler.h>

@class NSString;

@interface SXMoveInComponentAnimationHandler : SXComponentAnimationHandler

{
    double _startXOffset;
}

@property (nonatomic) double startXOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)startAnimation;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)finishAnimation;
- (void)prepareAnimation;
- (void)updateAnimationWithFactor:(double)arg1;

@end
