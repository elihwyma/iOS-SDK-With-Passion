/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

#import <HealthKit/Swift-Protocol.h>

@class NSDate, NSString;

@interface _HKTimePeriod : NSObject <Swift>

{
    NSDate *_startDate;
    NSDate *_endDate;
}

@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSDate *endDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)timePeriodWithStartDate:(id)arg1 endDate:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2;
- (_Bool)containsDate:(id)arg1;
- (_Bool)endsBeforeDate:(id)arg1;
- (_Bool)startsAfterDate:(id)arg1;
- (_Bool)containsTimePeriod:(id)arg1;
- (_Bool)overlapsTimePeriod:(id)arg1;
- (long long)compareByStartDate:(id)arg1;
- (long long)compareByEndDate:(id)arg1;

@end
