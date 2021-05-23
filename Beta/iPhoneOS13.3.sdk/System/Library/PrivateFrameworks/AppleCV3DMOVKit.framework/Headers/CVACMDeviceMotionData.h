/*
 Image: /System/Library/PrivateFrameworks/AppleCV3DMOVKit.framework/AppleCV3DMOVKit
 */

#import <Foundation/NSObject.h>

@class CVACMMotionTypeDeviceMotionData;

@interface CVACMDeviceMotionData : NSObject

{
    CVACMMotionTypeDeviceMotionData *_deviceMotion;
    double _timestamp;
}

@property (retain, nonatomic) CVACMMotionTypeDeviceMotionData *deviceMotion;
@property double timestamp;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionary;
- (id)initWithDictionary:(id)arg1;
- (id)initWithCMDeviceMotion:(id)arg1;

@end
