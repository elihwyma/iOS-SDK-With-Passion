/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@interface CKElasticFunction : NSObject

{
    double _currentValue;
    double _elastic;
    double _oldForce;
    double _velocity;
    double _friction;
    double _tension;
}

@property (nonatomic) double friction;
@property (nonatomic) double tension;
@property (nonatomic) double input;
@property (nonatomic, readonly) double output;
@property (nonatomic, readonly) double velocity;

+ (id)functionWithTension:(double)arg1 friction:(double)arg2 initialValue:(double)arg3;

- (id)init;
- (void)step;

@end
