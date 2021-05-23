/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKAction.h>

@interface OKActionLongPress : OKAction

{
    unsigned long long _tapCount;
    double _pressDuration;
}

@property (nonatomic) unsigned long long tapCount;
@property (nonatomic) double pressDuration;

+ (_Bool)supportsSecureCoding;
+ (void)setupJavascriptContext:(id)arg1;
+ (id)longPressActionWithLocation:(struct CGPoint)arg1 tapCount:(unsigned long long)arg2 touchCount:(unsigned long long)arg3 pressDuration:(double)arg4 context:(id)arg5;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
