/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <VideoProcessing/VCPVideoTrackDecoder.h>

@class AVAssetReader, AVAssetReaderTrackOutput;

__attribute__((visibility("hidden")))
@interface VCPVideoTrackSubsamplingDecoder : VCPVideoTrackDecoder

{
    AVAssetReader *_assetReader;
    AVAssetReaderTrackOutput *_trackOutput;
    CDStruct_1b6d18a9 _decodeEnd;
    CDStruct_1b6d18a9 _sampleDuration;
    CDStruct_1b6d18a9 _nextSampleTime;
    struct opaqueCMSampleBuffer *_currentSample;
    struct opaqueCMSampleBuffer *_nextSample;
}

- (void)dealloc;
- (long long)status;
- (struct opaqueCMSampleBuffer *)copyNextSampleBuffer;
- (struct opaqueCMSampleBuffer *)getNextCaptureSampleBuffer;
- (id)initWithTrack:(id)arg1 timerange:(const CDStruct_e83c9415 *)arg2 atInterval:(const CDStruct_1b6d18a9 *)arg3;

@end
