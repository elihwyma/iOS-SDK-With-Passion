/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class FigCaptureMicSourcePipeline, NSArray, NSMutableArray;

@interface FigCaptureSessionPipelines : NSObject

{
    FigCaptureMicSourcePipeline *_micSourcePipeline;
    NSMutableArray *_cameraSourcePipelines;
    NSMutableArray *_metadataSourcePipelines;
    NSMutableArray *_previewSinkPipelines;
    NSMutableArray *_videoDataSinkPipelines;
    NSMutableArray *_movieFileSinkPipelines;
    NSMutableArray *_depthDataSinkPipelines;
    NSMutableArray *_videoThumbnailSinkPipelines;
    NSMutableArray *_metadataSinkPipelines;
    NSMutableArray *_visionDataSinkPipelines;
    NSMutableArray *_audioDataSinkPipelines;
    NSMutableArray *_audioFileSinkPipelines;
    NSMutableArray *_stillImageSinkPipelineStorages;
}

@property (retain, nonatomic) FigCaptureMicSourcePipeline *micSourcePipeline;
@property (nonatomic, readonly) NSArray *cameraSourcePipelines;
@property (nonatomic, readonly) NSArray *metadataSourcePipelines;
@property (nonatomic, readonly) NSArray *previewSinkPipelines;
@property (nonatomic, readonly) NSArray *videoDataSinkPipelines;
@property (nonatomic, readonly) NSArray *movieFileSinkPipelines;
@property (nonatomic, readonly) NSArray *stillImageSinkPipelineSessionStorages;
@property (nonatomic, readonly) NSArray *depthDataSinkPipelines;
@property (nonatomic, readonly) NSArray *videoThumbnailSinkPipelines;
@property (nonatomic, readonly) NSArray *metadataSinkPipelines;
@property (nonatomic, readonly) NSArray *visionDataSinkPipelines;
@property (nonatomic, readonly) NSArray *audioDataSinkPipelines;
@property (nonatomic, readonly) NSArray *audioFileSinkPipelines;

- (void)dealloc;
- (id)movieFileSinkPipelineWithFileSinkNode:(id)arg1;
- (id)audioFileSinkPipelineWithFileSinkNode:(id)arg1;
- (id)stillImageSinkPipelineSessionStorageWithStillImageCoordinator:(id)arg1;
- (id)movieFileSinkPipelineWithSinkID:(id)arg1;
- (id)previewSinkPipelineWithSourceID:(id)arg1 sourceDeviceType:(int)arg2;
- (id)movieFileSinkPipelineWithIrisStagingNode:(id)arg1;
- (id)stillImageSinkPipelineSessionStorageWithSinkID:(id)arg1;
- (id)previewSinkPipelineWithSinkID:(id)arg1;
- (id)audioFileSinkPipelineWithSinkID:(id)arg1;
- (id)movieFileSinkPipelineWithSourceID:(id)arg1 sourceDeviceType:(int)arg2;
- (id)cameraSourcePipelineWithSourceID:(id)arg1;
- (id)metadataSinkPipelineWithSinkID:(id)arg1;
- (id)videoDataSinkPipelineWithSinkID:(id)arg1;
- (id)depthDataSinkPipelineWithSinkID:(id)arg1;
- (id)audioDataSinkPipelineWithSinkID:(id)arg1;
- (id)videoThumbnailSinkPipelineWithSinkID:(id)arg1;
- (id)visionDataSinkPipelineWithSinkID:(id)arg1;
- (void)addCameraSourcePipeline:(id)arg1;
- (void)addMetadataSourcePipeline:(id)arg1;
- (void)addPreviewSinkPipeline:(id)arg1;
- (void)addVideoThumbnailSinkPipeline:(id)arg1;
- (void)addStillImageSinkPipelineSessionStorage:(id)arg1;
- (void)addVideoDataSinkPipeline:(id)arg1;
- (void)addVisionDataSinkPipeline:(id)arg1;
- (id)videoDataSinkPipelineWithSourceID:(id)arg1 sourceDeviceType:(int)arg2;
- (void)addDepthDataSinkPipeline:(id)arg1;
- (id)depthDataSinkPipelineWithSourceID:(id)arg1 sourceDeviceType:(int)arg2;
- (void)addMetadataSinkPipeline:(id)arg1;
- (id)metadataSinkPipelineWithSourceID:(id)arg1 sourceDeviceType:(int)arg2;
- (void)addMovieFileSinkPipeline:(id)arg1;
- (void)addAudioFileSinkPipeline:(id)arg1;
- (void)addAudioDataSinkPipeline:(id)arg1;
- (id)movieFileSinkPipelineWithVideoConnectionID:(id)arg1;

@end
