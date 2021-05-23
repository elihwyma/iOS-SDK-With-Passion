/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface _HKSummary : NSObject

{
    long long _typeCode;
    id _value;
    NSDate *_latestSampleDate;
    NSDate *_summaryStartDate;
    NSDate *_summaryEndDate;
}

@property (nonatomic) long long typeCode;
@property (retain, nonatomic) id value;
@property (retain, nonatomic) NSDate *latestSampleDate;
@property (retain, nonatomic) NSDate *summaryStartDate;
@property (retain, nonatomic) NSDate *summaryEndDate;

+ (_Bool)supportsSecureCoding;
+ (id)valuesByTypeFromSummaries:(id)arg1;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTypeCode:(long long)arg1;
- (void)setSummaryDatesUsingCalendar:(id)arg1;
- (id)initWithTypeCode:(long long)arg1 value:(id)arg2 sampleDate:(id)arg3 usingCalendar:(id)arg4;

@end
