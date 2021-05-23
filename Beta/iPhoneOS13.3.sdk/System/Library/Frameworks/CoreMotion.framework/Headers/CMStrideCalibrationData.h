/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@interface CMStrideCalibrationData : NSObject

{
    long long _state;
    double _kValue;
    double _begin;
    double _end;
}

@property (nonatomic) long long state;
@property (nonatomic) double kValue;
@property (nonatomic) double begin;
@property (nonatomic) double end;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBegin:(double)arg1 end:(double)arg2 state:(long long)arg3 kValue:(double)arg4;

@end
