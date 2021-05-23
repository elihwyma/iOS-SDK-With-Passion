/*
 Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

#import <UIKit/UIViewController.h>

@class CCUIModuleCollectionViewController, CCUIModuleInstanceManager, CCUIStatusLabelViewController, NSString;

@protocol CCUIModularControlCenterViewControllerDelegate;

@interface CCUIModularControlCenterViewController : UIViewController

{
    CCUIModuleInstanceManager *_moduleManager;
    _Bool _active;
    _Bool _hostedInTestApp;
    id <CCUIModularControlCenterViewControllerDelegate> _delegate;
    CCUIModuleInstanceManager *_moduleInstanceManager;
    CCUIStatusLabelViewController *_statusLabelViewController;
}

@property (nonatomic, readonly) CCUIModuleInstanceManager *moduleInstanceManager;
@property (nonatomic, readonly) CCUIStatusLabelViewController *statusLabelViewController;
@property (nonatomic, readonly) CCUIModuleCollectionViewController *moduleCollectionViewController;
@property (nonatomic, getter=isHostedInTestApp) _Bool hostedInTestApp;
@property (nonatomic, readonly, getter=isHomeGestureDismissalAllowed) _Bool homeGestureDismissalAllowed;
@property (nonatomic, readonly) unsigned long long moduleRowCount;
@property (weak, nonatomic) id <CCUIModularControlCenterViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_sharedCollectionViewController;

- (struct CGSize)preferredContentSize;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (long long)_interfaceOrientation;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)_resignActive;
- (_Bool)canDismissPresentedContent;
- (void)dismissPresentedContentAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)displayWillTurnOff;
- (void)contentModuleContext:(id)arg1 enqueueStatusUpdate:(id)arg2;
- (void)contentModuleContext:(id)arg1 didUpdateHomeGestureDismissalAllowed:(_Bool)arg2;
- (void)requestExpandModuleForContentModuleContext:(id)arg1;
- (void)dismissExpandedViewForContentModuleContext:(id)arg1;
- (void)dismissControlCenterForContentModuleContext:(id)arg1;
- (id)initWithSystemAgent:(id)arg1;
- (long long)interfaceOrientationForModuleCollectionViewController:(id)arg1;
- (void)moduleCollectionViewController:(id)arg1 didBeginInteractionWithModule:(id)arg2;
- (void)moduleCollectionViewController:(id)arg1 didFinishInteractionWithModule:(id)arg2;
- (void)moduleCollectionViewController:(id)arg1 willOpenExpandedModule:(id)arg2;
- (void)moduleCollectionViewController:(id)arg1 didOpenExpandedModule:(id)arg2;
- (void)moduleCollectionViewController:(id)arg1 willCloseExpandedModule:(id)arg2;
- (void)moduleCollectionViewController:(id)arg1 didCloseExpandedModule:(id)arg2;
- (void)moduleCollectionViewController:(id)arg1 willPresentViewController:(id)arg2;
- (void)moduleCollectionViewController:(id)arg1 willDismissViewController:(id)arg2;
- (void)moduleCollectionViewController:(id)arg1 didAddModuleContainerViewController:(id)arg2;
- (void)moduleCollectionViewController:(id)arg1 willRemoveModuleContainerViewController:(id)arg2;
- (void)moduleCollectionViewController:(id)arg1 didUpdateHomeGestureDismissalAllowed:(_Bool)arg2;
- (void)moduleInstancesChangedForModuleInstanceManager:(id)arg1;
- (void)expandModuleWithIdentifier:(id)arg1;
- (void)dismissExpandedModuleAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissPresentedContentWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_reparentCollectionViewController;
- (void)_reparent;
- (id)_safeStatusLabelViewContainerView;
- (id)_statusLabelViewContainerView;
- (id)_moduleCollectionViewContainerView;
- (id)_safeModuleCollectionViewContainerView;
- (void)closeCurrentModuleWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dismissPresentedContent;
- (void)_reparentAndBecomeActive;

@end
