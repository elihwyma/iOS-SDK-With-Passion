/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface OKTransition : NSObject

{
    int _animationCompletionBarrier;
    _Bool _reversed;
    _Bool _isForward;
    double _duration;
    struct CGPoint _currentLocation;
}

@property (nonatomic) double duration;
@property (nonatomic) _Bool reversed;
@property (nonatomic) _Bool isForward;
@property (readonly) struct CGPoint currentLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) _Bool tracksWithFinger;

+ (id)supportedSettings;
+ (void)setupJavascriptContext:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)initWithSettings:(id)arg1;
- (_Bool)_canComplete;
- (void)startInteractiveTransitionWithContext:(id)arg1;
- (void)makeCurrentTransitionInteractiveWithContext:(id)arg1 andProgress:(double)arg2;
- (void)animateTransitionWithContext:(id)arg1;
- (void)endInteractiveTransitionWithContext:(id)arg1 transitionCompleted:(_Bool)arg2;
- (void)updateInteractiveTransitionWithContext:(id)arg1 andProgress:(double)arg2;
- (id)settingObjectForKey:(id)arg1;
- (void)setUserSettingObject:(id)arg1 forKey:(id)arg2;
- (void)setSettingDuration:(double)arg1;
- (void)_transitionInView:(id)arg1 fromSubview:(id)arg2 toSubview:(id)arg3 wasInteractive:(_Bool)arg4 duration:(double)arg5 doEaseIn:(_Bool)arg6 doEaseOut:(_Bool)arg7 isCompleting:(_Bool)arg8 wasCancelled:(_Bool)arg9 fromProgress:(double)arg10 completionHandler:(CDUnknownBlockType)arg11;
- (void)transitionInView:(id)arg1 fromSubview:(id)arg2 toSubview:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (double)transitionDurationWithContext:(id)arg1;
- (void)setSettingReversed:(_Bool)arg1;
- (struct CGPoint)resolveLocation:(struct CGPoint)arg1;

@end
