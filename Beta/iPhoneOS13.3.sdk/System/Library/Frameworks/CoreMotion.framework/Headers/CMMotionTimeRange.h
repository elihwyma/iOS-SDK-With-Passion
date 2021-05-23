/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <CoreMotion/CMLogItem.h>

@class NSDate;

@interface CMMotionTimeRange : CMLogItem

{
    NSDate *fStartDate;
    NSDate *fEndDate;
}

@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;

+ (_Bool)supportsSecureCoding;
+ (id)CMMotionTimeRangeFromCLMotionTimeRange:(CDStruct_c3b9c2ee)arg1;
+ (CDStruct_c3b9c2ee)CLMotionTimeRangeFromCMMotionTimeRange:(id)arg1;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(double)arg1 endDate:(double)arg2;

@end
