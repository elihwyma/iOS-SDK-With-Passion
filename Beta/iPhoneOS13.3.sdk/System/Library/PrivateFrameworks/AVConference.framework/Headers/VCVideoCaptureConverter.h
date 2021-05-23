/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCVideoCaptureConverter : NSObject

{
    unsigned int _destinationFramerate;
    unsigned int _sourceFramerate;
    double _throttleRate;
    unsigned int _sourceFrameCount;
    unsigned int _lastDestinationFrameCount;
    _Bool _isThrottling;
    id _delegate;
}

@property (nonatomic) unsigned int sourceFramerate;
@property (nonatomic) unsigned int destinationFramerate;

- (void)dealloc;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (void)thermalLevelDidChange:(int)arg1;
- (id)clientCaptureRule;
- (_Bool)onCaptureFrame:(struct opaqueCMSampleBuffer *)arg1 frameTime:(CDStruct_1b6d18a9)arg2 droppedFrames:(int)arg3 cameraStatusBits:(unsigned char)arg4;
- (void)avConferencePreviewError:(id)arg1;
- (void)sourceFrameRateDidChange:(unsigned int)arg1;
- (void)updateThrottleRate;
- (_Bool)processFrame:(struct opaqueCMSampleBuffer *)arg1;

@end
