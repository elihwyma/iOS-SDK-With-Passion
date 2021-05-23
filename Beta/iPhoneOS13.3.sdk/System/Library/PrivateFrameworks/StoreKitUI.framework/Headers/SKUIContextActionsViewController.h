/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIViewController.h>

#import <StoreKitUI/Swift-Protocol.h>

@class NSMutableArray, NSString, SKUIContextActionsConfiguration, SKUIContextActionsPresentationController, UIGestureRecognizer, UIInterfaceActionGroupView, UIStackView, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface SKUIContextActionsViewController : UIViewController <Swift>

{
    _Bool _orbPresentation;
    _Bool _appliedSystemRecognizer;
    UIGestureRecognizer *_systemProvidedGestureRecognzier;
    SKUIContextActionsPresentationController *_transitionPresentationController;
    SKUIContextActionsConfiguration *_configuration;
    NSMutableArray *_constraints;
    UIInterfaceActionGroupView *_contextActionView;
    UIStackView *_stackView;
    UIVisualEffectView *_backgroundView;
    UIInterfaceActionGroupView *_scrollableActionGroupView;
    struct CGPoint _gestureRecognizerInitialLocation;
}

@property (retain, nonatomic) SKUIContextActionsConfiguration *configuration;
@property (retain, nonatomic) NSMutableArray *constraints;
@property (retain, nonatomic) UIInterfaceActionGroupView *contextActionView;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UIVisualEffectView *backgroundView;
@property (retain, nonatomic) UIInterfaceActionGroupView *scrollableActionGroupView;
@property (nonatomic) struct CGPoint gestureRecognizerInitialLocation;
@property (nonatomic, getter=hasAppliedSystemRecognizer) _Bool appliedSystemRecognizer;
@property (retain, nonatomic) SKUIContextActionsPresentationController *transitionPresentationController;
@property (nonatomic, getter=isOrbPresentation) _Bool orbPresentation;
@property (retain, nonatomic) UIGestureRecognizer *systemProvidedGestureRecognzier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)interfaceAction:(id)arg1 invokeActionHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewTapped:(id)arg1;
- (void)_reloadViewsConfiguration;
- (void)systemProvidedGestureRecognzierTriggered:(id)arg1;
- (void)_applySystemRecognizer;
- (id)_transitionPresentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2;

@end
