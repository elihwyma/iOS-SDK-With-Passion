/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKTransition.h>

@interface OKTransitionParallaxPush : OKTransition

{
    unsigned long long _direction;
    double _parallaxAmount;
    double _fadeFromAlpha;
    double _fadeToAlpha;
}

@property (nonatomic) unsigned long long direction;
@property (nonatomic) double parallaxAmount;
@property (nonatomic) double fadeFromAlpha;
@property (nonatomic) double fadeToAlpha;

+ (id)supportedSettings;

- (id)init;
- (id)initWithSettings:(id)arg1;
- (void)startInteractiveTransitionWithContext:(id)arg1;
- (void)makeCurrentTransitionInteractiveWithContext:(id)arg1 andProgress:(double)arg2;
- (_Bool)tracksWithFinger;
- (void)updateInteractiveTransitionWithContext:(id)arg1 andProgress:(double)arg2;
- (void)_transitionInView:(id)arg1 fromSubview:(id)arg2 toSubview:(id)arg3 wasInteractive:(_Bool)arg4 duration:(double)arg5 doEaseIn:(_Bool)arg6 doEaseOut:(_Bool)arg7 isCompleting:(_Bool)arg8 wasCancelled:(_Bool)arg9 fromProgress:(double)arg10 completionHandler:(CDUnknownBlockType)arg11;
- (void)setSettingDirection:(unsigned long long)arg1;
- (void)setSettingParallaxAmount:(double)arg1;
- (void)setSettingFadeFromAlpha:(double)arg1;
- (void)setSettingFadeToAlpha:(double)arg1;

@end
