/*
 Image: /System/Library/PrivateFrameworks/AMPCoreUI.framework/AMPCoreUI
 */

#import <UIKit/UIViewController.h>

@class AMSUIOnboardingViewController, NSObject, NSString, OBPrivacyLinkController, UIImage, UITraitCollection, UIVisualEffectView, _UIBackdropView;

@protocol OS_dispatch_queue;

@interface AMPOnboardingViewController : UIViewController

{
    _Bool _viewHasAppeared;
    OBPrivacyLinkController *_privacyLinkController;
    CDUnknownBlockType _primaryButtonCallback;
    AMSUIOnboardingViewController *_onboardingController;
    UIImage *_image;
    NSString *_titleText;
    NSString *_descriptionText;
    NSString *_primaryButtonText;
    UIVisualEffectView *_statusBarVisualEffectView;
    _UIBackdropView *_backdropView;
    NSObject<OS_dispatch_queue> *_metricsQueue;
}

@property (retain, nonatomic) AMSUIOnboardingViewController *onboardingController;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSString *titleText;
@property (retain, nonatomic) NSString *descriptionText;
@property (retain, nonatomic) NSString *primaryButtonText;
@property (nonatomic, readonly) _Bool isPresentedInFormSheet;
@property (retain, nonatomic) UIVisualEffectView *statusBarVisualEffectView;
@property (retain, nonatomic) _UIBackdropView *backdropView;
@property (nonatomic, readonly) UITraitCollection *cappedTraitCollection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *metricsQueue;
@property (nonatomic) _Bool viewHasAppeared;
@property (nonatomic, readonly) UIImage *headerImage;
@property (nonatomic, readonly) OBPrivacyLinkController *privacyLinkController;
@property (copy, nonatomic) CDUnknownBlockType primaryButtonCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)isModalInPresentation;
- (id)initWithHeaderImage:(id)arg1 titleText:(id)arg2 descriptionText:(id)arg3 primaryButtonText:(id)arg4 privacyLinkController:(id)arg5;
- (id)initWithTitleText:(id)arg1 features:(id)arg2 primaryButtonText:(id)arg3 privacyLinkController:(id)arg4;
- (void)updateOverrideTraits;
- (id)childTraitCollectionForViewController:(id)arg1;
- (void)didTapPrimaryButton:(id)arg1;

@end
