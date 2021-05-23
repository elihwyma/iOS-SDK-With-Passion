/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class BWImageQueueSinkNode, FigCaptureCameraSourcePipeline, FigCapturePixelConverter, FigCaptureSessionPreparedBracket, FigCaptureSinkPipeline, FigVideoCaptureConnectionConfiguration, NSArray, NSDictionary;

@protocol FigCaptureStillImageSinkPipeline;

@interface FigCaptureStillImageSinkPipelineSessionStorage : NSObject

{
    FigCaptureSinkPipeline<FigCaptureStillImageSinkPipeline> *_stillImageSinkPipeline;
    FigCaptureCameraSourcePipeline *_cameraSourcePipeline;
    BWImageQueueSinkNode *_previewSinkNode;
    FigCapturePixelConverter *_pixelConverter;
    NSDictionary *_colorInfo;
    _Bool _stillImagesAreOptimizedForOfflineVideoStabilization;
    float _videoStabilizationOverscanCropMultiplier;
    FigVideoCaptureConnectionConfiguration *_stillImageConnectionConfiguration;
    struct opaqueCMFormatDescription *_stillImageFormatDescription;
    struct opaqueCMFormatDescription *_previewFormatDescription;
    struct opaqueCMFormatDescription *_sushiRawFormatDescription;
    NSArray *_sushiRawDNGColorCalibrations;
    FigCaptureSessionPreparedBracket *_preparedBracket;
    unsigned long long _currentUserInitiatedRequestHostTime;
    CDStruct_1b6d18a9 _currentUserInitiatedRequestPTS;
    long long _mostRecentBurstSettingsID;
    _Bool _videoStabilizationOverscanCropEnabled;
}

@property (nonatomic, readonly) FigCaptureSinkPipeline<FigCaptureStillImageSinkPipeline> *stillImageSinkPipeline;
@property (nonatomic, readonly) FigVideoCaptureConnectionConfiguration *stillImageConnectionConfiguration;
@property (nonatomic, readonly) FigCaptureCameraSourcePipeline *cameraSourcePipeline;
@property (nonatomic, readonly) BWImageQueueSinkNode *previewSinkNode;
@property (nonatomic, readonly) FigCapturePixelConverter *pixelConverter;
@property (nonatomic, readonly) NSDictionary *colorInfo;
@property (nonatomic, readonly) _Bool stillImagesAreOptimizedForOfflineVideoStabilization;
@property (nonatomic) float videoStabilizationOverscanCropMultiplier;
@property (nonatomic, readonly) const struct opaqueCMFormatDescription **stillImageFormatDescriptionPtr;
@property (nonatomic, readonly) const struct opaqueCMFormatDescription **previewFormatDescriptionPtr;
@property (nonatomic, readonly) const struct opaqueCMFormatDescription **sushiRawFormatDescriptionPtr;
@property (nonatomic, readonly) FigCaptureSessionPreparedBracket *preparedBracket;
@property (retain, nonatomic) NSArray *sushiRawDNGColorCalibrations;
@property (nonatomic) unsigned long long currentUserInitiatedRequestHostTime;
@property (nonatomic) CDStruct_1b6d18a9 currentUserInitiatedRequestPTS;
@property (nonatomic) long long mostRecentBurstSettingsID;
@property (nonatomic) _Bool videoStabilizationOverscanCropEnabled;

- (void)dealloc;
- (id)initWithStillImageSinkPipeline:(id)arg1 cameraSourcePipeline:(id)arg2 previewSinkNode:(id)arg3 pixelConverter:(id)arg4 colorInfo:(id)arg5 stillImagesAreOptimizedForOfflineVideoStabilization:(_Bool)arg6 videoStabilizationOverscanCropMultiplier:(float)arg7 preparedBracket:(id)arg8 stillImageConnectionConfiguration:(id)arg9;

@end
