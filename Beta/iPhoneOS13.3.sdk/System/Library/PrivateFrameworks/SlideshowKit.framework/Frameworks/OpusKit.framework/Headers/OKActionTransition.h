/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKAction.h>

@interface OKActionTransition : OKAction

{
    float _progress;
    float _velocity;
    unsigned long long _target;
}

@property (nonatomic, readonly) unsigned long long target;
@property (nonatomic, readonly) float progress;
@property (nonatomic, readonly) float velocity;

+ (_Bool)supportsSecureCoding;
+ (void)setupJavascriptContext:(id)arg1;
+ (id)transitionWithState:(unsigned long long)arg1 target:(unsigned long long)arg2 progress:(float)arg3 velocity:(float)arg4 context:(id)arg5;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
