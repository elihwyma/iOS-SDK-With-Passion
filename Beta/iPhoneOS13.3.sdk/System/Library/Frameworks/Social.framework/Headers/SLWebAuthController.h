/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <UIKit/UIViewController.h>

@class ACAccount, ACAccountStore, NSError, NSExtension, NSString;

@protocol SLWebClient;

@interface SLWebAuthController : UIViewController

{
    ACAccount *_account;
    ACAccountStore *_accountStore;
    CDUnknownBlockType _presentationBlock;
    UIViewController *_serviceViewController;
    NSExtension *_extension;
    NSError *_extensionCancellationError;
    _Bool _extensionRequestDidComplete;
    CDUnknownBlockType _completion;
    id <SLWebClient> __webClient;
    NSString *__extentionIdentifier;
}

@property (readonly) id <SLWebClient> _webClient;
@property (readonly) NSString *_extentionIdentifier;
@property (copy, nonatomic) CDUnknownBlockType completion;

- (id)init;
- (id)_init;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithAccountDescription:(id)arg1 presentationBlock:(CDUnknownBlockType)arg2;
- (id)initWithAccount:(id)arg1 accountStore:(id)arg2 presentationBlock:(CDUnknownBlockType)arg3;
- (void)_commonInitializationWithAccount:(id)arg1 accountStore:(id)arg2 username:(id)arg3 accountDescription:(id)arg4 youTube:(_Bool)arg5 presentationBlock:(CDUnknownBlockType)arg6;
- (void)_extensionRequestDidCancelWithError:(id)arg1;
- (void)_extensionRequestDidCompleteWithTokens:(id)arg1 extensionCompletion:(CDUnknownBlockType)arg2;
- (id)_extensionItemForAccount:(id)arg1 accountDescription:(id)arg2 username:(id)arg3 youTube:(_Bool)arg4;
- (void)_didInstantiateRemoteViewController;
- (void)_presentInternetOfflineError;
- (void)_dismissAndCompleteWithIdentity:(id)arg1 error:(id)arg2 extensionCompletion:(CDUnknownBlockType)arg3;
- (void)_presentUsernameMismatchAlert;

@end
