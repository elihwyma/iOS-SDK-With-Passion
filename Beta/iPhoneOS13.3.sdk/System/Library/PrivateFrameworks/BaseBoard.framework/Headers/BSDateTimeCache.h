/*
 Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

#import <Foundation/NSObject.h>

@interface BSDateTimeCache : NSObject

{
    double _yesterday;
    double _today;
    double _tomorrow;
    double _2daysFromNow;
    double _6daysAgo;
    double _prevWeek;
    double _nextWeek;
    double _lastAttemptedResetTime;
    double _lastSuccessfulResetTime;
    _Bool _isResetting;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)_resetAndConfigureAndPostNotification:(_Bool)arg1;
- (void)_resetAndConfigure;
- (void)_resetAndConfigureIfNecessary;
- (_Bool)_isToday:(double)arg1;
- (_Bool)isWithinPrevWeek:(double)arg1 includeToday:(_Bool)arg2;
- (double)_currentAbsoluteTime;
- (struct __CFCalendar *)_copyCurrentCalendar;
- (double)today;
- (double)tomorrow;
- (double)yesterday;
- (double)prevWeek;
- (double)nextWeek;
- (_Bool)isToday:(double)arg1;
- (_Bool)isTomorrow:(double)arg1;
- (_Bool)isYesterday:(double)arg1;
- (_Bool)isWithinPrevWeek:(double)arg1;
- (_Bool)isWithinNextWeek:(double)arg1;

@end
