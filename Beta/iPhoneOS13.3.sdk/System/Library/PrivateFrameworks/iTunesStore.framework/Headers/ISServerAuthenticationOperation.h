/*
 Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class ISDialog, ISDialogButton, NSNumber, NSURL, SSAuthenticationContext;

@interface ISServerAuthenticationOperation

{
    unsigned long long _authenticatedAccountCredentialSource;
    NSNumber *_authenticatedAccountDSID;
    SSAuthenticationContext *_authenticationContext;
    ISDialog *_dialog;
    _Bool _performsButtonAction;
    ISDialogButton *_performedButton;
    NSURL *_redirectURL;
    ISDialogButton *_selectedButton;
}

@property (retain) NSNumber *authenticatedAccountDSID;
@property (retain) NSURL *redirectURL;
@property (retain) ISDialogButton *selectedButton;
@property (retain) ISDialogButton *performedButton;
@property (retain) SSAuthenticationContext *authenticationContext;
@property (retain) ISDialog *dialog;
@property _Bool performsButtonAction;
@property unsigned long long authenticatedAccountCredentialSource;

- (id)init;
- (void)dealloc;
- (void)run;

@end
