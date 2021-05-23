/*
 Image: /System/Library/PrivateFrameworks/AppleCV3DMOVKit.framework/AppleCV3DMOVKit
 */

#import <Foundation/NSObject.h>

@class CVACLMotionTypeDoubleVector4, CVACLMotionTypeVector3;

@interface CVACMMotionTypeDeviceMotionData : NSObject

{
    _Bool _doingYawCorrection;
    _Bool _doingBiasEstimation;
    _Bool _isInitialized;
    int _magneticFieldCalibrationLevel;
    CVACLMotionTypeDoubleVector4 *_quaternion;
    CVACLMotionTypeVector3 *_userAcceleration;
    CVACLMotionTypeVector3 *_gravity;
    CVACLMotionTypeVector3 *_rotationRate;
    CVACLMotionTypeVector3 *_magneticField;
}

@property (retain, nonatomic) CVACLMotionTypeDoubleVector4 *quaternion;
@property (retain, nonatomic) CVACLMotionTypeVector3 *userAcceleration;
@property (retain, nonatomic) CVACLMotionTypeVector3 *gravity;
@property (retain, nonatomic) CVACLMotionTypeVector3 *rotationRate;
@property (retain, nonatomic) CVACLMotionTypeVector3 *magneticField;
@property int magneticFieldCalibrationLevel;
@property _Bool doingYawCorrection;
@property _Bool doingBiasEstimation;
@property _Bool isInitialized;

- (id)init;

@end
