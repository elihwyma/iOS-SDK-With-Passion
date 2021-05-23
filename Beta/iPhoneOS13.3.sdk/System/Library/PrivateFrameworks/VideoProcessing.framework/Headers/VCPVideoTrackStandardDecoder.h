/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <VideoProcessing/VCPVideoTrackDecoder.h>

@class AVAssetReader, AVAssetReaderTrackOutput;

__attribute__((visibility("hidden")))
@interface VCPVideoTrackStandardDecoder : VCPVideoTrackDecoder

{
    AVAssetReader *_assetReader;
    AVAssetReaderTrackOutput *_trackOutput;
    struct opaqueCMSampleBuffer *_nextSample;
    long long _status;
}

- (void)dealloc;
- (long long)status;
- (struct opaqueCMSampleBuffer *)copyNextSampleBuffer;
- (id)initWithTrack:(id)arg1 timerange:(const CDStruct_e83c9415 *)arg2;

@end
