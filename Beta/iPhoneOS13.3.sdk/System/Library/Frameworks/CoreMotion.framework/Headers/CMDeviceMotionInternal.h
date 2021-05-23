/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@class CMAttitude;

@interface CMDeviceMotionInternal : NSObject

{
    CDStruct_31142d93 fGravity;
    CDStruct_31142d93 fUserAcceleration;
    CDStruct_31142d93 fRotationRate;
    CMAttitude *fAttitude;
    CDStruct_31142d93 fMagneticField;
    int fMagneticFieldCalibrationLevel;
    _Bool fDoingYawCorrection;
    _Bool fDoingBiasEstimation;
    float fHeading;
    float fHeadingAccuracy;
}

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setDeviceMotion:(CDStruct_981b33bd)arg1 internal:(CDStruct_37a3040a)arg2;
- (id)initWithDeviceMotion:(CDStruct_981b33bd)arg1 internal:(CDStruct_37a3040a)arg2;

@end
