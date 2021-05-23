/*
 Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
 */

#import <Foundation/NSObject.h>

@class AAGrandSlamSigner, ACAccount, ACAccountStore, AIDAServiceOwnersManager, AKAppleIDAuthenticationContext, AKAppleIDServerResourceLoadDelegate, AKAppleIDSigningController, NSData;

@interface FARequestConfigurator : NSObject

{
    ACAccount *_account;
    ACAccountStore *_accountStore;
    ACAccount *_grandSlamAccount;
    AAGrandSlamSigner *_grandSlamSigner;
    AAGrandSlamSigner *_familyGrandSlamSigner;
    AIDAServiceOwnersManager *_serviceOwnersManager;
    AKAppleIDSigningController *_akSigningController;
    AKAppleIDServerResourceLoadDelegate *_resourceLoadDelegate;
    NSData *_pushToken;
    _Bool _attachSetupHeader;
    AKAppleIDAuthenticationContext *_authContext;
}

@property (nonatomic) _Bool attachSetupHeader;
@property (retain, nonatomic) AKAppleIDAuthenticationContext *authContext;

- (id)_account;
- (id)_accountStore;
- (id)initWithAccount:(id)arg1;
- (id)_grandSlamAccount;
- (id)_familyGrandSlamSigner;
- (id)_grandSlamSigner;
- (id)_authContext;
- (id)_serviceOwnersManager;
- (void)addFresnoPayloadToRequest:(id)arg1 additionalPayload:(id)arg2;
- (void)addFresnoHeadersToRequest:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)renewCredentialsWithCompletion:(CDUnknownBlockType)arg1;
- (void)requestForContext:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)addFresnoHeadersToRequest:(id)arg1;
- (void)pushTokenWithCompletion:(CDUnknownBlockType)arg1;
- (void)_resourceLoadDelegate:(CDUnknownBlockType)arg1;
- (id)_fresnoPayloadWithAdditionalPayload:(id)arg1;
- (void)_urlForEventType:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)_urlEndpointForEventType:(id)arg1;
- (void)_addAccountForServiceType:(id)arg1 toPayload:(id)arg2 forKey:(id)arg3;
- (id)_familyTokenForGrandSlamAccount:(id)arg1 andTokenID:(id)arg2;
- (void)addPayload:(id)arg1 toRequest:(id)arg2;
- (id)_akSigningController;

@end
