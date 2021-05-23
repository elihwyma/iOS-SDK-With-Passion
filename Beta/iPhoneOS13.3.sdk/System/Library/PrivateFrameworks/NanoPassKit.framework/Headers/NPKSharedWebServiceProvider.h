/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <Foundation/NSObject.h>

@class NPKCompanionAgentConnection, NPKPaymentWebServiceCompanionTargetDevice, NPKPeerPaymentWebServiceCompanionTargetDevice, NSString, PKPaymentWebService, PKPeerPaymentAccount, PKPeerPaymentWebService;

@interface NPKSharedWebServiceProvider : NSObject

{
    PKPaymentWebService *_webService;
    NPKPaymentWebServiceCompanionTargetDevice *_targetDevice;
    PKPeerPaymentWebService *_peerPaymentWebService;
    PKPeerPaymentAccount *_peerPaymentAccount;
    NPKCompanionAgentConnection *_companionAgentConnection;
    NPKPeerPaymentWebServiceCompanionTargetDevice *_peerPaymentTargetDevice;
}

@property (retain, nonatomic) PKPaymentWebService *webService;
@property (retain, nonatomic) PKPeerPaymentWebService *peerPaymentWebService;
@property (retain, nonatomic) PKPeerPaymentAccount *peerPaymentAccount;
@property (retain, nonatomic) NPKCompanionAgentConnection *companionAgentConnection;
@property (retain, nonatomic) NPKPaymentWebServiceCompanionTargetDevice *targetDevice;
@property (retain, nonatomic) NPKPeerPaymentWebServiceCompanionTargetDevice *peerPaymentTargetDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedWebServiceProvider;

- (id)init;
- (void)dealloc;
- (void)setNewAuthRandom:(CDUnknownBlockType)arg1;
- (void)noteForegroundVerificationObserverActive:(_Bool)arg1;
- (void)startBackgroundVerificationObserverForPass:(id)arg1 verificationMethod:(id)arg2;
- (id)_peerPaymentAccount;
- (id)_webServiceContext;
- (id)_peerPaymentWebServiceContext;
- (void)_deviceFailedToPair:(id)arg1;
- (void)handlePreconditionNotMetWithUniqueIDs:(id)arg1 preconditionDescription:(id)arg2 shouldUnregister:(_Bool)arg3;
- (void)handlePushToken:(id)arg1;
- (void)handleUpdatePaymentPassWithTypeIdentifier:(id)arg1;
- (void)handlePreferredAID:(id)arg1 forPassWithUniqueID:(id)arg2;
- (void)handlePaymentTransactions:(id)arg1 appletStates:(id)arg2 forUniqueIDs:(id)arg3;
- (void)handleAppletState:(id)arg1 forUniqueID:(id)arg2;
- (void)handleRemoveTransactionsWithIdentifiers:(id)arg1;
- (void)handleBalanceUpdate:(id)arg1 forUniqueID:(id)arg2;
- (void)archiveWebServiceContext:(id)arg1;
- (void)archiveWebServiceBackgroundContext:(id)arg1;
- (void)handlePaymentWebServiceContextFromWatch:(id)arg1;
- (void)sendWebServiceContextToWatch;
- (void)showPaymentSetupForAppDisplayName:(id)arg1;
- (void)sendPaymentOptionsDefaultsToWatch;
- (void)handleUpdatedPeerPaymentWebServiceContext:(id)arg1 account:(id)arg2;
- (void)handleDownloadAllPaymentPasses;
- (void)checkCompanionPeerPaymentRegistrationState;
- (void)loadWebService;

@end
