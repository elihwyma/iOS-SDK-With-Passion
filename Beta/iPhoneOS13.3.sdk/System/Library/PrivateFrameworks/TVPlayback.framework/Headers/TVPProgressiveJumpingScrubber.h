/*
 Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
 */

#import <Foundation/NSObject.h>

@class NSTimer, TVPPlayer;

__attribute__((visibility("hidden")))
@interface TVPProgressiveJumpingScrubber : NSObject

{
    TVPPlayer *_player;
    double _rate;
    unsigned long long _skipCount;
    double _skipAdjustTime;
    double _nextSkipAdjustTime;
    double _skipAdjustPeriod;
    NSTimer *_skipTimer;
}

@property (nonatomic) unsigned long long skipCount;
@property (nonatomic) double skipAdjustTime;
@property (nonatomic) double nextSkipAdjustTime;
@property (nonatomic) double skipAdjustPeriod;
@property (retain, nonatomic) NSTimer *skipTimer;
@property (weak, nonatomic) TVPPlayer *player;
@property (nonatomic) double rate;

- (void)_skipTimerFired:(id)arg1;
- (void)cancelScrub;
- (double)_nextTimeToAdvanceFromTime:(double)arg1;
- (void)startScrubWithRate:(double)arg1;

@end
