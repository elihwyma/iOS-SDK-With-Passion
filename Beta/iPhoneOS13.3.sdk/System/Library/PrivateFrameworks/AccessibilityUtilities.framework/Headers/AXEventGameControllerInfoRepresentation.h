/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface AXEventGameControllerInfoRepresentation : NSObject

{
    double _directionPadUp;
    double _directionPadDown;
    double _directionPadLeft;
    double _directionPadRight;
    double _faceButtonA;
    double _faceButtonB;
    double _faceButtonX;
    double _faceButtonY;
    double _shoulderButtonR1;
    double _shoulderButtonR2;
    double _shoulderButtonL1;
    double _shoulderButtonL2;
    double _leftJoystickX;
    double _leftJoystickY;
    double _rightJoystickX;
    double _rightJoystickY;
}

@property (nonatomic) double directionPadUp;
@property (nonatomic) double directionPadDown;
@property (nonatomic) double directionPadLeft;
@property (nonatomic) double directionPadRight;
@property (nonatomic) double faceButtonA;
@property (nonatomic) double faceButtonB;
@property (nonatomic) double faceButtonX;
@property (nonatomic) double faceButtonY;
@property (nonatomic) double shoulderButtonR1;
@property (nonatomic) double shoulderButtonR2;
@property (nonatomic) double shoulderButtonL1;
@property (nonatomic) double shoulderButtonL2;
@property (nonatomic) double leftJoystickX;
@property (nonatomic) double leftJoystickY;
@property (nonatomic) double rightJoystickX;
@property (nonatomic) double rightJoystickY;
@property (nonatomic, readonly) _Bool rightJoystickActive;
@property (nonatomic, readonly) _Bool leftJoystickActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)accessibilityEventRepresentationTabularDescription;

@end
