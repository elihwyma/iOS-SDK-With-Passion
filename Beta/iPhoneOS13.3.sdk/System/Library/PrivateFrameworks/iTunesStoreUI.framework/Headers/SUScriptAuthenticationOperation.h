/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStore/ISOperation.h>

@class NSNumber, SSMutableAuthenticationContext, UIViewController;

@interface SUScriptAuthenticationOperation : ISOperation

{
    NSNumber *_authenticatedDSID;
    SSMutableAuthenticationContext *_authenticationContext;
    UIViewController *_presentingViewController;
}

@property (retain) NSNumber *authenticatedDSID;
@property (retain) UIViewController *presentingViewController;

- (id)init;
- (void)run;
- (id)initWithAccountIdentifier:(id)arg1;
- (id)authenticatedAccountDSID;
- (void)sendCompletionCallback:(id)arg1;
- (void)setScriptOptions:(id)arg1;

@end
