/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

@class AVAssetTrack;

__attribute__((visibility("hidden")))
@interface VCPVideoTrackDecoder : NSObject

{
    AVAssetTrack *_track;
}

+ (CDStruct_1ef3fb1f)decodeDimensionsForTrack:(id)arg1;

- (id)init;
- (long long)status;
- (id)settings;
- (id)initWithTrack:(id)arg1;
- (struct opaqueCMSampleBuffer *)copyNextSampleBuffer;
- (struct opaqueCMSampleBuffer *)getNextCaptureSampleBuffer;

@end
