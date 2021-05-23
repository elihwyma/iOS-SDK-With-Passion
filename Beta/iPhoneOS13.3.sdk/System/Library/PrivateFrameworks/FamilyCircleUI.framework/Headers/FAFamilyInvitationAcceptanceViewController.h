/*
 Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
 */

#import <AppleAccountUI/AAUIBleachedNavigationController.h>

@class AAFamilyInvite, AAGrandSlamSigner, AAUIRemoteUIController, ACAccount, ACAccountStore, NSMutableURLRequest, NSOperationQueue, NSString;

@protocol FAInvitationAcceptanceDelegate;

@interface FAFamilyInvitationAcceptanceViewController : AAUIBleachedNavigationController

{
    ACAccount *_account;
    ACAccountStore *_accountStore;
    AAGrandSlamSigner *_grandSlamSigner;
    AAFamilyInvite *_invite;
    AAUIRemoteUIController *_remoteUIController;
    NSOperationQueue *_inviteOperationQueue;
    NSMutableURLRequest *_startRemoteUIRequest;
    NSMutableURLRequest *_currentRemoteUIRequest;
}

@property (weak, nonatomic) id <FAInvitationAcceptanceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)_cancelButtonWasTapped:(id)arg1;
- (void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2;
- (void)remoteUIController:(id)arg1 willPresentObjectModel:(id)arg2 modally:(_Bool)arg3;
- (void)remoteUIControllerDidDismiss:(id)arg1;
- (void)remoteUIController:(id)arg1 willLoadRequest:(id)arg2;
- (id)_createCancelButton;
- (void)_sendUserToiTunesSettings;
- (void)confirmIdentityViewController:(id)arg1 didCompleteWithSuccess:(_Bool)arg2;
- (void)_loadiTunesLinkingRemoteUI;
- (void)_showErrorAlert;
- (id)initWithInvite:(id)arg1 appleAccount:(id)arg2 grandSlamSigner:(id)arg3;

@end
