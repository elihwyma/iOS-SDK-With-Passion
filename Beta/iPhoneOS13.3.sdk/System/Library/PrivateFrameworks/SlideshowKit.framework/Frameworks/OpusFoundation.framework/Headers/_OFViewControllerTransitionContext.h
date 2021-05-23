/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
 */

#import <NSObject.h>

@class NSString, OFUIView, OFUIViewController;

@protocol OFViewControllerAnimatedTransitioning, OFViewControllerInteractiveTransitioning;

@interface _OFViewControllerTransitionContext : NSObject

{
    OFUIViewController *_fromViewController;
    OFUIViewController *_toViewController;
    OFUIView *_containerView;
    double _progress;
    double _progressVelocity;
    double _lastUpdateTimestamp;
    long long _state;
    struct {
        unsigned int interactorImplementsCompletionSpeed:1;
        unsigned int interactorImplementsCompletionCurve:1;
        unsigned int isCurrentlyInteractive;
        unsigned int transitionWasCancelled:1;
        unsigned int transitionIsCompleting:1;
    } _flags;
    _Bool _isRubberBanding;
    _Bool _doEaseIn;
    _Bool _doEaseOut;
    id <OFViewControllerAnimatedTransitioning> _animator;
    id <OFViewControllerInteractiveTransitioning> _interactor;
    CDUnknownBlockType _interactiveUpdateHandler;
    CDUnknownBlockType _willCompleteHandler;
    CDUnknownBlockType _completionHandler;
}

@property (nonatomic) _Bool isInFlight;
@property (nonatomic) _Bool doEaseIn;
@property (nonatomic) _Bool doEaseOut;
@property (nonatomic) _Bool isRubberBanding;
@property (copy, nonatomic) CDUnknownBlockType interactiveUpdateHandler;
@property (readonly) id <OFViewControllerAnimatedTransitioning> animator;
@property (readonly) id <OFViewControllerInteractiveTransitioning> interactor;
@property (copy, nonatomic) CDUnknownBlockType willCompleteHandler;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) double progressVelocity;

- (void)dealloc;
- (double)progress;
- (_Bool)wasCancelled;
- (id)containerView;
- (_Bool)isInteractive;
- (void)completeTransition:(_Bool)arg1;
- (void)updateInteractiveTransition:(double)arg1;
- (void)startInteractiveTransition;
- (id)fromViewController;
- (id)toViewController;
- (_Bool)initiallyInteractive;
- (_Bool)isCompleting;
- (void)finishInteractiveTransitionWithVelocity:(double)arg1;
- (void)cancelInteractiveTransitionWithVelocity:(double)arg1;
- (id)initWithContainerView:(id)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 animator:(id)arg4 interactor:(id)arg5;
- (void)updateNonInteractiveTransitionWithProgress:(double)arg1;
- (void)makeTransitionInteractiveWithInteractor:(id)arg1 andProgress:(double)arg2;
- (void)setIsCompleting:(_Bool)arg1;

@end
