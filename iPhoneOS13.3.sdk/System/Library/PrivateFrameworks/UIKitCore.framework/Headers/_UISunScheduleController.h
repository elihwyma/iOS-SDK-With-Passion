//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOAlmanac, NSMapTable, NSTimer;

__attribute__((visibility("hidden")))
@interface _UISunScheduleController : NSObject
{
    NSMapTable *_observers;
    GEOAlmanac *_almanac;
    BOOL _hasTimeZoneLocation;
    struct {
        double latitude;
        double longitude;
    } _timeZoneLocation;
    BOOL _inScheduleTime;
    NSTimer *_nextEventTimer;
    double _sunsetAbsolute;
    double _sunriseAbsolute;
}

// - (void).cxx_destruct;
- (void)_updateSunriseSunsetTimesRelativeTo:(double)arg1;
- (void)_updateGeoCity;
- (void)_timeZoneChange;
- (void)_significantTimeChange;
- (void)_setNextEventTimerToAbsoluteTime:(double)arg1;
- (void)_invalidateNextEventTimer;
- (void)_updateStatusWithAbsoluteTime:(double)arg1;
- (void)_updateStatus;
- (void)_updateInScheduleTime:(BOOL)arg1;
- (void)_notifyChange;
- (id)nextTransition:(BOOL)arg1;
- (void)forceUpdate;
@property(readonly, nonatomic, getter=isInScheduleTime) BOOL inScheduleTime;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1 changeHandler:(id /* CDUnknownBlockType */)arg2;
- (void)dealloc;
- (id)init;

@end

