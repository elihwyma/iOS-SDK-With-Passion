/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKTransitionParallaxPush.h>

@class CATransition;

@interface OKTransitionCATransition : OKTransitionParallaxPush

{
    CATransition *_transition;
}

- (void)dealloc;
- (id)animation;
- (void)_transitionInView:(id)arg1 fromSubview:(id)arg2 toSubview:(id)arg3 wasInteractive:(_Bool)arg4 duration:(double)arg5 doEaseIn:(_Bool)arg6 doEaseOut:(_Bool)arg7 isCompleting:(_Bool)arg8 wasCancelled:(_Bool)arg9 fromProgress:(double)arg10 completionHandler:(CDUnknownBlockType)arg11;
- (void)prepareInView:(id)arg1;

@end
