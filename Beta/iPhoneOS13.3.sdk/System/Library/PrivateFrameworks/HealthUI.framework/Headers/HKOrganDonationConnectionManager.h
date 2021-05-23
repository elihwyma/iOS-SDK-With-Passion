/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSString, NSTimer, NSURLSession;

@protocol HKOrganDonationConnectionManagerDelegate;

@interface HKOrganDonationConnectionManager : NSObject

{
    NSString *_refreshToken;
    _Bool _accessTokenStatus;
    long long _tokenRefreshRetryCount;
    NSMapTable *_taskQueue;
    long long _managerState;
    id <HKOrganDonationConnectionManagerDelegate> _delegate;
    NSURLSession *_defaultSession;
    NSString *_accessToken;
    NSTimer *_accessTokenInvalidationTimer;
}

@property (retain, nonatomic) NSURLSession *defaultSession;
@property (retain, nonatomic) NSString *refreshToken;
@property (retain, nonatomic) NSString *accessToken;
@property (weak, nonatomic) NSTimer *accessTokenInvalidationTimer;
@property (weak, nonatomic) id <HKOrganDonationConnectionManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_port;
+ (id)_host;
+ (id)_scheme;
+ (long long)_hostConfiguration;
+ (void)openDonateLifeMicroSiteInSafari;
+ (_Bool)isOrganDonationRegistrationAvailable;
+ (_Bool)hasStoredRegistrant;
+ (_Bool)shouldShowStoreDemoOrganDonation;
+ (void)refreshOrganDonationFeatureAvailability;
+ (long long)registrationSubmissionHostConfiguration;
+ (id)_tokenWithIdentifier:(id)arg1 shouldReturnData:(_Bool)arg2;
+ (id)_gatewayHost;
+ (_Bool)_organDonationDisabled;
+ (id)_keychainQueryDictionaryForIdentifier:(id)arg1;
+ (void)organDonationSignificantDate:(CDUnknownBlockType)arg1;
+ (id)storeDemoModeModifiedDate;

- (id)init;
- (id)payload;
- (void)cleanUp;
- (void)_transitionToState:(long long)arg1;
- (void)openRegisterMeSiteInSafariIfAuthenticated;
- (void)reloadRegistrantWithCompletion:(CDUnknownBlockType)arg1;
- (void)submitRegistrant:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_refreshAccessTokenIfNeeded;
- (void)_sendQueuedTokenDependentRequests;
- (void)_flushTokenDependentRequestsWithStatus:(long long)arg1;
- (id)_urlWithPath:(id)arg1;
- (id)_registrationJWTWithRegistrant:(id)arg1;
- (id)_jsonBodyPostRequestWithURL:(id)arg1 method:(id)arg2 postData:(id)arg3 bearerToken:(id)arg4;
- (void)_updateAccessTokenAndScheduleInvalidationTimer:(id)arg1 expiresIn:(double)arg2;
- (id)_genericJSONDataTaskWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)refreshBearerTokenWithRefreshToken:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_refreshBearerTokenJWTWithRefreshToken:(id)arg1;
- (id)_getRequestWithURL:(id)arg1 bearerToken:(id)arg2;
- (void)_scheduleAccessTokenDependentRequest:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_handleURLTaskError:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)_jsonObjectWithData:(id)arg1 response:(id)arg2;
- (void)_handleServerErrorWithResponse:(id)arg1 originRequest:(id)arg2 payload:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_invalidateAccessToken:(id)arg1;
- (void)_upsertTokenInKeychain:(id)arg1 identifier:(id)arg2;
- (void)_deleteTokenWithIdentifier:(id)arg1;
- (id)jwtPayloadWithRegistrant:(id)arg1;
- (id)_jwtWithPayload:(id)arg1 grantType:(id)arg2;
- (id)jwtHeader;
- (id)_base64URLEncoding:(id)arg1;
- (void)updateRegistrantWithParams:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteRegistrantWithCompletion:(CDUnknownBlockType)arg1;

@end
