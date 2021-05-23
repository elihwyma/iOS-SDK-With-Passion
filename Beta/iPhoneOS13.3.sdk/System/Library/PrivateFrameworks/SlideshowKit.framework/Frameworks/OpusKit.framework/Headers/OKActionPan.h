/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKAction.h>

@interface OKActionPan : OKAction

{
    unsigned long long _direction;
    struct CGPoint _translation;
    struct CGPoint _velocity;
}

@property (nonatomic) struct CGPoint translation;
@property (nonatomic) struct CGPoint velocity;
@property (nonatomic) unsigned long long direction;

+ (_Bool)supportsSecureCoding;
+ (void)setupJavascriptContext:(id)arg1;
+ (id)panActionWithState:(unsigned long long)arg1 location:(struct CGPoint)arg2 touchCount:(unsigned long long)arg3 translation:(struct CGPoint)arg4 velocity:(struct CGPoint)arg5 direction:(unsigned long long)arg6 context:(id)arg7;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
