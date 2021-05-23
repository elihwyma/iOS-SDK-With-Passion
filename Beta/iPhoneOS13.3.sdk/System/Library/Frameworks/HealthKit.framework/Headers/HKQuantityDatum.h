/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

#import <HealthKit/Swift-Protocol.h>

@class HKQuantity, NSData, NSDateInterval, NSUUID;

@interface HKQuantityDatum : NSObject <Swift>

{
    NSUUID *_UUID;
    HKQuantity *_quantity;
    NSDateInterval *_dateInterval;
    NSData *_resumeContext;
}

@property (copy, nonatomic, readonly) NSUUID *UUID;
@property (copy, nonatomic, readonly) HKQuantity *quantity;
@property (copy, nonatomic, readonly) NSDateInterval *dateInterval;
@property (copy, nonatomic, readonly) NSData *resumeContext;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 dateInterval:(id)arg2 quantity:(id)arg3 resumeContext:(id)arg4;

@end
