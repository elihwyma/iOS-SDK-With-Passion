/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <CoreMotion/CMLogItem.h>

@class NSNumber;

@interface CMAltitudeData : CMLogItem

{
    id _internal;
}

@property (nonatomic, readonly) NSNumber *relativeAltitude;
@property (nonatomic, readonly) NSNumber *pressure;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAltitude:(float)arg1 andTimestamp:(double)arg2 atBaseAltitude:(float)arg3;
- (id)initWithTimestamp:(double)arg1 pressure:(float)arg2 relativeAltitude:(float)arg3;

@end
