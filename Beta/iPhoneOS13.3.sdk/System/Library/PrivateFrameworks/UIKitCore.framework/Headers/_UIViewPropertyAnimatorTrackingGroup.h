/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _UIViewPropertyAnimatorTrackingGroup : NSObject

{
    NSArray *_trackingAnimators;
}

@property (nonatomic, readonly) NSArray *trackingAnimators;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly, getter=isRunning) _Bool running;
@property (nonatomic, getter=isReversed) _Bool reversed;
@property (nonatomic) double fractionComplete;

- (void)stopAnimation:(_Bool)arg1;
- (void)finishAnimationAtPosition:(long long)arg1;
- (void)startAnimation;
- (void)addCompletion:(CDUnknownBlockType)arg1;
- (void)startAnimationAfterDelay:(double)arg1;
- (id)initWithAnimators:(id)arg1;
- (void)pauseAnimation;
- (void)continueAnimationWithTimingParameters:(id)arg1 durationFactor:(double)arg2;

@end
