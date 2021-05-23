/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@interface _UIViewAnimationAttributes : NSObject <Swift>

{
    double _duration;
    double _delay;
    unsigned long long _options;
    _Bool _hasSpringAttributes;
    double _springDamping;
    double _springVelocity;
    double _springMass;
    double _springStiffness;
    long long _curve;
}

@property (nonatomic, readonly, getter=_duration) double duration;
@property (nonatomic, readonly, getter=_delay) double delay;
@property (nonatomic, readonly, getter=_curve) long long curve;
@property (nonatomic, readonly, getter=_hasSpringAttributes) _Bool hasSpringAttributes;
@property (nonatomic, readonly, getter=_springDamping) double springDamping;
@property (nonatomic, readonly, getter=_springVelocity) double springVelocity;
@property (nonatomic, readonly, getter=_springMass) double springMass;
@property (nonatomic, readonly, getter=_springStiffness) double springStiffness;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)curve;

@end
