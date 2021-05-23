/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/FigCaptureSinkPipeline.h>

@class BWImageQueueSinkNode, BWPixelTransferNode, NSObject, NSString;

@protocol BWPipelineNotificationDelegate, OS_dispatch_queue;

@interface FigCaptureVideoThumbnailSinkPipeline : FigCaptureSinkPipeline

{
    BWPixelTransferNode *_scalerNode;
    BWImageQueueSinkNode *_imageQueueSinkNode;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    _Bool _didPropagateCurrentImageQueue;
    id <BWPipelineNotificationDelegate> _notificationDelegate;
    NSString *_sourceID;
    int _sourceDeviceType;
}

@property (nonatomic, readonly) NSString *sourceID;
@property (nonatomic, readonly) int sourceDeviceType;
@property (nonatomic, readonly) BWImageQueueSinkNode *imageQueueSinkNode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (void)setDiscardsSampleData:(_Bool)arg1;
- (void)imageQueueSinkNode:(id)arg1 didAttemptToEnqueuePreviewSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 withSuccess:(_Bool)arg3;
- (void)imageQueueSinkNodeDidDisplayFirstFrame:(id)arg1;
- (void)imageQueueSinkNodeDidDisplayFirstFrame:(id)arg1 atHostTime:(long long)arg2;
- (id)initWithGraph:(id)arg1 name:(id)arg2 videoSourceOutput:(id)arg3 videoSourceTransform:(struct FigCaptureVideoTransform)arg4 outputTransform:(struct FigCaptureVideoTransform)arg5 videoThumbnailConnectionConfiguration:(id)arg6 notificationDelegate:(id)arg7;
- (int)_buildVideoFilterThumbnailPipeline:(id)arg1 videoSourceOutput:(id)arg2 videoSourceTransform:(struct FigCaptureVideoTransform)arg3 outputTransform:(struct FigCaptureVideoTransform)arg4 videoThumbnailConnectionConfiguration:(id)arg5;

@end
