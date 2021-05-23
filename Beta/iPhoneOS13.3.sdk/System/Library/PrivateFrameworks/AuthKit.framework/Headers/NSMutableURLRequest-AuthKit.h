/*
 Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

#import <CFNetwork/NSMutableURLRequest.h>

@interface NSMutableURLRequest (AuthKit)

+ (id)ak_anisetteHeadersWithData:(id)arg1;
+ (id)ak_proxiedAnisetteHeadersWithData:(id)arg1;
+ (id)ak_clientTimeHeader;
+ (id)ak_localeHeader;
+ (id)ak_timeZoneHeader;
+ (id)ak_clientInfoHeader;
+ (id)ak_deviceUDIDHeader;
+ (id)ak_anisetteHeadersWithCompanionData:(id)arg1;

- (void)ak_addICSCRecoveryHeaderWithIdentityToken:(id)arg1 forAltDSID:(id)arg2;
- (void)ak_addRecoveryHeaderWithIdentityToken:(id)arg1 forAltDSID:(id)arg2;
- (void)ak_setBodyWithParameters:(id)arg1;
- (void)_setAuthorizationHeaderWithToken:(id)arg1 altDSID:(id)arg2 key:(id)arg3;
- (void)ak_addInternalBuildHeader;
- (void)ak_addLocalUserUUIDHashHeader;
- (void)ak_addAppleIDHeaderWithValue:(id)arg1;
- (void)ak_addAppleIDUserModeHeaderWithValue:(unsigned long long)arg1;
- (void)ak_addDeviceUDIDHeader;
- (void)ak_addProxiedDeviceUDIDHeader:(id)arg1;
- (void)ak_addClientInfoHeader;
- (void)ak_addClientTimeHeader;
- (void)ak_addCircleStatusHeader;
- (void)ak_addCompanionClientInfoHeader:(id)arg1;
- (void)ak_addProxiedClientInfoHeader:(id)arg1;
- (void)ak_addEphemeralAuthHeader;
- (void)ak_addAnisetteHeaders;
- (void)ak_addProxiedAnisetteHeaders:(id)arg1;
- (void)ak_addProxiedAttestationHeaders:(id)arg1;
- (void)ak_addAuthorizationHeaderWithIdentityToken:(id)arg1 forAltDSID:(id)arg2;
- (void)ak_addProxiedAuthorizationHeaderWithIdentityToken:(id)arg1 forAltDSID:(id)arg2;
- (void)ak_addAuthorizationHeaderWithServiceToken:(id)arg1 forAltDSID:(id)arg2;
- (void)ak_addAuthorizationHeaderWithHeartbeatToken:(id)arg1 forAltDSID:(id)arg2;
- (void)ak_addShortLivedTokenHeaderWithIdentityToken:(id)arg1 forAltDSID:(id)arg2;
- (void)ak_setJSONBodyWithParameters:(id)arg1;
- (void)ak_addAbsintheHeaderWithValue:(id)arg1;
- (void)ak_addLoggedInServicesHeaderForServices:(id)arg1;
- (void)ak_addContextHeaderForServiceType:(long long)arg1;
- (void)ak_addContinutationKeyHeader:(id)arg1;
- (void)ak_addPasswordResetKeyHeader:(id)arg1;
- (void)ak_addCountryHeader;
- (void)ak_addProxiedDeviceCountryHeader:(id)arg1;
- (void)ak_addLocaleHeader;
- (void)ak_addTimeZoneHeaders;
- (void)ak_addPRKRequestHeader;
- (void)ak_addProxiedDevicePRKRequestHeader;
- (void)ak_addICSCIntentHeader;
- (void)ak_addLocalUserHasAppleIDLoginHeader;
- (void)ak_addDeviceROMHeader;
- (void)ak_addDeviceMLBHeader;
- (void)ak_addDeviceSerialNumberHeader;
- (void)ak_addProxiedDeviceSerialNumberHeader:(id)arg1;
- (void)ak_addPhoneNumberHeader;
- (void)ak_addPhoneNumberCertificateHeaderWithValue:(id)arg1;
- (void)ak_addPhoneInformationHeaderWithValue:(id)arg1;
- (void)ak_addAcceptedSLAHeaderWithVersion:(unsigned long long)arg1;
- (void)ak_addClientApp:(id)arg1;
- (void)ak_addProxyApp:(id)arg1;
- (void)ak_addAppProvidedContext:(id)arg1;
- (void)ak_addProxiedDeviceICSCIntentHeader;
- (void)ak_addShowWarranty;
- (void)ak_addDeviceModel;
- (void)ak_addCFUHeader:(id)arg1;
- (void)ak_addDeviceConfigurationModeHeader;

@end
