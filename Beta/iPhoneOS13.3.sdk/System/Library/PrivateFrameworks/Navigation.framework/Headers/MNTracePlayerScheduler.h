/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class MNTracePlayerTimelineStream, NSMutableArray, NSTimer;

@protocol MNTracePlayerSchedulerDelegate;

@interface MNTracePlayerScheduler : NSObject

{
    id <MNTracePlayerSchedulerDelegate> _delegate;
    NSTimer *_timer;
    double _lastTimerScheduleTime;
    double _speedMultiplier;
    NSMutableArray *_timelineStreams;
    double _position;
    MNTracePlayerTimelineStream *_nextTimelineStream;
}

@property (weak, nonatomic) id <MNTracePlayerSchedulerDelegate> delegate;
@property (nonatomic) double speedMultiplier;
@property (nonatomic) double position;

- (id)init;
- (void)dealloc;
- (void)pause;
- (void)resume;
- (void)_update;
- (void)_timerUpdated:(id)arg1;
- (void)addTimelineStream:(id)arg1;
- (void)removeTimelineStream:(id)arg1;
- (void)removeAllTimelineStreams;

@end
