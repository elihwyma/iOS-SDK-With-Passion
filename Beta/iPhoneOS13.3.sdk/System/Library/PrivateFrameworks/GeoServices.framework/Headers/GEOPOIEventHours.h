/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

#import <GeoServices/Swift-Protocol.h>

@class NSArray, NSDateInterval;

@interface GEOPOIEventHours : NSObject <Swift>

{
    NSDateInterval *_dateInterval;
    NSArray *_hours;
}

@property (retain, nonatomic) NSDateInterval *dateInterval;
@property (retain, nonatomic) NSArray *hours;

+ (_Bool)supportsSecureCoding;
+ (id)eventHoursForDateTimeRanges:(id)arg1;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDateTimeRange:(id)arg1;
- (id)initWithDateInterval:(id)arg1;

@end
