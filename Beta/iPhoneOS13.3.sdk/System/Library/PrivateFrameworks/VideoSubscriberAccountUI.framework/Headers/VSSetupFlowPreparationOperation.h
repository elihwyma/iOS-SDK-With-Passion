/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSOperationQueue, VSDevice, VSOptional, VSStoreURLBag;

__attribute__((visibility("hidden")))
@interface VSSetupFlowPreparationOperation : VSAsyncOperation

{
    VSOptional *_storage;
    VSOptional *_preferences;
    VSOptional *_result;
    VSStoreURLBag *_bag;
    NSOperationQueue *_privateQueue;
    VSDevice *_currentDevice;
}

@property (retain, nonatomic) VSOptional *result;
@property (retain, nonatomic) VSStoreURLBag *bag;
@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (retain, nonatomic) VSDevice *currentDevice;
@property (retain, nonatomic) VSOptional *storage;
@property (retain, nonatomic) VSOptional *preferences;

- (id)init;
- (void)_finishWithError:(id)arg1;
- (void)executionDidBegin;
- (void)_checkPreferences;
- (void)_checkAvailability;
- (void)_finishWithFlow:(id)arg1;
- (void)_checkForExistingAccounts;
- (void)_fetchProviderForAccount:(id)arg1;
- (void)_fetchAllProvidersIfNeeded;
- (void)_fetchAllProviders;
- (void)_checkForSupportedAppsButton;
- (id)createAppDescriptionFetchOperationForProvider:(id)arg1 withFlow:(id)arg2;
- (id)createVSImageLoadOperationForProvider:(id)arg1 withFlow:(id)arg2;
- (void)_resolveBundleIDs:(id)arg1 forFlow:(id)arg2;
- (void)_checkForSupportedAppsButtonWithFlow:(id)arg1;
- (void)_loadProviderAppDescriptionWithFlow:(id)arg1;
- (void)_getSTBProviderFromAllProviders:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)prepareSTBSetupForAccount:(id)arg1 forProvider:(id)arg2;
- (void)_checkForSupportedAppsFromProvider:(id)arg1;
- (void)_checkForPersonalizedChannelsWithResponse:(id)arg1 identityProvider:(id)arg2;
- (void)_findBundleIDsForAdamIDs:(id)arg1 withFlow:(id)arg2;

@end
