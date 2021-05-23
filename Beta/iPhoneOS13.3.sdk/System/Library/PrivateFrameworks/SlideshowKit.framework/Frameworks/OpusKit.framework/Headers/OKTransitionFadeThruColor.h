/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKTransition.h>

@class OFUIView, UIColor;

@interface OKTransitionFadeThruColor : OKTransition

{
    OFUIView *_colorView;
    UIColor *_color;
}

@property (retain) UIColor *color;

+ (id)supportedSettings;

- (void)dealloc;
- (id)initWithSettings:(id)arg1;
- (void)startInteractiveTransitionWithContext:(id)arg1;
- (void)makeCurrentTransitionInteractiveWithContext:(id)arg1 andProgress:(double)arg2;
- (void)updateInteractiveTransitionWithContext:(id)arg1 andProgress:(double)arg2;
- (void)_transitionInView:(id)arg1 fromSubview:(id)arg2 toSubview:(id)arg3 wasInteractive:(_Bool)arg4 duration:(double)arg5 doEaseIn:(_Bool)arg6 doEaseOut:(_Bool)arg7 isCompleting:(_Bool)arg8 wasCancelled:(_Bool)arg9 fromProgress:(double)arg10 completionHandler:(CDUnknownBlockType)arg11;
- (void)setSettingColor:(id)arg1;

@end
