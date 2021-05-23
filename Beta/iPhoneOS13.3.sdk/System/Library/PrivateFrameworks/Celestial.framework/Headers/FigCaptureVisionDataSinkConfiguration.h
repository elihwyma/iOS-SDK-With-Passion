/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/FigCaptureSinkConfiguration.h>

@class NSDictionary;

@interface FigCaptureVisionDataSinkConfiguration : FigCaptureSinkConfiguration

{
    float _maxFrameRate;
    float _maxBurstFrameRate;
    CDStruct_1b6d18a9 _maxBurstDuration;
    unsigned int _gaussianPyramidOctavesCount;
    float _gaussianPyramidBaseOctaveDownscalingFactor;
    unsigned int _maxKeypointsCount;
    float _keypointDetectionThreshold;
    _Bool _featureBinningEnabled;
    _Bool _featureOrientationAssignmentEnabled;
}

@property (nonatomic) float maxFrameRate;
@property (nonatomic) float maxBurstFrameRate;
@property (nonatomic) CDStruct_1b6d18a9 maxBurstDuration;
@property (nonatomic) unsigned int gaussianPyramidOctavesCount;
@property (nonatomic) float gaussianPyramidBaseOctaveDownscalingFactor;
@property (nonatomic) unsigned int maxKeypointsCount;
@property (nonatomic) float keypointDetectionThreshold;
@property (nonatomic) _Bool featureBinningEnabled;
@property (nonatomic) _Bool featureOrientationAssignmentEnabled;
@property (nonatomic, readonly) NSDictionary *embeddedCaptureDeviceConfiguration;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (int)sinkType;

@end
