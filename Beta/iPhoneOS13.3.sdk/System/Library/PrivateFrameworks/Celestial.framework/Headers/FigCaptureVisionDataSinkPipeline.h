/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/FigCaptureRemoteQueueSinkPipeline.h>

@class BWFigVideoCaptureStream, NSString;

@interface FigCaptureVisionDataSinkPipeline : FigCaptureRemoteQueueSinkPipeline

{
    BWFigVideoCaptureStream *_captureStream;
    NSString *_sourceID;
    int _sourceDeviceType;
}

@property (nonatomic, readonly) NSString *sourceID;
@property (nonatomic, readonly) int sourceDeviceType;

+ (void)initialize;

- (void)dealloc;
- (void)setKeypointDetectionThreshold:(float)arg1;
- (id)initWithVisionDataConnectionConfiguration:(id)arg1 videoDataConnectionConfiguration:(id)arg2 graph:(id)arg3 name:(id)arg4 visionCaptureOutput:(id)arg5 captureDevice:(id)arg6 clientPID:(id)arg7 delegate:(id)arg8;
- (void)triggerVisionDataBurst;
- (int)_buildVisionDataSinkPipeline:(id)arg1 videoDataConnectionConfiguration:(id)arg2 graph:(id)arg3 visionCaptureOutput:(id)arg4 clientPID:(id)arg5 delegate:(id)arg6;

@end
