/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <TextInputCore/MCKeyboardInput.h>

@interface MCTouchInput : MCKeyboardInput

{
    double _radius;
    double _timestamp;
    struct CGPoint _touchPoint;
}

@property (nonatomic, readonly) struct CGPoint touchPoint;
@property (nonatomic, readonly) double radius;
@property (nonatomic, readonly) double timestamp;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)canComposeNew:(id)arg1;
- (id)initWithTouchPoint:(struct CGPoint)arg1 radius:(double)arg2 timestamp:(double)arg3;

@end
