/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/FigCaptureSinkConfiguration.h>

@class FigCaptureIrisPreparedSettings, NSArray;

@interface FigCaptureIrisSinkConfiguration : FigCaptureSinkConfiguration

{
    _Bool _movieCaptureEnabled;
    CDStruct_1b6d18a9 _movieDuration;
    CDStruct_1b6d18a9 _movieVideoFrameDuration;
    int _movieAutoTrimMethod;
    FigCaptureIrisPreparedSettings *_preparedSettings;
    _Bool _optimizesImagesForOfflineVideoStabilization;
    _Bool _quadraHighResCaptureEnabled;
    _Bool _depthDataDeliveryEnabled;
    _Bool _portraitEffectsMatteDeliveryEnabled;
    NSArray *_enabledSemanticSegmentationMatteURNs;
    _Bool _filterRenderingEnabled;
    _Bool _bravoConstituentPhotoDeliveryEnabled;
    _Bool _momentCaptureMovieRecordingEnabled;
    int _maxQualityPrioritization;
    _Bool _deferredProcessingEnabled;
    _Bool _digitalFlashCaptureEnabled;
    _Bool _irisFrameHarvestingEnabled;
}

@property (nonatomic) _Bool irisMovieCaptureEnabled;
@property (nonatomic) CDStruct_1b6d18a9 irisMovieDuration;
@property (nonatomic) CDStruct_1b6d18a9 irisMovieVideoFrameDuration;
@property (nonatomic) int irisMovieAutoTrimMethod;
@property (nonatomic) _Bool irisFrameHarvestingEnabled;
@property (retain, nonatomic) FigCaptureIrisPreparedSettings *irisPreparedSettings;
@property (nonatomic) _Bool optimizesImagesForOfflineVideoStabilization;
@property (nonatomic) _Bool quadraHighResCaptureEnabled;
@property (nonatomic) _Bool depthDataDeliveryEnabled;
@property (nonatomic) _Bool portraitEffectsMatteDeliveryEnabled;
@property (retain, nonatomic) NSArray *enabledSemanticSegmentationMatteURNs;
@property (nonatomic) _Bool filterRenderingEnabled;
@property (nonatomic) _Bool bravoConstituentPhotoDeliveryEnabled;
@property (nonatomic) _Bool momentCaptureMovieRecordingEnabled;
@property (nonatomic) int maxQualityPrioritization;
@property (nonatomic) _Bool deferredProcessingEnabled;
@property (nonatomic) _Bool digitalFlashCaptureEnabled;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (int)sinkType;

@end
