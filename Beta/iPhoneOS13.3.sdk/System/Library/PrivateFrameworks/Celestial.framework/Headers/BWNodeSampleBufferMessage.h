/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWNodeMessage.h>

@class FigCaptureRecordingSettings, FigCaptureStillImageSettings;

@interface BWNodeSampleBufferMessage : BWNodeMessage

{
    struct opaqueCMSampleBuffer *_sampleBuffer;
    FigCaptureStillImageSettings *_stillImageSettings;
    FigCaptureRecordingSettings *_recordingSettings;
}

@property (readonly) struct opaqueCMSampleBuffer *sampleBuffer;
@property (readonly) FigCaptureStillImageSettings *stillImageSettings;
@property (readonly) FigCaptureRecordingSettings *recordingSettings;

+ (id)newMessageWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
+ (id)newMessageWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 stillImageSettings:(id)arg2;
+ (id)newMessageWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 recordingSettings:(id)arg2;

- (void)dealloc;
- (id)_initWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 stillImageSettings:(id)arg2 recordingSettings:(id)arg3;

@end
