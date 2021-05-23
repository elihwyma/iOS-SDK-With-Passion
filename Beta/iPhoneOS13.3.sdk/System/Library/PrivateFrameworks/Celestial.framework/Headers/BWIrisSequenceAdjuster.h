/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class BWMotionDataPreserver, NSMutableArray;

@interface BWIrisSequenceAdjuster : NSObject

{
    NSMutableArray *_discontinuities;
    CDStruct_1b6d18a9 _firstIrisAudioOffset;
    NSMutableArray *_interleavingQueues;
    CDStruct_1b6d18a9 _nextAdjustedVideoTime;
    unsigned int *_mediaTypes;
    NSMutableArray *_timeSkews;
    CDStruct_1b6d18a9 _masterMovieOriginalStartTime;
    CDStruct_1b6d18a9 _previewFrameDuration;
    CDStruct_1b6d18a9 _lastVideoAdjustedTime;
    BWMotionDataPreserver *_motionDataPreserver;
    int _audioOffsetForOriginalStillImageTimeMaximumFrameLatency;
}

@property (nonatomic) int audioOffsetForOriginalStillImageTimeMaximumFrameLatency;
@property (nonatomic) CDStruct_1b6d18a9 masterMovieOriginalStartTime;
@property (readonly) _Bool readyToReleaseAudio;

+ (void)initialize;

- (void)dealloc;
- (void)reset;
- (CDStruct_1b6d18a9)_adjustedTimeForAudioBufferWithTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)_adjustedTimeForVideoBufferWithTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)_audioOffsetForOriginalStillImageTime:(CDStruct_1b6d18a9)arg1 adjustedStillImageTime:(CDStruct_1b6d18a9)arg2;
- (CDStruct_1b6d18a9)_adjustedTimeForMetadataBufferWithTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)adjustedTimeForTime:(CDStruct_1b6d18a9)arg1;
- (_Bool)_getPreviousTimeSkewOut:(CDStruct_56e3bca3 *)arg1 andNextTimeSkewOut:(CDStruct_56e3bca3 *)arg2 forTime:(CDStruct_1b6d18a9)arg3;
- (long long)_indexOfTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)_originalDurationForVideoBufferWithTime:(CDStruct_1b6d18a9)arg1;
- (void)_adjustTimesInAudioInterleavingQueues;
- (id)initWithMediaTypes:(id)arg1 visMotionMetadataPreloadingEnabled:(_Bool)arg2;
- (void)enqueueVideoBufferTime:(CDStruct_1b6d18a9)arg1 nativeTime:(CDStruct_1b6d18a9)arg2 isBracketFrame:(_Bool)arg3 isSISFrame:(_Bool)arg4;
- (void)enqueueSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forMediaTypeWithIndex:(long long)arg2;
- (CDStruct_1b6d18a9)audioOffsetForOriginalStillImageTime:(CDStruct_1b6d18a9)arg1;
- (struct opaqueCMSampleBuffer *)dequeueAndRetainAdjustedSampleBufferForMediaTypeWithIndex:(long long)arg1;
- (void)adjustMovieInfoTimes:(id)arg1;
- (CDStruct_1b6d18a9)adjustedTimeForStillImageTime:(CDStruct_1b6d18a9)arg1;
- (id)_timeSkewsDescription;

@end
