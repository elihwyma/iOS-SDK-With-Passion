/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

#import <HealthKit/Swift-Protocol.h>

@class NSDate, NSDateComponents;

@interface _HKDateIntervalCollection : NSObject <Swift>

{
    double _approximateIntervalDuration;
    NSDate *_anchorDate;
    NSDateComponents *_intervalComponents;
}

@property (copy, nonatomic, readonly) NSDate *anchorDate;
@property (copy, nonatomic, readonly) NSDateComponents *intervalComponents;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dateIntervalAtIndex:(long long)arg1;
- (id)dateIntervalContainingDate:(id)arg1 index:(long long *)arg2;
- (id)initWithAnchorDate:(id)arg1 intervalComponents:(id)arg2;
- (id)dateIntervalForIntervalsContainingInterval:(id)arg1;

@end
