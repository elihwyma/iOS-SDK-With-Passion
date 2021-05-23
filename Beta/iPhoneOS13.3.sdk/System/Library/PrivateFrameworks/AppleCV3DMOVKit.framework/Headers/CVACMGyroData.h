/*
 Image: /System/Library/PrivateFrameworks/AppleCV3DMOVKit.framework/AppleCV3DMOVKit
 */

#import <Foundation/NSObject.h>

@class CVACLMotionTypeVector3;

@interface CVACMGyroData : NSObject

{
    float _temperature;
    CVACLMotionTypeVector3 *_rotationRate;
    double _timestamp;
}

@property (retain, nonatomic) CVACLMotionTypeVector3 *rotationRate;
@property double timestamp;
@property float temperature;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionary;
- (id)initWithDictionary:(id)arg1;

@end
