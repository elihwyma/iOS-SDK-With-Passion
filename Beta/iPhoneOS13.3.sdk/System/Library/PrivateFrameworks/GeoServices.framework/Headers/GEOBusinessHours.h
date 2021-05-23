/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOPDBusinessHours, NSArray, NSDate, NSString;

@interface GEOBusinessHours : NSObject

{
    GEOPDBusinessHours *_hours;
    NSArray *_placeDailyHours;
    NSArray *_placeDailyNormalizedHours;
    _Bool _isBrandTypeHours;
}

@property (nonatomic, readonly) unsigned int openingSoonThresholdInSeconds;
@property (nonatomic, readonly) unsigned int closingSoonThresdholdInSeconds;
@property (nonatomic, readonly) unsigned long long hoursType;
@property (nonatomic, readonly) NSArray *pdHours;
@property (nonatomic, readonly) NSArray *placeDailyHours;
@property (nonatomic, readonly) NSArray *placeDailyNormalizedHours;
@property (nonatomic, readonly) NSString *localizedMessage;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) _Bool isBrandTypeHours;

+ (id)prioritizeBusinessHours:(id)arg1 compareDate:(id)arg2;
+ (void)divideBusinessHoursBasedOnTodaysDate:(id)arg1 compareDate:(id)arg2 completion:(CDUnknownBlockType)arg3;

- (id)initWithGEOPDBusinessHours:(id)arg1 timeZone:(id)arg2;
- (id)initWithGEOPDHours:(id)arg1 timeZone:(id)arg2;
- (_Bool)pdHoursAreValid;

@end
