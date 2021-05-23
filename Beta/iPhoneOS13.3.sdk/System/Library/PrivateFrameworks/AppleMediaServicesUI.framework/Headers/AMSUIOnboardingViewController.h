/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
 */

#import <UIKit/UIViewController.h>

@class NSObject, NSString, OBPrivacyLinkController, OBWelcomeController, UIImage, UITraitCollection;

@protocol OS_dispatch_queue;

@interface AMSUIOnboardingViewController : UIViewController

{
    _Bool _viewHasAppeared;
    OBPrivacyLinkController *_privacyLinkController;
    CDUnknownBlockType _primaryButtonCallback;
    OBWelcomeController *_welcomeController;
    UIImage *_image;
    NSString *_titleText;
    NSString *_descriptionText;
    NSString *_primaryButtonText;
    NSObject<OS_dispatch_queue> *_metricsQueue;
}

@property (retain, nonatomic) OBWelcomeController *welcomeController;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSString *titleText;
@property (retain, nonatomic) NSString *descriptionText;
@property (retain, nonatomic) NSString *primaryButtonText;
@property (retain, nonatomic) OBPrivacyLinkController *privacyLinkController;
@property (nonatomic, readonly) _Bool isPresentedInFormSheet;
@property (nonatomic, readonly) UITraitCollection *cappedTraitCollection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *metricsQueue;
@property (nonatomic) _Bool viewHasAppeared;
@property (nonatomic, readonly) UIImage *headerImage;
@property (copy, nonatomic) CDUnknownBlockType primaryButtonCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)privacyLinkIdentifiersFromController:(id)arg1;

- (struct CGSize)preferredContentSize;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(_Bool)arg1;
- (id)initWithHeaderImage:(id)arg1 titleText:(id)arg2 descriptionText:(id)arg3 primaryButtonText:(id)arg4 privacyLinkController:(id)arg5;
- (id)initWithTitleText:(id)arg1 features:(id)arg2 primaryButtonText:(id)arg3 privacyLinkController:(id)arg4;
- (void)updateOverrideTraits;
- (id)childTraitCollectionForViewController:(id)arg1;
- (void)didTapPrimaryButton:(id)arg1;
- (void)commonSetupWithPrimaryButtonText:(id)arg1 privacyLinkBundleIdentifiers:(id)arg2;
- (id)initWithHeaderImage:(id)arg1 titleText:(id)arg2 features:(id)arg3 primaryButtonText:(id)arg4 privacyLinkBundleIdentifier:(id)arg5;
- (id)initWithHeaderImage:(id)arg1 titleText:(id)arg2 descriptionText:(id)arg3 primaryButtonText:(id)arg4 privacyLinkBundleIdentifier:(id)arg5;
- (id)initWithTitleText:(id)arg1 features:(id)arg2 primaryButtonText:(id)arg3 privacyLinkBundleIdentifier:(id)arg4;

@end
