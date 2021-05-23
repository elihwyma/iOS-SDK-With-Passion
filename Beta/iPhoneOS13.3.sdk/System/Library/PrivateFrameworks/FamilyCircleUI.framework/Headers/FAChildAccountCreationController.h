/*
 Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
 */

#import <Foundation/NSObject.h>

@class AAGrandSlamSigner, AASetupAssistantService, ACAccount, FARequestConfigurator, NSArray, NSHTTPURLResponse, NSMutableArray, NSString, NSURL, RUILoader, UIActivityIndicatorView, UIBarButtonItem, UINavigationController, UINavigationItem, UIToolbar;

@protocol FAChildAccountCreationDelegate;

@interface FAChildAccountCreationController : NSObject

{
    AASetupAssistantService *_setupService;
    ACAccount *_appleAccount;
    AAGrandSlamSigner *_grandSlamSigner;
    NSURL *_launchingURL;
    NSMutableArray *_objectModels;
    RUILoader *_loader;
    CDUnknownBlockType _loaderCompletion;
    NSHTTPURLResponse *_currentResponse;
    UIActivityIndicatorView *_spinnerView;
    UIBarButtonItem *_originalRightBarButtonItem;
    UINavigationItem *_navigationItemShowingSpinner;
    NSArray *_originalEnabledToolbarItems;
    NSArray *_originalToolbarItems;
    UIToolbar *_originalToolbar;
    _Bool _isShowingSpinner;
    _Bool _isPendingDismissal;
    FARequestConfigurator *_requestConfigurator;
    id <FAChildAccountCreationDelegate> _delegate;
    UINavigationController *_navigationController;
    NSString *_continuationData;
}

@property (weak, nonatomic) id <FAChildAccountCreationDelegate> delegate;
@property (weak, nonatomic) UINavigationController *navigationController;
@property (copy, nonatomic) NSString *continuationData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)_cancel;
- (id)initWithAccountManager:(id)arg1;
- (id)_spinnerView;
- (void)objectModelDidChange:(id)arg1;
- (id)parentViewControllerForObjectModel:(id)arg1;
- (id)loader:(id)arg1 willLoadRequest:(id)arg2 redirectResponse:(id)arg3;
- (id)sessionConfigurationForLoader:(id)arg1;
- (void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(unsigned long long)arg3;
- (void)loader:(id)arg1 didFailWithError:(id)arg2;
- (void)loader:(id)arg1 didReceiveHTTPResponse:(id)arg2;
- (void)objectModelPressedBack:(id)arg1;
- (void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3;
- (unsigned long long)supportedInterfaceOrientationsForObjectModel:(id)arg1 page:(id)arg2;
- (id)initWithAppleAccount:(id)arg1 grandSlamSigner:(id)arg2;
- (void)_showActivitySpinnerInNavigationBar;
- (void)_sendUserToiTunesSettings;
- (void)_popObjectModelAnimated:(_Bool)arg1;
- (void)_addHeadersToRequest:(id)arg1;
- (id)_requestConfigurator;
- (void)loadRemoteUI;
- (void)prepareForDismiss;
- (void)_startRemoteUILoaderWithRequest:(id)arg1;
- (void)_cleanupRemoteUILoader;
- (void)_hideActivitySpinner;
- (void)_displayConnectionErrorAndCancel;
- (void)_renewCredentialsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_createAppleIDWithParameters:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_createChildAccount;
- (_Bool)_pressedLink:(id)arg1 comesFromBarButtonItem:(id)arg2 objectModel:(id)arg3;
- (void)_showActivitySpinnerInToolbar:(id)arg1;

@end
