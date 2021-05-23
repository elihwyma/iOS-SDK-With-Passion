/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKAction.h>

@class NSString;

@interface OKActionKeyPressed : OKAction

{
    _Bool isKeyUp;
    NSString *keyPressed;
    double timestamp;
}

@property (retain, nonatomic) NSString *keyPressed;
@property (nonatomic, readonly) double timestamp;
@property (nonatomic, readonly) _Bool isKeyUp;

+ (_Bool)supportsSecureCoding;
+ (void)setupJavascriptContext:(id)arg1;
+ (id)keyPressedActionWithKey:(id)arg1 atTime:(double)arg2 isKeyUp:(_Bool)arg3 withLocation:(struct CGPoint)arg4 context:(id)arg5;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
