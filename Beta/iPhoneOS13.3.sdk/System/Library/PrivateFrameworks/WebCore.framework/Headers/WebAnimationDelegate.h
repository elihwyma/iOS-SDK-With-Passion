/*
 Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <NSObject.h>

__attribute__((visibility("hidden")))
@interface WebAnimationDelegate : NSObject

{
    struct PlatformCALayer *m_owner;
}

- (void)setOwner:(struct PlatformCALayer *)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;

@end
