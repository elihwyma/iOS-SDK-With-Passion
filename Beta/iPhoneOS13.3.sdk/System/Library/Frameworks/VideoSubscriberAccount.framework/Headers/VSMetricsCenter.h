/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSObject.h>

@class AMSBag, MTMetricsKit, NSOperationQueue, NSString, VSIdentityProvider, VSPreferences, VSRemoteNotifier, VSSetTopBoxProfile;

@protocol OS_dispatch_queue;

@interface VSMetricsCenter : NSObject

{
    _Bool _optedIn;
    _Bool _currentIdentityProviderSupportsSTB;
    _Bool _currentIdentityProviderIsFullySupported;
    _Bool _fetchedSetTopBoxProfile;
    MTMetricsKit *_mainMetricsKit;
    AMSBag *_bag;
    NSObject<OS_dispatch_queue> *_eventQueue;
    VSPreferences *_preferences;
    VSRemoteNotifier *_remoteNotifier;
    NSOperationQueue *_privateQueue;
    VSIdentityProvider *_currentIdentityProvider;
    VSSetTopBoxProfile *_stbProfile;
}

@property (retain, nonatomic) MTMetricsKit *mainMetricsKit;
@property (retain, nonatomic) AMSBag *bag;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *eventQueue;
@property (retain, nonatomic) VSPreferences *preferences;
@property (retain, nonatomic) VSRemoteNotifier *remoteNotifier;
@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (nonatomic) _Bool optedIn;
@property (retain, nonatomic) VSIdentityProvider *currentIdentityProvider;
@property (nonatomic) _Bool currentIdentityProviderSupportsSTB;
@property (nonatomic) _Bool currentIdentityProviderIsFullySupported;
@property (nonatomic) _Bool fetchedSetTopBoxProfile;
@property (retain, nonatomic) VSSetTopBoxProfile *stbProfile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedMetricsCenter;

- (id)init;
- (id)userID;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)accountStoreDidChange;
- (void)remoteNotifier:(id)arg1 didReceiveRemoteNotificationWithUserInfo:(id)arg2;
- (void)fetchSetTopBoxProfile;
- (id)mutableBaseFieldsWithUserID:(_Bool)arg1;
- (id)flexibleBaseFields;
- (_Bool)hasSetTopBoxProfile;
- (_Bool)currentProviderIsSetTopBoxProvider;
- (id)capacityData:(id)arg1;
- (id)capacityDataAvailable:(id)arg1;
- (id)capacityDisk:(id)arg1;
- (id)capacitySystem:(id)arg1;
- (id)capacitySystemAvailable:(id)arg1;
- (id)clientId:(id)arg1;
- (id)connection:(id)arg1;
- (id)dsId:(id)arg1;
- (id)hardwareModel:(id)arg1;
- (id)isSignedIn:(id)arg1;
- (id)pageUrl:(id)arg1;
- (id)pixelRatio:(id)arg1;
- (id)resourceRevNum:(id)arg1;
- (id)screenHeight:(id)arg1;
- (id)screenWidth:(id)arg1;
- (id)userType:(id)arg1;
- (id)windowInnerHeight:(id)arg1;
- (id)windowInnerWidth:(id)arg1;
- (id)windowOuterHeight:(id)arg1;
- (id)windowOuterWidth:(id)arg1;
- (id)xpPostFrequency:(id)arg1;
- (id)xpSendMethod:(id)arg1;
- (void)recordSignInEventWithProviderIdentifier:(id)arg1 supportedProvider:(_Bool)arg2 channelAdamID:(id)arg3 error:(id)arg4;
- (void)recordSignOutEventWithProviderIdentifier:(id)arg1;
- (void)recordMetadataRequestWithProviderIdentifier:(id)arg1 channelAdamID:(id)arg2 error:(id)arg3;
- (void)recordSTBOptOutEventWithError:(id)arg1;
- (void)recordEnterEventWithPage:(id)arg1 pageType:(id)arg2;
- (void)recordExitEventWithPage:(id)arg1 pageType:(id)arg2;
- (void)recordClickEventWithPage:(id)arg1 pageType:(id)arg2 target:(id)arg3;
- (void)recordInvalidTemplateErrorWithProviderAppAdamID:(id)arg1;

@end
