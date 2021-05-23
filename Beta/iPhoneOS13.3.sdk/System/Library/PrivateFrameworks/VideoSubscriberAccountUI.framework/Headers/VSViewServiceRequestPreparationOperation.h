/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSArray, NSOperationQueue, NSXPCConnection, VSAuditToken, VSIdentityProviderAvailabilityInfoCenter, VSOptional, VSStoreURLBag;

__attribute__((visibility("hidden")))
@interface VSViewServiceRequestPreparationOperation : VSAsyncOperation

{
    _Bool _requestAllowsPrivacyUI;
    _Bool _requestRequiresPrivacyUI;
    _Bool _shouldInferFeaturedProviders;
    _Bool _accountModificationAllowed;
    int _hostProcessIdentifier;
    VSAuditToken *_auditToken;
    NSArray *_supportedIdentityProviderIdentifiers;
    NSArray *_featuredIdentityProviderIdentifiers;
    VSOptional *_currentAccount;
    VSOptional *_result;
    NSOperationQueue *_privateQueue;
    NSXPCConnection *_privacyServiceConnection;
    VSIdentityProviderAvailabilityInfoCenter *_availabilityInfoCenter;
    VSStoreURLBag *_bag;
    CDStruct_4c969caf _hostAuditToken;
}

@property (retain, nonatomic) VSOptional *result;
@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (retain, nonatomic) NSXPCConnection *privacyServiceConnection;
@property (retain, nonatomic) VSIdentityProviderAvailabilityInfoCenter *availabilityInfoCenter;
@property (retain, nonatomic) VSStoreURLBag *bag;
@property (nonatomic) CDStruct_4c969caf hostAuditToken;
@property (nonatomic) int hostProcessIdentifier;
@property (copy, nonatomic) VSAuditToken *auditToken;
@property (nonatomic) _Bool requestAllowsPrivacyUI;
@property (nonatomic) _Bool requestRequiresPrivacyUI;
@property (copy, nonatomic) NSArray *supportedIdentityProviderIdentifiers;
@property (copy, nonatomic) NSArray *featuredIdentityProviderIdentifiers;
@property (nonatomic) _Bool shouldInferFeaturedProviders;
@property (nonatomic, getter=isAccountModificationAllowed) _Bool accountModificationAllowed;
@property (retain, nonatomic) VSOptional *currentAccount;

- (id)init;
- (void)dealloc;
- (void)cancel;
- (void)_finishWithError:(id)arg1;
- (void)executionDidBegin;
- (void)_checkPrivacy;
- (id)_privacyServiceWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)_determineProviderDisplayNameWithUI:(_Bool)arg1;
- (void)_checkAvailability;
- (void)_checkSupportedProviders;
- (void)_finishWithSupportedProviders:(id)arg1;
- (void)_promptForPrivacyWithDisplayNameIfRequired:(id)arg1 providerID:(id)arg2 providerIsSupported:(_Bool)arg3 allowUI:(_Bool)arg4;
- (void)_checkEntitlement;

@end
