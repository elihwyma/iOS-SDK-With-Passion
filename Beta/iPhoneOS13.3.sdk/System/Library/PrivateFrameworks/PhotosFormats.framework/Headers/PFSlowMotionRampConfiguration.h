/*
 Image: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
 */

#import <Foundation/NSObject.h>

@interface PFSlowMotionRampConfiguration : NSObject

{
    float _playbackRampCurveExponent;
    float _exportRampCurveExponent;
    double _rampTime;
    double _introTime;
    double _outroTime;
    double _volumeSuppressionIntroTime;
    double _volumeSuppressionOutroTime;
    unsigned long long _playbackNumIntermediateSteps;
    unsigned long long _exportNumIntermediateSteps;
}

@property (nonatomic, readonly) double rampTime;
@property (nonatomic, readonly) double introTime;
@property (nonatomic, readonly) double outroTime;
@property (nonatomic, readonly) double volumeSuppressionIntroTime;
@property (nonatomic, readonly) double volumeSuppressionOutroTime;
@property (nonatomic, readonly) unsigned long long playbackNumIntermediateSteps;
@property (nonatomic, readonly) unsigned long long exportNumIntermediateSteps;
@property (nonatomic, readonly) float playbackRampCurveExponent;
@property (nonatomic, readonly) float exportRampCurveExponent;

- (id)init;
- (id)initForRampDown:(_Bool)arg1;
- (void)computeRampToTargetRate:(float)arg1 forExport:(_Bool)arg2 outTimeSteps:(id *)arg3 outIntermediateRates:(id *)arg4;

@end
