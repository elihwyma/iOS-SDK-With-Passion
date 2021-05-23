/*
 Image: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
 */

#import <Foundation/NSObject.h>

@class CLLocation, NSError;

@interface W5SpeedTestResult : NSObject

{
    long long _direction;
    long long _size;
    CLLocation *_location;
    NSError *_error;
    double _speed;
}

@property (nonatomic) long long direction;
@property (nonatomic) long long size;
@property (copy, nonatomic) CLLocation *location;
@property (copy, nonatomic) NSError *error;
@property (nonatomic) double speed;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (_Bool)conformsToProtocol:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
