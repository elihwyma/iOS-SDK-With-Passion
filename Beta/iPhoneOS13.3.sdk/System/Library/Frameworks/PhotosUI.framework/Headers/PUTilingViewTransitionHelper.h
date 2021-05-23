/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

#import <PhotosUI/Swift-Protocol.h>

@class NSArray, NSString, PUAnimationGroup, PUMaximumChangeRateValueFilter, PUTilingView, PUViewControllerTransition;

@protocol PUTilingViewControllerTransition><PUInterruptibleViewControllerTransition, PUTilingViewControllerTransitionEndPoint;

__attribute__((visibility("hidden")))
@interface PUTilingViewTransitionHelper : NSObject <Swift>

{
    _Bool _transitionPaused;
    _Bool _hasStarted;
    double _presentationDuration;
    double _dismissalDuration;
    PUViewControllerTransition<PUTilingViewControllerTransition><PUInterruptibleViewControllerTransition> *_transition;
    long long __currentOperation;
    double __startTime;
    double __progressSpeed;
    double __transitionProgressOffset;
    double __backgroundProgressOffset;
    PUMaximumChangeRateValueFilter *__transitionProgressValueFilter;
    PUMaximumChangeRateValueFilter *__chromeProgressValueFilter;
    PUAnimationGroup *__tilingViewAnimationGroup;
    PUTilingView *__tilingView;
    id <PUTilingViewControllerTransitionEndPoint> __fromEndPoint;
    id <PUTilingViewControllerTransitionEndPoint> __toEndPoint;
    id <PUTilingViewControllerTransitionEndPoint> __endPointOwningTilingView;
    unsigned long long __interactionOptions;
    NSArray *_transitionPausingCall;
}

@property (nonatomic, getter=isTransitionPaused, setter=_setTransitionPaused:) _Bool transitionPaused;
@property (nonatomic, setter=_setHasStarted:) _Bool hasStarted;
@property (nonatomic, setter=_setCurrentOperation:) long long _currentOperation;
@property (nonatomic, setter=_setStartTime:) double _startTime;
@property (nonatomic, setter=_setProgressSpeed:) double _progressSpeed;
@property (nonatomic, setter=_setTransitionProgressOffset:) double _transitionProgressOffset;
@property (nonatomic, setter=_setBackgroundProgressOffset:) double _backgroundProgressOffset;
@property (retain, nonatomic, setter=_setTransitionProgressValueFilter:) PUMaximumChangeRateValueFilter *_transitionProgressValueFilter;
@property (retain, nonatomic, setter=_setChromeProgressValueFilter:) PUMaximumChangeRateValueFilter *_chromeProgressValueFilter;
@property (retain, nonatomic, setter=_setTilingViewAnimationGroup:) PUAnimationGroup *_tilingViewAnimationGroup;
@property (weak, nonatomic, setter=_setTilingView:) PUTilingView *_tilingView;
@property (weak, nonatomic, setter=_setFromEndPoint:) id <PUTilingViewControllerTransitionEndPoint> _fromEndPoint;
@property (weak, nonatomic, setter=_setToEndPoint:) id <PUTilingViewControllerTransitionEndPoint> _toEndPoint;
@property (weak, nonatomic, setter=_setEndPointOwningTilingView:) id <PUTilingViewControllerTransitionEndPoint> _endPointOwningTilingView;
@property (nonatomic, setter=_setInteractionOptions:) unsigned long long _interactionOptions;
@property (copy, nonatomic) NSArray *transitionPausingCall;
@property (nonatomic, readonly) double presentationDuration;
@property (nonatomic, readonly) double dismissalDuration;
@property (weak, nonatomic) PUViewControllerTransition<PUTilingViewControllerTransition><PUInterruptibleViewControllerTransition> *transition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)transitionEndPointWithViewController:(id)arg1;
+ (void)registerTransitionEndPoint:(id)arg1 forViewController:(id)arg2;
+ (void)unregisterTransitionEndPoint:(id)arg1 forViewController:(id)arg2;

- (id)init;
- (void)pauseTransition;
- (void)updatePausedTransitionWithProgress:(double)arg1 interactionProgress:(double)arg2;
- (void)resumeTransition:(_Bool)arg1;
- (void)pauseTransitionWithOptions:(unsigned long long)arg1;
- (id)initWithPresentationDuration:(double)arg1 dismissalDuration:(double)arg2;
- (void)_getTransitionProgress:(double *)arg1 backgroundProgress:(double *)arg2 chromeProgress:(double *)arg3;
- (void)animateTransitionWithOperation:(long long)arg1 startedInteractively:(_Bool)arg2;
- (_Bool)_validateTransitionFromEndPoint:(id)arg1 toEndPoint:(id)arg2;
- (_Bool)_endPointUsesTransientTilingView:(id)arg1;
- (long long)_barStyleForEndPoint:(id)arg1;
- (void)_transferView:(id)arg1 toSuperview:(id)arg2;

@end
