/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@interface ARCoachingBasicSpring : NSObject

{
    float _target;
    float _velocity;
    float _position;
    float _tension;
    float _friction;
}

@property (nonatomic) float tension;
@property (nonatomic) float friction;
@property (nonatomic) float input;
@property (nonatomic, readonly) float output;

- (id)initWithTension:(float)arg1 friction:(float)arg2;
- (void)stepWithDeltaTime:(double)arg1;
- (void)setInput:(float)arg1 velocity:(float)arg2;

@end
