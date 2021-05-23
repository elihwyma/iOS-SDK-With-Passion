/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class GEOAlmanac, NSMapTable, NSTimer;

__attribute__((visibility("hidden")))
@interface _UISunScheduleController : NSObject

{
    NSMapTable *_observers;
    GEOAlmanac *_almanac;
    _Bool _hasTimeZoneLocation;
    struct {
        double latitude;
        double longitude;
    } _timeZoneLocation;
    _Bool _inScheduleTime;
    NSTimer *_nextEventTimer;
    double _sunsetAbsolute;
    double _sunriseAbsolute;
}

@property (nonatomic, readonly, getter=isInScheduleTime) _Bool inScheduleTime;

- (id)init;
- (void)dealloc;
- (void)removeObserver:(id)arg1;
- (void)_significantTimeChange;
- (void)_notifyChange;
- (void)addObserver:(id)arg1 changeHandler:(CDUnknownBlockType)arg2;
- (void)forceUpdate;
- (id)nextTransition:(_Bool)arg1;
- (void)_updateStatus;
- (void)_timeZoneChange;
- (void)_updateGeoCity;
- (void)_invalidateNextEventTimer;
- (void)_updateStatusWithAbsoluteTime:(double)arg1;
- (void)_updateSunriseSunsetTimesRelativeTo:(double)arg1;
- (void)_updateInScheduleTime:(_Bool)arg1;
- (void)_setNextEventTimerToAbsoluteTime:(double)arg1;

@end
