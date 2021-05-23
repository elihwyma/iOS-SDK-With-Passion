/*
 Image: /System/Library/PrivateFrameworks/AppleCV3DMOVKit.framework/AppleCV3DMOVKit
 */

#import <Foundation/NSObject.h>

@class CVACLMotionTypeVector3;

@interface CVACMAccelerometerData : NSObject

{
    float _temperature;
    CVACLMotionTypeVector3 *_acceleration;
    double _timestamp;
}

@property (retain, nonatomic) CVACLMotionTypeVector3 *acceleration;
@property double timestamp;
@property float temperature;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionary;
- (id)initWithDictionary:(id)arg1;

@end
