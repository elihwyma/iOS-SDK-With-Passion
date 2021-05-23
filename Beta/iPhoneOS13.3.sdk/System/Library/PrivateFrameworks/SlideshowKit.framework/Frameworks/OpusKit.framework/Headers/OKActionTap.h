/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKAction.h>

@interface OKActionTap : OKAction

{
    unsigned long long _tapCount;
}

@property (nonatomic) unsigned long long tapCount;

+ (_Bool)supportsSecureCoding;
+ (void)setupJavascriptContext:(id)arg1;
+ (id)tapActionWithLocation:(struct CGPoint)arg1 tapCount:(unsigned long long)arg2 touchCount:(unsigned long long)arg3 context:(id)arg4;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
