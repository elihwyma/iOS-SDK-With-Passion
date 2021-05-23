/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@class CMAttitude, NSString;

@interface CMDeviceMotionLite : NSObject

{
    _Bool _usingCompass;
    float _gyroTemperature;
    float _compassTemperature;
    CMAttitude *_attitude;
    NSString *_physicalDeviceUniqueID;
    unsigned long long _machTimestamp;
    CDStruct_31142d93 _gravity;
    CDStruct_31142d93 _userAcceleration;
    CDStruct_31142d93 _rotationRate;
    CDStruct_31142d93 _rawAcceleration;
    CDStruct_31142d93 _rawRotationRate;
    CDStruct_31142d93 _rawMagneticField;
}

@property (nonatomic, readonly) CDStruct_31142d93 rawAcceleration;
@property (nonatomic, readonly) CDStruct_31142d93 rawRotationRate;
@property (nonatomic, readonly) unsigned long long machTimestamp;
@property (nonatomic, readonly) float gyroTemperature;
@property (nonatomic, readonly) float compassTemperature;
@property (nonatomic, readonly) CDStruct_31142d93 rawMagneticField;
@property (nonatomic, readonly) CDStruct_31142d93 gravity;
@property (nonatomic, readonly) CDStruct_31142d93 userAcceleration;
@property (nonatomic, readonly) float tip;
@property (nonatomic, readonly) float tilt;
@property (nonatomic, readonly) CMAttitude *attitude;
@property (nonatomic, readonly) CDStruct_31142d93 rotationRate;
@property (nonatomic, readonly, getter=isUsingCompass) _Bool usingCompass;
@property (copy, nonatomic, readonly) NSString *physicalDeviceUniqueID;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeviceMotionLite:(CDStruct_946f299f)arg1 andDeviceID:(id)arg2;

@end
