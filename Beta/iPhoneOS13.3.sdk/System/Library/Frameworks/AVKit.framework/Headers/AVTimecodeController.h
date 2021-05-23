/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <NSObject.h>

@class AVAssetTrack, NSMutableArray;

__attribute__((visibility("hidden")))
@interface AVTimecodeController : NSObject

{
    long long _frameCount;
    AVAssetTrack *_videoTrack;
    AVAssetTrack *_timecodeTrack;
    NSMutableArray *_timecodes;
    struct CVSMPTETime _maxTimecode;
    long long _maxFrameNumber;
    id _timeObserver;
    CDStruct_1b6d18a9 _observationInterval;
}

@property (retain, nonatomic) AVAssetTrack *timecodeTrack;
@property (nonatomic, readonly) CDStruct_1b6d18a9 observationInterval;

- (id)initWithTimecodeTrack:(id)arg1 videoTrack:(id)arg2;
- (void)calculateMaxFrameAndTimecode;
- (id)maxTimecodeString;
- (id)maxFrameCountString;
- (long long)calculateFrameNumberAtCMTime:(CDStruct_1b6d18a9)arg1;
- (id)calculateTimecodeAtFrame:(long long)arg1;
- (id)timecodeForFrameNumber32UsingFormatDescription:(struct opaqueCMFormatDescription *)arg1 timecodeStartFrame:(long long)arg2;
- (struct CVSMPTETime)timecodeForFrameNumber64UsingCachedDescription:(long long)arg1;
- (struct CVSMPTETime)timecodeForOffset:(long long)arg1 from:(long long)arg2 timecode:(id)arg3;
- (long long)calculateFrameNumberAtTimeInterval:(double)arg1;
- (double)timeIntervalForFrameNumber:(long long)arg1;
- (void)cacheTimecodeDescriptionForSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (_Bool)validateCMTime:(CDStruct_1b6d18a9)arg1;
- (_Bool)readTimecodes;
- (_Bool)timecodeAvailable;

@end
