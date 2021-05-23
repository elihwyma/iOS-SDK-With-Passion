/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <TVMLKit/TVDocumentViewController.h>

#import <TVMLKit/Swift-Protocol.h>

@class IKAppDocument, NSArray, NSString, TVMediaQueryEvaluator, UITapGestureRecognizer, UIView, UIViewController, _TVPagePerformanceController;

@protocol UIFocusEnvironment, UIFocusItemContainer, _TVAppDocumentControllerDelegate;

@interface _TVAppDocumentController : TVDocumentViewController <Swift>

{
    struct {
        _Bool hasMediaQueryEvaluator;
        _Bool hasWillHostTemplateViewController;
        _Bool hasDidHostTemplateViewController;
    } _delegateFlags;
    _Bool _shouldMarkStylesDirtyBeforeLayout;
    _Bool _opaque;
    _Bool _dismissAppOnMenu;
    _Bool _applicationDeactivatedOnMenu;
    _Bool _transitioning;
    _Bool _visualEffectDisablementNeeded;
    _Bool _presentedModal;
    _Bool _adoptsContext;
    IKAppDocument *_appDocument;
    id <_TVAppDocumentControllerDelegate> _appDelegate;
    UIViewController *_templateViewController;
    CDUnknownBlockType _menuGestureHandler;
    TVMediaQueryEvaluator *_mediaQueryEvaluator;
    UITapGestureRecognizer *_menuGestureRecognizer;
    _TVPagePerformanceController *_pagePerformance;
    UIView *_pagePerformanceView;
}

@property (retain, nonatomic) IKAppDocument *appDocument;
@property (retain, nonatomic) TVMediaQueryEvaluator *mediaQueryEvaluator;
@property (retain, nonatomic) UIViewController *templateViewController;
@property (nonatomic, getter=isTransitioning) _Bool transitioning;
@property (weak, nonatomic) UITapGestureRecognizer *menuGestureRecognizer;
@property (nonatomic, getter=isVisualEffectDisablementNeeded) _Bool visualEffectDisablementNeeded;
@property (retain, nonatomic) _TVPagePerformanceController *pagePerformance;
@property (retain, nonatomic) UIView *pagePerformanceView;
@property (nonatomic, getter=isPresentedModal) _Bool presentedModal;
@property (nonatomic) _Bool adoptsContext;
@property (weak, nonatomic) id <_TVAppDocumentControllerDelegate> appDelegate;
@property (nonatomic) _Bool opaque;
@property (copy, nonatomic) CDUnknownBlockType menuGestureHandler;
@property (nonatomic) _Bool dismissAppOnMenu;
@property (nonatomic, readonly) _Bool applicationDeactivatedOnMenu;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSArray *preferredFocusEnvironments;
@property (weak, nonatomic, readonly) id <UIFocusEnvironment> parentFocusEnvironment;
@property (nonatomic, readonly) id <UIFocusItemContainer> focusItemContainer;
@property (weak, nonatomic, readonly) UIView *preferredFocusedView;

- (void)dealloc;
- (void)reload;
- (void)loadView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)_updateIdleModeStatus;
- (long long)preferredStatusBarStyle;
- (_Bool)_tvTabBarShouldOverlap;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (id)overrideTraitCollectionForChildViewController:(id)arg1;
- (_Bool)automaticallyAdjustsScrollViewInsets;
- (void)scrollToTop;
- (id)activeDocument;
- (void)documentNeedsUpdate:(id)arg1;
- (id)impressionableViewElementsForDocument:(id)arg1;
- (_Bool)document:(id)arg1 evaluateStyleMediaQuery:(id)arg2;
- (void)documentDidUpdate:(id)arg1;
- (void)documentDidUpdateImplicitly:(id)arg1;
- (void)snapshotImpressions;
- (id)_mediaQueryEvaluator;
- (void)updatePreferredFocusedViewStateForFocus:(_Bool)arg1;
- (void)_darkerSystemColorStatusChanged:(id)arg1;
- (void)_updateTemplateViewController;
- (void)_markAndNotifyStylesDirty;
- (id)customAnimatorForNavigationControllerOperation:(long long)arg1 fromViewController:(id)arg2;
- (id)customAnimatorForNavigationControllerOperation:(long long)arg1 toViewController:(id)arg2;
- (_Bool)_isFlowcaseStack;
- (void)_updateModalPresentationStateWithTemplateView:(id)arg1;
- (id)_alertControllerWithError:(id)arg1;
- (void)_willHostTemplateViewController:(id)arg1 usesTransitions:(_Bool *)arg2;
- (void)_didHostTemplateViewController:(id)arg1 usedTransitions:(_Bool)arg2;
- (void)willHostTemplateViewController:(id)arg1 usesTransitions:(_Bool *)arg2;
- (void)didHostTemplateViewController:(id)arg1 usedTransitions:(_Bool)arg2;
- (void)_menuGestureHandler:(id)arg1;
- (_Bool)ppt_isLoading;
- (id)currentImpressionableElements;
- (void)pagePerformanceController:(id)arg1 didUpdateMetrics:(id)arg2;
- (struct CGSize)tv_adjustedWindowSizeForDocument:(id)arg1;
- (_Bool)tv_isPresentedModalForDocument:(id)arg1;
- (id)initWithAppDocument:(id)arg1;
- (void)replaceAppDocumentWithAppDocument:(id)arg1;
- (struct CGSize)formSize;

@end
