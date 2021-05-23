/*
 Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

#import <Foundation/NSObject.h>

#import <ControlCenterUI/Swift-Protocol.h>

@protocol CCUIAnimationParameters;

@interface CCUIAnimation : NSObject <Swift>

{
    id <CCUIAnimationParameters> _parameters;
    double _delay;
    double _speed;
    CDUnknownBlockType _animations;
}

@property (copy, nonatomic, readonly) id <CCUIAnimationParameters> parameters;
@property (nonatomic, readonly) double delay;
@property (nonatomic, readonly) double speed;
@property (copy, nonatomic, readonly) CDUnknownBlockType animations;

+ (id)animationWithParameters:(id)arg1 animations:(CDUnknownBlockType)arg2;
+ (id)animationWithParameters:(id)arg1 delay:(double)arg2 animations:(CDUnknownBlockType)arg3;
+ (id)animationWithParameters:(id)arg1 delay:(double)arg2 speed:(double)arg3 animations:(CDUnknownBlockType)arg4;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithParameters:(id)arg1 delay:(double)arg2 speed:(double)arg3 animations:(CDUnknownBlockType)arg4;

@end
