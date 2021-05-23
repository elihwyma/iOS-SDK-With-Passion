/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class NSArray, NSString;

@interface BWUBCaptureParameters : NSObject

{
    NSString *_portType;
    double _lowLightEffectiveIntegrationTimeThreshold;
    double _sifrMainEffectiveIntegrationTimeThreshold;
    float _sifrGainThreshold;
    double _longWithoutSphereEffectiveIntegrationTimeThreshold;
    double _deepFusionEffectiveIntegrationTimeThreshold;
    NSArray *_deepFusionHDREVZeroCountByEffectiveIntegrationTime;
    double _redSaturationMainEffectiveIntegrationTimeThreshold;
    float _redSaturationSIFRGainThreshold;
    _Bool _useSquareRootToneCurveForHDRDisabled;
    _Bool _preserveBlackLevel;
    id _afWindowParams;
    int _maxNumberOfFramesForAdaptiveBracketing;
    double _digitalFlashAvailableEffectiveIntegrationTimeThreshold;
    double _digitalFlashRecommendedEffectiveIntegrationTimeThreshold;
    double _stationaryDigitalFlashRecommendedEffectiveIntegrationTimeThreshold;
    float _digitalFlashRecommendRegularFlashSNRThreshold;
    int _referenceFrameSelectionMethod;
    _Bool _usePreviousSIFR;
    NSArray *_motionAndFocusScoreWeights;
}

@property (nonatomic, readonly) double lowLightEffectiveIntegrationTimeThreshold;
@property (nonatomic, readonly) double sifrMainEffectiveIntegrationTimeThreshold;
@property (nonatomic, readonly) float sifrGainThreshold;
@property (nonatomic, readonly) double longWithoutSphereEffectiveIntegrationTimeThreshold;
@property (nonatomic, readonly) double deepFusionEffectiveIntegrationTimeThreshold;
@property (nonatomic, readonly) double redSaturationMainEffectiveIntegrationTimeThreshold;
@property (nonatomic, readonly) float redSaturationSIFRGainThreshold;
@property (nonatomic, readonly) _Bool useSquareRootToneCurveForHDRDisabled;
@property (nonatomic, readonly) _Bool preserveBlackLevel;
@property (nonatomic, readonly) id afWindowParams;

- (void)dealloc;
- (id)description;
- (id)initWithPortType:(id)arg1 sensorIDDictionary:(id)arg2;
- (int)deepFusionHDREVZeroCountForEffectiveIntegrationTime:(double)arg1;
- (int)maxNumberOfFramesForAdaptiveBracketing;
- (double)digitalFlashAvailableEffectiveIntegrationTimeThreshold;
- (double)digitalFlashRecommendedEffectiveIntegrationTimeThreshold;
- (double)stationaryDigitalFlashRecommendedEffectiveIntegrationTimeThreshold;
- (float)digitalFlashRecommendRegularFlashSNRThreshold;
- (int)referenceFrameSelectionMethod;
- (_Bool)usePreviousSIFR;
- (id)motionAndFocusScoreWeights;

@end
