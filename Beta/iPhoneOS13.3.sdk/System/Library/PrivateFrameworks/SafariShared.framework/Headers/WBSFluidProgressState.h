/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface WBSFluidProgressState : NSObject

{
    double _webKitProgressValue;
    double _linearFunctionM;
    double _linearFunctionB;
    double _startTimeForFluidProgress;
    double _lastTimeProgressValueWasUpdated;
    long long _fluidProgressAnimationPhase;
    double _previousDestinationPosition;
    double _animationDuration;
    double _minProgressPosition;
    _Bool _hasCompletedLoad;
    _Bool _hasCanceledLoad;
    _Bool _hasCommittedLoad;
    _Bool _shouldAnimateUsingInitialPosition;
    long long _fluidProgressType;
    NSString *_loadURL;
}

@property (nonatomic) long long fluidProgressType;
@property (copy, nonatomic) NSString *loadURL;
@property (nonatomic) double minProgressPosition;
@property (nonatomic) long long fluidProgressAnimationPhase;
@property (nonatomic) _Bool hasCompletedLoad;
@property (nonatomic) _Bool hasCanceledLoad;
@property (nonatomic) _Bool hasCommittedLoad;
@property (nonatomic) _Bool shouldAnimateUsingInitialPosition;

+ (double)_estimatedLoadTimeRemainingFromProgressValue:(double)arg1;

- (id)description;
- (id)initWithType:(long long)arg1;
- (double)_animationDuration;
- (id)nextFluidProgressAnimation;
- (_Bool)isFluidProgressStalled;
- (double)fluidProgressValue;
- (void)setWebKitProgressValue:(double)arg1;
- (void)_updateLinearFunction;
- (double)secondsElapsedSinceLoadBegan;
- (double)_fractionCompleteAtElapsedTime:(double)arg1;
- (double)_adjustProgressPosition:(double)arg1;
- (double)_nextProgressPosition:(double)arg1;
- (double)_estimatedLoadTimeRemaining;

@end
