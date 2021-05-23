/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <AXMediaUtilities/AXMEvaluationNode.h>

@interface AXMTraitDetectorNode : AXMEvaluationNode

{
    _Bool _shouldEvaluateColorInformation;
    long long _sampleFrequency;
    double _colorDistanceTheshold;
}

@property (nonatomic) long long sampleFrequency;
@property (nonatomic) _Bool shouldEvaluateColorInformation;
@property (nonatomic) double colorDistanceTheshold;

+ (_Bool)supportsSecureCoding;
+ (id)title;
+ (_Bool)isSupported;

- (void)nodeInitialize;
- (_Bool)validateVisionKitSoftLinkSymbols;
- (void)evaluate:(id)arg1;
- (_Bool)requiresVisionFramework;
- (void)_evaluateColorInformation:(id)arg1;
- (id)_blurValueForVisionObservation:(id)arg1;
- (id)_brightnessValueForVisionObservation:(id)arg1;

@end
