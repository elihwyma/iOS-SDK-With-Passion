/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSDate.h>

@interface NSDate (GEOCelestial)

+ (id)_geo_calendar;
+ (id)geo_dateWithJulianDay:(double)arg1;

- (double)geo_julianDay;
- (double)geo_hoursAndMinutes;

@end
