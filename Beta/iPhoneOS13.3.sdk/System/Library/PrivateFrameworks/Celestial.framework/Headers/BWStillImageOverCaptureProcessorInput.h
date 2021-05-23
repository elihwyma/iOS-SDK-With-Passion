/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWStillImageProcessorInput.h>

@protocol BWStillImageOverCaptureProcessorInputDelegate;

@interface BWStillImageOverCaptureProcessorInput : BWStillImageProcessorInput

{
    id <BWStillImageOverCaptureProcessorInputDelegate> _delegate;
    struct opaqueCMSampleBuffer *_wideFieldOfViewFrame;
    struct opaqueCMSampleBuffer *_narrowFieldOfViewFrame;
    int overCaptureMode;
    _Bool _receivedAllFrames;
    int _receivedFrames;
}

@property (retain, nonatomic) id <BWStillImageOverCaptureProcessorInputDelegate> delegate;
@property (nonatomic, readonly) struct opaqueCMSampleBuffer *wideFieldOfViewFrame;
@property (nonatomic, readonly) struct opaqueCMSampleBuffer *narrowFieldOfViewFrame;
@property (nonatomic, readonly) int receivedFrames;
@property (nonatomic, readonly) _Bool receivedAllFrames;
@property (nonatomic, readonly) int overCaptureMode;

- (void)dealloc;
- (void)addFrame:(struct opaqueCMSampleBuffer *)arg1;
- (id)initWithSettings:(id)arg1 captureSettings:(id)arg2;

@end
