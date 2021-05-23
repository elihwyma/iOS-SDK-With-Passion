/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSArray;

@interface GEOPlaceDailyNormalizedHours : NSObject

{
    long long _weekday;
    NSArray *_localTimeIntervals;
    double _closingSoonThresholdSeconds;
    double _openingSoonThresholdSeconds;
    _Bool _openToMidnight;
    _Bool _openFromMidnight;
}

@property (nonatomic, readonly) long long weekday;
@property (nonatomic, readonly) NSArray *localTimeIntervals;
@property (nonatomic) double closingSoonThresholdSeconds;
@property (nonatomic) double openingSoonThresholdSeconds;
@property (nonatomic, readonly) _Bool openToMidnight;
@property (nonatomic, readonly) _Bool openFromMidnight;

+ (long long)todaysWeekday:(long long)arg1 yesterdaysWeekday:(long long)arg2 containsTimeFromMidnight:(double)arg3 inNormalizedHours:(id)arg4;
+ (id)dailyNormalizedHoursForWeekday:(long long)arg1 timeIntervals:(id)arg2 closingThreshold:(double)arg3 openingThreshold:(double)arg4 openToMidnight:(_Bool)arg5 openFromMidnight:(_Bool)arg6;
+ (long long)getWeekdayForDate:(id)arg1 inNormalizedHours:(id)arg2 timeZone:(id)arg3;

- (id)description;

@end
