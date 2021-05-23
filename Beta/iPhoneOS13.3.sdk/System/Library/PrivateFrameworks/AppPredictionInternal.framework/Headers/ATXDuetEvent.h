/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSDate, NSUUID;

@interface ATXDuetEvent : NSObject

{
    NSDate *_startDate;
    NSDate *_endDate;
    NSUUID *_locationIdentifier;
}

@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;
@property (copy, nonatomic) NSUUID *locationIdentifier;

+ (long long)_secondsInDayFromDate:(id)arg1 calendar:(id)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (long long)compare:(id)arg1;
- (id)identifier;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2;
- (id)initWithDKEvent:(id)arg1;
- (id)initWithCurrentContextStoreValues;
- (long long)startDateSecondsAfterMidnight;
- (long long)endDateSecondsAfterMidnight;
- (_Bool)isStartDateOnWeekday;
- (_Bool)isEndDateOnWeekday;
- (id)locationIdentifierUUIDString;
- (void)tagWithLocationOfInterestIdentifier:(id)arg1;

@end
