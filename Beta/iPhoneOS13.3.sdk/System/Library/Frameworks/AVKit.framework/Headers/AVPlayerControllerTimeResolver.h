/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <NSObject.h>

@class AVTimer;

@protocol AVTimeControlling;

@interface AVPlayerControllerTimeResolver : NSObject

{
    id <AVTimeControlling> _playerController;
    double _interval;
    double _resolution;
    double _currentTime;
    AVTimer *_timer;
    double _minTime;
    double _maxTime;
}

@property double targetTime;
@property double targetTimeWithinEndTimes;
@property (readonly) double remainingTargetTimeWithinEndTimes;
@property double currentTimeWithinEndTimes;
@property (readonly) double remainingTime;
@property (readonly) double remainingTimeWithinEndTimes;
@property (readonly) double seekableTimeRangeDuration;
@property (readonly, getter=isThirtySecondsBeforeCurrentTimeWithinSeekableTimeRanges) _Bool thirtySecondsBeforeCurrentTimeWithinSeekableTimeRanges;
@property (readonly, getter=isCurrentTimeAtEndOfSeekableTimeRanges) _Bool currentTimeAtEndOfSeekableTimeRanges;
@property double minTime;
@property double maxTime;
@property (retain) id <AVTimeControlling> playerController;
@property double interval;
@property double resolution;
@property double currentTime;

+ (id)keyPathsForValuesAffectingCurrentTimeWithinEndTimes;
+ (_Bool)automaticallyNotifiesObserversOfCurrentTime;
+ (id)keyPathsForValuesAffectingTargetTime;
+ (id)keyPathsForValuesAffectingTargetTimeWithinEndTimes;
+ (id)keyPathsForValuesAffectingRemainingTargetTimeWithinEndTimes;
+ (id)keyPathsForValuesAffectingRemainingTime;
+ (id)keyPathsForValuesAffectingRemainingTimeWithinEndTimes;
+ (id)keyPathsForValuesAffectingSeekableTimeRangeDuration;
+ (id)keyPathsForValuesAffectingThirtySecondsBeforeCurrentTimeWithinSeekableTimeRanges;
+ (id)keyPathsForValuesAffectingCurrentTimeAtEndOfSeekableTimeRanges;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;

@end
