/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKAction.h>

@interface OKActionSwipe : OKAction

{
    unsigned long long _direction;
}

@property (nonatomic) unsigned long long direction;

+ (_Bool)supportsSecureCoding;
+ (void)setupJavascriptContext:(id)arg1;
+ (id)swipeActionWithLocation:(struct CGPoint)arg1 direction:(unsigned long long)arg2 touchCount:(unsigned long long)arg3 context:(id)arg4;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
