/*
 Image: /System/Library/PrivateFrameworks/AppleIDSSOAuthentication.framework/AppleIDSSOAuthentication
 */

#import <Accounts/ACAccount.h>

@interface ACAccount (AppleIDAuthentication)

- (id)aida_dsid;
- (id)aida_alternateDSID;
- (id)aida_tokenForService:(id)arg1;
- (id)aida_tokenWithExpiryCheckForService:(id)arg1;
- (id)aida_tokenWithExpirationCheck;
- (id)aida_deviceProvisioningInfo;

@end
