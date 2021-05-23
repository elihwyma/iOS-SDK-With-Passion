/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKAction.h>

@interface OKActionPinch : OKAction

{
    double _scale;
    double _angle;
    double _velocity;
    struct CGPoint _translation;
}

@property (nonatomic) double scale;
@property (nonatomic) double angle;
@property (nonatomic) struct CGPoint translation;
@property (nonatomic) double velocity;

+ (_Bool)supportsSecureCoding;
+ (void)setupJavascriptContext:(id)arg1;
+ (id)pinchActionWithState:(unsigned long long)arg1 location:(struct CGPoint)arg2 touchCount:(unsigned long long)arg3 scale:(double)arg4 angle:(double)arg5 translation:(struct CGPoint)arg6 velocity:(double)arg7 context:(id)arg8;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
