/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class CBClient, NSMutableArray, SBHarmonySettings;

@interface SBHarmonyController : NSObject

{
    CBClient *_client;
    SBHarmonySettings *_harmonySettings;
    NSMutableArray *_suppressionAssertions;
    long long _suppressedWhitePointAdaptationEnabled;
    long long _suppressedBlueLightReductionEnabled;
    _Bool _supportsWhitePointAdaptation;
    _Bool _supportsBlueLightReduction;
}

@property (nonatomic, readonly) _Bool supportsWhitePointAdaptation;
@property (nonatomic, getter=isWhitePointAdaptationEnabled) _Bool whitePointAdaptationEnabled;
@property (nonatomic) long long whitePointAdaptivityStyle;
@property (nonatomic, readonly) _Bool supportsBlueLightReduction;
@property (nonatomic, readonly) SBHarmonySettings *harmonySettings;

+ (id)sharedInstance;

- (id)init;
- (id)_adaptationClient;
- (float)whitePointAdaptationStrengthForWhitePointAdaptivityStyle:(long long)arg1;
- (void)setWhitePointAdaptivityStyleWithStyles:(id)arg1 animationSettings:(id)arg2;
- (void)transitionFromWhitePointAdaptivityStyleWithStyles:(id)arg1 toWhitePointAdaptivityStyleWithStyles:(id)arg2 fromPercentage:(double)arg3 toPercentage:(double)arg4 animationSettings:(id)arg5;
- (void)setWhitePointAdaptivityStyle:(long long)arg1 animationSettings:(id)arg2;
- (void)setWhitePointAdaptationStrength:(float)arg1 forWhitePointAdaptivityStyle:(long long)arg2;

@end
