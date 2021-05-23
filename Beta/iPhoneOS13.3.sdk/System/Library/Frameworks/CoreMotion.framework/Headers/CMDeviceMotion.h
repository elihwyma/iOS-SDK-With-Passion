/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <CoreMotion/CMLogItem.h>

@class CMAttitude;

@interface CMDeviceMotion : CMLogItem

{
    id _internal;
}

@property (nonatomic, readonly) _Bool doingYawCorrection;
@property (nonatomic, readonly) _Bool doingBiasEstimation;
@property (nonatomic, readonly) int magneticFieldCalibrationLevel;
@property (nonatomic, readonly) double headingAccuracy;
@property (nonatomic, readonly) CMAttitude *attitude;
@property (nonatomic, readonly) CDStruct_31142d93 rotationRate;
@property (nonatomic, readonly) CDStruct_31142d93 gravity;
@property (nonatomic, readonly) CDStruct_31142d93 userAcceleration;
@property (nonatomic, readonly) CDStruct_27fd20ed magneticField;
@property (nonatomic, readonly) double heading;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeviceMotion:(CDStruct_981b33bd)arg1 internal:(CDStruct_37a3040a)arg2 timestamp:(double)arg3;

@end
