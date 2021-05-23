/*
 Image: /System/Library/PrivateFrameworks/DAEASOAuthFramework.framework/DAEASOAuthFramework
 */

#import <UIKit/UIViewController.h>

@class ACAccount, ACAccountStore, NSError, NSExtension, NSString;

@interface DAEASOAuthWebViewController : UIViewController

{
    ACAccount *_account;
    ACAccountStore *_accountStore;
    CDUnknownBlockType _presentationBlock;
    UIViewController *_serviceViewController;
    NSExtension *_extension;
    NSError *_extensionCancellationError;
    _Bool _extensionRequestDidComplete;
    NSString *_authURI;
    unsigned long long _oauthType;
    _Bool _isFirstTimeSetup;
    CDUnknownBlockType _completion;
}

@property (copy, nonatomic) CDUnknownBlockType completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)presentInternetOfflineError;

- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithAccountDescription:(id)arg1 presentationBlock:(CDUnknownBlockType)arg2;
- (id)initWithAccount:(id)arg1 accountStore:(id)arg2 presentationBlock:(CDUnknownBlockType)arg3;
- (void)_extensionRequestDidCancelWithError:(id)arg1;
- (void)_extensionRequestDidCompleteWithTokens:(id)arg1 extensionCompletion:(CDUnknownBlockType)arg2;
- (void)_didInstantiateRemoteViewController;
- (void)_dismissAndCompleteWithIdentity:(id)arg1 error:(id)arg2 extensionCompletion:(CDUnknownBlockType)arg3;
- (void)_presentUsernameMismatchAlert;
- (void)_commonInitializationWithAccount:(id)arg1 accountStore:(id)arg2 username:(id)arg3 accountDescription:(id)arg4 presentationBlock:(CDUnknownBlockType)arg5;
- (id)initWithAccount:(id)arg1 accountStore:(id)arg2 authURI:(id)arg3 accountType:(unsigned long long)arg4 userName:(id)arg5 accountDescription:(id)arg6 isFirstTimeSetup:(_Bool)arg7 presentationBlock:(CDUnknownBlockType)arg8;

@end
