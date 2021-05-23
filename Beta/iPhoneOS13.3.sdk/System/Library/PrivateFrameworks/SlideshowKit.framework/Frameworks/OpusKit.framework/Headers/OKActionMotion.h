/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKAction.h>

@interface OKActionMotion : OKAction

{
    double _rotationX;
    double _rotationY;
    double _rotationZ;
}

@property (nonatomic, readonly) double rotationX;
@property (nonatomic, readonly) double rotationY;
@property (nonatomic, readonly) double rotationZ;

+ (_Bool)supportsSecureCoding;
+ (void)setupJavascriptContext:(id)arg1;
+ (id)motionActionWithState:(unsigned long long)arg1 rotationX:(double)arg2 rotationY:(double)arg3 rotationZ:(double)arg4 context:(id)arg5;
+ (id)motionActionWithState:(unsigned long long)arg1 location:(struct CGPoint)arg2 touchCount:(unsigned long long)arg3 rotationX:(double)arg4 rotationY:(double)arg5 rotationZ:(double)arg6 context:(id)arg7;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
