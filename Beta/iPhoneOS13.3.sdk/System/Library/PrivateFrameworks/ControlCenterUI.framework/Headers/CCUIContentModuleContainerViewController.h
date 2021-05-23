/*
 Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

#import <UIKit/UIViewController.h>

@class CCUIContentModuleBackgroundView, CCUIContentModuleContainerPresentationController, CCUIContentModuleContentContainerView, NSArray, NSString, UITapGestureRecognizer, UIView, _UIClickPresentationInteraction;

@protocol CCUIContentModule, CCUIContentModuleBackgroundViewController, CCUIContentModuleContainerViewControllerDelegate, CCUIContentModuleContentViewController;

@interface CCUIContentModuleContainerViewController : UIViewController

{
    _Bool _expanded;
    _Bool _contentModuleProvidesOwnPlatter;
    _Bool _transitioning;
    NSString *_moduleIdentifier;
    UIViewController<CCUIContentModuleContentViewController> *_contentViewController;
    id <CCUIContentModuleContainerViewControllerDelegate> _delegate;
    NSString *_materialGroupName;
    NSArray *_topLevelBlockingGestureRecognizers;
    id <CCUIContentModule> _contentModule;
    UIViewController<CCUIContentModuleBackgroundViewController> *_backgroundViewController;
    CCUIContentModuleContainerPresentationController *_presentationController;
    UIView *_highlightWrapperView;
    CCUIContentModuleBackgroundView *_backgroundView;
    CCUIContentModuleContentContainerView *_contentContainerView;
    UIView *_contentView;
    UIView *_maskView;
    UITapGestureRecognizer *_tapRecognizer;
    _UIClickPresentationInteraction *_clickPresentationInteraction;
    struct UIEdgeInsets _expandedContentEdgeInsets;
}

@property (copy, nonatomic) NSString *moduleIdentifier;
@property (retain, nonatomic) id <CCUIContentModule> contentModule;
@property (retain, nonatomic) UIViewController<CCUIContentModuleContentViewController> *contentViewController;
@property (retain, nonatomic) UIViewController<CCUIContentModuleBackgroundViewController> *backgroundViewController;
@property (retain, nonatomic) CCUIContentModuleContainerPresentationController *presentationController;
@property (nonatomic) _Bool contentModuleProvidesOwnPlatter;
@property (retain, nonatomic) UIView *highlightWrapperView;
@property (retain, nonatomic) CCUIContentModuleBackgroundView *backgroundView;
@property (retain, nonatomic) CCUIContentModuleContentContainerView *contentContainerView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) UITapGestureRecognizer *tapRecognizer;
@property (retain, nonatomic) _UIClickPresentationInteraction *clickPresentationInteraction;
@property (nonatomic, getter=isTransitioning) _Bool transitioning;
@property (nonatomic) struct UIEdgeInsets expandedContentEdgeInsets;
@property (nonatomic, readonly) CCUIContentModuleContentContainerView *moduleContentView;
@property (weak, nonatomic) id <CCUIContentModuleContainerViewControllerDelegate> delegate;
@property (copy, nonatomic) NSString *materialGroupName;
@property (nonatomic, getter=isExpanded) _Bool expanded;
@property (nonatomic, readonly) NSArray *topLevelBlockingGestureRecognizers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *childViewControllersForAppearancePropagation;

- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (_Bool)_canShowWhileLocked;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)willBecomeActive;
- (void)willResignActive;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)dismissViewControllerWithTransition:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)clickPresentationInteractionEnded:(id)arg1 wasCancelled:(_Bool)arg2;
- (id)clickPresentationInteraction:(id)arg1 presentationForPresentingViewController:(id)arg2;
- (_Bool)clickPresentationInteractionShouldBegin:(id)arg1;
- (unsigned long long)activationStyleForClickPresentationInteraction:(id)arg1;
- (_Bool)clickPresentationInteractionShouldPresent:(id)arg1;
- (id)clickPresentationInteraction:(id)arg1 previewForHighlightingAtLocation:(struct CGPoint)arg2;
- (void)expandModule;
- (void)dismissExpandedModuleAnimated:(_Bool)arg1;
- (void)_handleTapGestureRecognizer:(id)arg1;
- (void)displayWillTurnOff;
- (void)willPresentViewController:(id)arg1;
- (void)willDismissViewController:(id)arg1;
- (_Bool)definesContentModuleContainer;
- (void)dismissPresentedContentAnimated:(_Bool)arg1;
- (id)initWithModuleIdentifier:(id)arg1 contentModule:(id)arg2 presentationContext:(id)arg3;
- (void)transitionToExpandedMode:(_Bool)arg1;
- (void)_loadContentViewController:(id)arg1;
- (void)_loadBackgroundViewController:(id)arg1;
- (struct CGRect)_backgroundFrameForExpandedState;
- (struct CGRect)_presentationFrameForExpandedState;
- (struct CGRect)_contentFrameForExpandedState;
- (double)_continuousCornerRadiusForExpandedState;
- (double)_continuousCornerRadiusForCompactState;
- (void)_closeExpandedModule:(_Bool)arg1;
- (void)dismissModulePresentedContentAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_configureForContentModuleGroupRenderingIfNecessary;
- (void)_findTopLevelGestureRecognizersForView:(id)arg1 installOnView:(id)arg2;
- (void)_addTopLevelGestureRecognizersFromViewAndSubviews:(id)arg1 toBlockingGestureRecognizers:(id)arg2;
- (struct CGRect)_contentFrameForRestState;
- (_Bool)_isForceTouchAvailable;
- (struct CGRect)_contentBoundsForExpandedState;
- (struct CGRect)_containerFrameForExpandedState;
- (void)_configureMaskViewIfNecessary;
- (void)_setDidExpandModulePreference;
- (struct CGRect)_backgroundFrameForRestState;
- (struct CGRect)_contentBoundsForTransitionProgress:(double)arg1;
- (void)_didEndTransitionWithContentModuleContainerTransition:(id)arg1 completed:(_Bool)arg2;

@end
