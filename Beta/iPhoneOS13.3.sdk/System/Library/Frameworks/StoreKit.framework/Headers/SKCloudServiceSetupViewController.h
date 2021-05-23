/*
 Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import <UIKit/UIViewController.h>

@class NSString, SFSafariViewController, SKCloudServiceSetupConfiguration, SKCloudServiceSetupReloadContext, SURedeemCameraViewController, _UIResilientRemoteViewContainerViewController;

@protocol SKCloudServiceSetupViewControllerDelegate;

@interface SKCloudServiceSetupViewController : UIViewController

{
    SURedeemCameraViewController *_presentedRedeemCameraViewController;
    _UIResilientRemoteViewContainerViewController *_remoteViewContainerViewController;
    _Bool _isRemoteViewControllerReady;
    _Bool _isUnableToLoadRemoteViewController;
    _Bool _hasInitializedServiceViewController;
    _Bool _isFullyAppeared;
    SKCloudServiceSetupReloadContext *_activeCloudServiceSetupReloadContext;
    CDUnknownBlockType _loadCompletionHandler;
    SFSafariViewController *_safariViewController;
    id <SKCloudServiceSetupViewControllerDelegate> _delegate;
    SKCloudServiceSetupConfiguration *_configuration;
}

@property (copy, nonatomic, readonly) SKCloudServiceSetupConfiguration *configuration;
@property (weak, nonatomic) id <SKCloudServiceSetupViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)loadWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)isModalInPresentation;
- (void)setModalInPresentation:(_Bool)arg1;
- (void)overrideCreditCardPresentationWithCompletion:(CDUnknownBlockType)arg1;
- (void)overrideRedeemCameraPerformAction:(long long)arg1 withObject:(id)arg2;
- (void)_requestRemoteViewController;
- (void)cloudServiceSetupRemoteViewController:(id)arg1 didFinishLoadingWithSuccess:(_Bool)arg2 error:(id)arg3;
- (void)cloudServiceSetupRemoteViewController:(id)arg1 requestsDismissalWithAnimation:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cloudServiceSetupRemoteViewController:(id)arg1 requestsDismissingSafariViewControllerAnimated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cloudServiceSetupRemoteViewController:(id)arg1 requestsPresentingSafariViewControllerWithURL:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)handleSafariScriptURL:(id)arg1;
- (void)reloadWithContext:(id)arg1;
- (void)_dismissCloudServiceSetupViewControllerWithAnimation:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_errorWithCode:(long long)arg1 errorDescriptionLocalizationKey:(id)arg2;
- (void)_reportErrorForMissingSystemMusicApplication;
- (void)_reloadWithActiveCloudServiceSetupReloadContext;
- (void)_remoteViewControllerExtensionWasInterrupted;
- (void)_didReceiveRemoteViewController:(id)arg1;
- (void)safariViewControllerDidFinish:(id)arg1;
- (void)safariViewController:(id)arg1 didCompleteInitialLoad:(_Bool)arg2;

@end
