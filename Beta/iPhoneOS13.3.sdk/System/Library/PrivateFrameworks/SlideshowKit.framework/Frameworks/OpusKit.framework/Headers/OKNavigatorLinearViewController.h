/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKNavigatorViewController.h>

@class NSArray, NSMapTable, NSMutableArray, NSString, OFPageViewController, OKTransition;

@interface OKNavigatorLinearViewController : OKNavigatorViewController

{
    NSArray *_transitions;
    OKTransition *_currentTransition;
    OFPageViewController *_pagesViewController;
    NSMutableArray *_orderedPagesNames;
    NSMapTable *_registeredActionBindingTransitions;
    NSMapTable *_actionRespondersTransitionContexts;
    _Bool _wraps;
    _Bool _panIsEnabled;
    _Bool _wantsPageControl;
    _Bool _keyboardIsEnabled;
    OKTransition *_defaultTransition;
    OKTransition *_overrideTransition;
    long long _navigationOrientation;
}

@property (nonatomic) double interactiveTransitionTrackingBoxRadius;
@property (nonatomic) double interactiveTransitionProgressThreshold;
@property (nonatomic) double interactiveTransitionVelocityThreshold;
@property (retain, nonatomic) OKTransition *defaultTransition;
@property (retain, nonatomic) OKTransition *overrideTransition;
@property (nonatomic) long long navigationOrientation;
@property (nonatomic) _Bool wraps;
@property (nonatomic) _Bool panIsEnabled;
@property (nonatomic) _Bool keyboardIsEnabled;
@property (nonatomic) _Bool wantsPageControl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)supportedSettings;
+ (void)setupJavascriptContext:(id)arg1;

- (void)dealloc;
- (void)commonInit;
- (void)viewDidLoad;
- (_Bool)prepareForDisplay;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (long long)presentationCountForPageViewController:(id)arg1;
- (long long)presentationIndexForPageViewController:(id)arg1;
- (_Bool)canPerformAction:(id)arg1;
- (void)pageViewController:(id)arg1 willStartTransitioningToViewController:(id)arg2 fromViewController:(id)arg3 withDirection:(long long)arg4;
- (void)pageViewController:(id)arg1 didStartTransitioningToViewController:(id)arg2 fromViewController:(id)arg3;
- (void)pageViewController:(id)arg1 willFinishTransitioningToViewController:(id)arg2 fromViewController:(id)arg3 transitionWillComplete:(_Bool)arg4;
- (void)pageViewController:(id)arg1 didFinishTransitioningToViewController:(id)arg2 fromViewController:(id)arg3 transitionCompleted:(_Bool)arg4;
- (void)pageViewController:(id)arg1 willStartBouncingWithDirection:(long long)arg2;
- (void)pageViewControllerDidFinishBouncing:(id)arg1;
- (_Bool)pageViewController:(id)arg1 canAutomaticallyHandleGestureRecognizer:(id)arg2;
- (void)pageViewController:(id)arg1 didUpdateTransitioningToViewController:(id)arg2 fromViewController:(id)arg3 withProgress:(double)arg4 andVelocity:(double)arg5;
- (id)navigationController:(id)arg1 animationControllerForDirection:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (_Bool)prepareForWarmup;
- (_Bool)prepareForUnload;
- (void)applySettings;
- (void)registerActionBindingTransition:(id)arg1;
- (void)unregisterActionBindingTransition:(id)arg1;
- (void)presentationDidLiveUpdate;
- (void)navigateToPageWithName:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)gotoPageWithName:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)reloadPagesViewController;
- (void)prepareAdjacentPageViewControllers;
- (void)updatePagesViewController;
- (id)nameForPageBeforePage:(id)arg1;
- (id)nameForPageAfterPage:(id)arg1;
- (void)setSettingOrientation:(long long)arg1;
- (void)goToNext:(id)arg1;
- (void)goToPrevious:(id)arg1;
- (id)initNavigationWithKey:(id)arg1 isKeyUp:(_Bool)arg2 andMethod:(SEL)arg3;
- (void)navigateToNext:(id)arg1;
- (void)navigateToPrevious:(id)arg1;
- (void)_navigateToPrevious:(_Bool)arg1 withAction:(id)arg2 overridingTransition:(_Bool)arg3;
- (id)transitionAfterPage:(id)arg1;
- (id)transitionBeforePage:(id)arg1;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2 createIfNeeded:(_Bool)arg3;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2 createIfNeeded:(_Bool)arg3;
- (void)setCurrentPageToPageWithName:(id)arg1 direction:(long long)arg2 animated:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)_pageViewControllerForActionResponder:(id)arg1;
- (void)setSettingDefaultTransition:(id)arg1;
- (void)setSettingOverrideTransition:(id)arg1;
- (void)setSettingWraps:(_Bool)arg1;
- (void)setSettingKeyboardIsEnabled:(_Bool)arg1;
- (void)setSettingPanIsEnabled:(_Bool)arg1;
- (void)setSettingWantsPageControl:(_Bool)arg1;
- (void)setSettingTransitions:(id)arg1;
- (void)setSettingInteractiveTransitionSettings:(id)arg1;
- (void)pageViewController:(id)arg1 didFinishAnimating:(_Bool)arg2 fromViewController:(id)arg3 transitionCompleted:(_Bool)arg4;

@end
