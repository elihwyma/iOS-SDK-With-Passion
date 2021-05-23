/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <Foundation/NSObject.h>

@class NPSDomainAccessor, NPSManager, NSString;

@interface NPKPeerPaymentWebServiceCompanionTargetDevice : NSObject

{
    NPSDomainAccessor *_globalDomainAccessor;
    NPSManager *_preferencesSyncManager;
}

@property (retain, nonatomic) NPSDomainAccessor *globalDomainAccessor;
@property (retain, nonatomic) NPSManager *preferencesSyncManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)attemptToDownloadPeerPaymentPassAtURL:(id)arg1 withWebService:(id)arg2 completion:(CDUnknownBlockType)arg3;

- (id)init;
- (void)dealloc;
- (id)account;
- (id)deviceRegion;
- (void)updateAccountWithCompletion:(CDUnknownBlockType)arg1;
- (void)downloadPassIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (void)cloudStoreStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)initalizeCloudStoreIfNecessaryWithHandler:(CDUnknownBlockType)arg1;
- (void)checkTLKsMissingWithCompletion:(CDUnknownBlockType)arg1;
- (void)resetApplePayManateeViewWithCompletion:(CDUnknownBlockType)arg1;
- (void)initalizeCloudStoreIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (id)secureElementIdentifiers;
- (id)appleAccountInformation;
- (id)bridgedClientInfo;
- (_Bool)userHasDisabledPeerPayment;
- (void)setUserHasDisabledPeerPayment:(_Bool)arg1;
- (void)provisionPeerPaymentPassWithProvisioningController:(id)arg1 credential:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)peerPaymentReRegisterWithURL:(id)arg1 pushToken:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_handleAccountChanged:(id)arg1;

@end
