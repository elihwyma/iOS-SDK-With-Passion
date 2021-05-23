/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class HKQuantity, NSDate;

@interface HKHeartRateSummaryReading : NSObject

{
    NSDate *_date;
    HKQuantity *_quantity;
    long long _context;
}

@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) HKQuantity *quantity;
@property (nonatomic, readonly) long long context;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDate:(id)arg1 quantity:(id)arg2 context:(long long)arg3;
- (id)initWithDate:(id)arg1 quantity:(id)arg2;

@end
