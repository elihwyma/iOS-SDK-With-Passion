/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <PrototypeTools/PTSettings.h>

@class NSString;

@interface SBHarmonySettings : PTSettings

{
    _Bool _whitePointAdaptationInteractiveUpdateEnabled;
    float _whitePointAdaptationStrengthStandard;
    float _whitePointAdaptationStrengthReading;
    float _whitePointAdaptationStrengthPhoto;
    float _whitePointAdaptationStrengthVideo;
    float _whitePointAdaptationStrengthGame;
    float _whitePointAdaptationUpdateDefaultDuration;
    NSString *_whitePointAdaptationInteractiveUpdateTimingFunctionName;
}

@property (nonatomic) float whitePointAdaptationStrengthStandard;
@property (nonatomic) float whitePointAdaptationStrengthReading;
@property (nonatomic) float whitePointAdaptationStrengthPhoto;
@property (nonatomic) float whitePointAdaptationStrengthVideo;
@property (nonatomic) float whitePointAdaptationStrengthGame;
@property (nonatomic) float whitePointAdaptationUpdateDefaultDuration;
@property (nonatomic) _Bool whitePointAdaptationInteractiveUpdateEnabled;
@property (copy, nonatomic) NSString *whitePointAdaptationInteractiveUpdateTimingFunctionName;

- (void)setDefaultValues;

@end
