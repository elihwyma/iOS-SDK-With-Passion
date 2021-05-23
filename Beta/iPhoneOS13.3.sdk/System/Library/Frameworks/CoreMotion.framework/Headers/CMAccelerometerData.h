/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <CoreMotion/CMLogItem.h>

@interface CMAccelerometerData : CMLogItem

{
    id _internal;
}

@property (nonatomic, readonly) CDStruct_31142d93 acceleration;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAcceleration:(CDStruct_03942939)arg1 andTimestamp:(double)arg2;

@end
