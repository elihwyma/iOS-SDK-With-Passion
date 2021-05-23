/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSArray;

@interface GEOPlaceDailyHours : NSObject

{
    struct _NSRange _dayOfWeekRange;
    NSArray *_openIntervals;
}

@property (nonatomic, readonly) struct _NSRange dayOfWeekRange;
@property (nonatomic, readonly) NSArray *openIntervals;

+ (id)dailyHours:(id)arg1 forDays:(struct _NSRange)arg2;
+ (id)getPlaceDailyHoursForWeekday:(long long)arg1 placeDailyHours:(id)arg2;

- (id)description;

@end
