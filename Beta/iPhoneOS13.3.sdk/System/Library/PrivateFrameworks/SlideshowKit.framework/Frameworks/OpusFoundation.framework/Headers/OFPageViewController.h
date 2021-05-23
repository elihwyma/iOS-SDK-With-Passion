/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
 */

#import <OpusFoundation/OFUIViewController.h>

@class NSDictionary, NSString, UIPanGestureRecognizer, UITapGestureRecognizer, _OFViewControllerTransitionContext;

@protocol OFPageViewControllerDataSource, OFPageViewControllerDelegate;

@interface OFPageViewController : OFUIViewController

{
    _OFViewControllerTransitionContext *_currentTransitionContext;
    double _progressOffset;
    _Bool _isInteractive;
    _Bool _isForward;
    _Bool _chainsNextTransition;
    double _progressVelocityForChainedTransition;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UITapGestureRecognizer *_tapGestureRecognizer;
    struct UIEdgeInsets _tapRegionInsets;
    struct CGSize _tapRegionBreadths;
    struct UIEdgeInsets _effectiveTapRegionInsets;
    struct CGSize _effectiveTapRegionBreadths;
    struct CGRect *_tapRegions;
    double _pageSpacing;
    NSDictionary *_incomingAndOutgoingViewControllersForManualTransition;
    long long _lastKnownNavigationDirection;
    struct {
        unsigned int delegateImplementsInteractionControllerForAnimationController:1;
        unsigned int delegateImplementsWillStartTransitioning:1;
        unsigned int delegateImplementsDidStartTransitioning:1;
        unsigned int delegateImplementsWillFinishTransitioning:1;
        unsigned int delegateImplementsDidFinishTransitioning:1;
        unsigned int delegateImplementsWillStartBouncing:1;
        unsigned int delegateImplementsDidFinishBouncing:1;
        unsigned int dataSourceSuppliesBeforeViewController:1;
        unsigned int dataSourceSuppliesAfterViewController:1;
        unsigned int dataSourceSuppliesPageCount:1;
        unsigned int dataSourceSuppliesPageNumber:1;
    } _flags;
    _Bool _panIsEnabled;
    _Bool _wantsPageControl;
    _Bool _bouncesOnEdges;
    id <OFPageViewControllerDataSource> _dataSource;
    id <OFPageViewControllerDelegate> _delegate;
    long long _navigationOrientation;
    OFUIViewController *_viewController;
    double _interactiveTransitionTrackingBoxRadius;
    double _interactiveTransitionProgressThreshold;
    double _interactiveTransitionVelocityThreshold;
}

@property (nonatomic) id <OFPageViewControllerDataSource> dataSource;
@property (nonatomic) id <OFPageViewControllerDelegate> delegate;
@property (nonatomic) long long navigationOrientation;
@property (readonly) OFUIViewController *viewController;
@property (nonatomic) _Bool panIsEnabled;
@property (nonatomic) _Bool bouncesOnEdges;
@property (nonatomic) _Bool wantsPageControl;
@property (nonatomic) double interactiveTransitionTrackingBoxRadius;
@property (nonatomic) double interactiveTransitionProgressThreshold;
@property (nonatomic) double interactiveTransitionVelocityThreshold;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)viewClass;

- (void)dealloc;
- (void)commonInit;
- (void)loadView;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)_contentView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_handlePanGesture:(id)arg1;
- (id)_pageControl;
- (void)_contentViewFrameOrBoundsDidChange;
- (void)_pageControlValueChanged:(id)arg1;
- (void)_updatePageControlViaDataSourceIfNecessary;
- (void)_handleTapGesture:(id)arg1;
- (void)_startTransition;
- (id)_transitionContextForDirection:(long long)arg1 fromViewController:(id)arg2 toViewController:(id)arg3;
- (void)_beginTransitionWithContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setViewController:(id)arg1 direction:(long long)arg2 animated:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)bounceInDirection:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (double)_progressFromRubberBandingProgress:(double)arg1;
- (id)_customInteractionControllerForAnimationController:(id)arg1;
- (double)_normalizerForFingerTracking;
- (double)_normalizerForBoxTracking;
- (void)_updateInteractiveTransitionForProgress:(double)arg1;
- (void)_cancelInteractiveTransitionWithProgressVelocity:(double)arg1;
- (void)_resumeInteractiveTransitionWithTranslation:(double)arg1;
- (void)_startInteractiveTransitionWithVelocity:(double)arg1;
- (void)_finishInteractiveTransitionWithProgress:(double)arg1 andProgressVelocity:(double)arg2;
- (_Bool)_shouldFinishTransitionWithVelocity:(double)arg1;
- (void)_fakeHandlePanGesture;
- (_Bool)usesPageControl;
- (double)_rubberBandingProgressFromProgress:(double)arg1;
- (id)_customAnimationControllerForDirection:(long long)arg1 fromViewController:(id)arg2 toViewController:(id)arg3;
- (void)reportTransitionProgress:(double)arg1;

@end
