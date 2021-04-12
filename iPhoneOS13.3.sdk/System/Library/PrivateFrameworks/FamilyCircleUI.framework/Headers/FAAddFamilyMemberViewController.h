//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import <FamilyCircleUI/FAPickInviteeDelegate-Protocol.h>
#import <FamilyCircleUI/RemoteUIControllerDelegate-Protocol.h>

@class AAGrandSlamSigner, AAUIRemoteUIController, ACAccount, ACAccountStore, FAFamilyPickInviteeViewController, FARequestConfigurator, NSData, NSMutableURLRequest, NSOperationQueue, NSString, RUIObjectModel, SSAccount, UIActivityIndicatorView, UIBarButtonItem, UINavigationItem;

@interface FAAddFamilyMemberViewController : UINavigationController <RemoteUIControllerDelegate, FAPickInviteeDelegate>
{
    ACAccount *_appleAccount;
    ACAccountStore *_accountStore;
    SSAccount *_iTunesAccount;
    AAGrandSlamSigner *_grandSlamSigner;
    NSOperationQueue *_networkingQueue;
    AAUIRemoteUIController *_remoteUIController;
    RUIObjectModel *_lastObjectModel;
    NSMutableURLRequest *_startRemoteUIRequest;
    BOOL _isShowingSpinner;
    UIActivityIndicatorView *_spinnerView;
    UIBarButtonItem *_originalRightBarButtonItem;
    UINavigationItem *_navigationItemShowingSpinner;
    NSData *_pushToken;
    FAFamilyPickInviteeViewController *_pickInviteeVC;
    FARequestConfigurator *_requestConfigurator;
    NSString *_continuationData;
}

@property(copy, nonatomic) NSString *continuationData; // @synthesize continuationData=_continuationData;
// - (void).cxx_destruct;
- (void)pickInviteeViewControllerWantsChildAccountFlow:(id)arg1;
- (void)_startRemoteUIRequest:(id)arg1;
- (void)pickInviteeViewController:(id)arg1 didCompleteWithSuccess:(BOOL)arg2;
- (id)_requestConfigurator;
- (void)remoteUIControllerDidDismiss:(id)arg1;
- (void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(NSUInteger )arg3;
- (void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2;
- (void)remoteUIController:(id)arg1 shouldLoadRequest:(id)arg2 redirectResponse:(id)arg3 withCompletionHandler:(id /* CDUnknownBlockType */)arg4;
- (void)harvestDataFromServerHTTPResponse:(id)arg1;
- (void)hideActivitySpinnerInNavigationBar;
- (void)showActivitySpinnerInNavigationBar;
- (id)_itunesAccount;
@property(copy, nonatomic) NSString *createChildAccountInstructions;
@property(copy, nonatomic) NSString *createChildAccountButtonTitle;
@property(copy, nonatomic) NSString *addFamilyMemberInstructions;
- (BOOL)shouldAutorotate;
- (void)dealloc;
- (id)initWithAppleAccount:(id)arg1 grandSlamSigner:(id)arg2;

@end

