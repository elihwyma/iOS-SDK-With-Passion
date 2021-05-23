/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <VideoProcessing/VCPVideoTrackDecoder.h>

@class AVAssetReader, AVAssetReaderSampleReferenceOutput, NSObject;

@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface VCPVideoTrackSyncDecoder : VCPVideoTrackDecoder

{
    AVAssetReader *_assetReader;
    AVAssetReaderSampleReferenceOutput *_trackReader;
    CDStruct_e83c9415 _timerange;
    _Bool _launchOnce;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_group;
    NSObject<OS_dispatch_semaphore> *_inputSemaphore;
    NSObject<OS_dispatch_semaphore> *_outputSemaphore;
    _Bool _cancelDecode;
    int _decodeError;
    _Bool _decodeFinished;
    int _decodedFrames;
    int _outputFrameIdx;
    struct opaqueCMSampleBuffer *_sampleBuffer[2];
}

- (void)dealloc;
- (long long)status;
- (struct opaqueCMSampleBuffer *)copyNextSampleBuffer;
- (id)initWithTrack:(id)arg1 timerange:(const CDStruct_e83c9415 *)arg2;
- (int)findNextSample:(_Bool)arg1 timerange:(CDStruct_e83c9415 *)arg2;
- (int)decodeSample:(CDStruct_e83c9415)arg1 sample:(struct opaqueCMSampleBuffer **)arg2;
- (void)decodeTask;

@end
