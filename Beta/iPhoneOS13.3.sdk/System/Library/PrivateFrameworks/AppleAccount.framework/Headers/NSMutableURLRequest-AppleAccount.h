/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <CFNetwork/NSMutableURLRequest.h>

@interface NSMutableURLRequest (AppleAccount)

- (void)aa_signBodyData:(id)arg1 withSigningSession:(id)arg2;
- (void)aa_addMultiUserDeviceHeaderIfEnabled;
- (void)aa_addBasicAuthorizationHeaderWithAccount:(id)arg1 preferUsingPassword:(_Bool)arg2;
- (_Bool)aa_addAuthTokenOrBasicAuthHeaderWithAccount:(id)arg1 preferUsingPassword:(_Bool)arg2;
- (id)aa_setXMLBodyWithParameters:(id)arg1;
- (void)aa_setBodyWithParameters:(id)arg1;
- (void)aa_addDeviceProvisioningInfoHeadersWithDSID:(id)arg1;
- (_Bool)aa_addGrandslamAuthorizationHeaderWithAltDSID:(id)arg1 grandslamToken:(id)arg2;
- (_Bool)aa_addGrandslamAuthorizationheaderWithAltDSID:(id)arg1 heartbeatToken:(id)arg2;
- (void)aa_addContentTypeHeaders:(id)arg1;
- (void)aa_addDeviceInternalDevHeaderIfEnabled;
- (void)aa_addDeviceIDHeader;
- (void)aa_addLoggedInAppleIDHeaderWithAccount:(id)arg1;
- (void)aa_addLocationSharingAllowedHeader;
- (void)aa_addBasicAuthPasswordWithAccount:(id)arg1;
- (void)aa_addTokenAuthHeaderWithAccount:(id)arg1;
- (void)aa_addDeviceProvisioningInfoHeadersWithDSID:(id)arg1 sendEmptyValues:(_Bool)arg2;
- (void)aa_setXMLBodyWithParameters:(id)arg1 signingSession:(id)arg2;
- (_Bool)aa_addGrandSlamAuthorizationHeaderWithAccount:(id)arg1 grandslamToken:(id)arg2;
- (void)aa_addDeviceProvisioningInfoHeadersWithAccount:(id)arg1;
- (_Bool)aa_addDeviceProvisioningInfoHeadersWithDSIDFromReponse:(id)arg1;

@end
