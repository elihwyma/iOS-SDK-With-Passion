/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUViewController.h>

@class NSMutableArray, SUMaskProvider, SUMaskedView, SUOverlayTransition, SUScriptFunction, SUScriptWindowContext, SUTouchCaptureView, UIViewController;

@interface SUOverlayViewController : SUViewController

{
    NSMutableArray *_actionQueue;
    UIViewController *_activeViewController;
    UIViewController *_backViewController;
    _Bool _canSwipeToDismiss;
    UIViewController *_frontViewController;
    SUOverlayTransition *_lastFlipTransition;
    struct CGSize _overlaySize;
    SUOverlayTransition *_presentationTransition;
    SUScriptWindowContext *_scriptWindowContext;
    double _shadowOpacity;
    double _shadowRadius;
    SUScriptFunction *_shouldDismissFunction;
    long long _state;
    SUMaskedView *_subviewContainerView;
    SUTouchCaptureView *_touchCaptureView;
}

@property (nonatomic, readonly) UIViewController *activeViewController;
@property (retain, nonatomic) UIViewController *backViewController;
@property (retain, nonatomic) UIViewController *frontViewController;
@property (nonatomic) struct CGSize overlaySize;
@property (retain, nonatomic) SUMaskProvider *maskProvider;
@property (nonatomic) double shadowOpacity;
@property (nonatomic) double shadowRadius;
@property (nonatomic) _Bool canSwipeToDismiss;
@property (retain, nonatomic) SUScriptFunction *shouldDismissFunction;
@property (nonatomic, readonly, getter=isActiveOverlay) _Bool activeOverlay;
@property (nonatomic, readonly, getter=isOnFront) _Bool onFront;
@property (retain, nonatomic) SUOverlayTransition *presentationTransition;

+ (struct CGSize)defaultOverlaySize;

- (id)init;
- (void)dealloc;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)_performNextAction;
- (void)storePage:(id)arg1 finishedWithSuccess:(_Bool)arg2;
- (id)copyArchivableContext;
- (void)restoreArchivableContext:(id)arg1;
- (id)scriptWindowContext;
- (void)setScriptWindowContext:(id)arg1;
- (_Bool)shouldExcludeFromNavigationHistory;
- (void)invalidateForMemoryPurge;
- (void)flipWithTransition:(id)arg1;
- (void)imagePageViewTapped:(id)arg1;
- (void)_enqueueAction:(id)arg1;
- (void)_overlayAnimationDidFinish;
- (void)_overlayActionDidFinish;
- (void)viewWillDismissWithTransition:(id)arg1;
- (id)initWithOverlayConfiguration:(id)arg1;
- (void)_applyOverlayConfiguration:(id)arg1;
- (void)_setActiveViewController:(id)arg1 updateInterface:(_Bool)arg2;
- (void)_tearDownTouchCaptureView;
- (id)_activeViewController;
- (id)_subviewContainerView;
- (void)_applyDisplayProperties;
- (void)_setShadowVisible:(_Bool)arg1;
- (void)_touchCaptureAction:(id)arg1;
- (id)_flipTransition;
- (void)_finishFlipAction:(id)arg1;
- (void)_performFlipTransitionAction:(id)arg1;
- (_Bool)_isControllerLoaded:(id)arg1;
- (void)_performFlipAction:(id)arg1;

@end
