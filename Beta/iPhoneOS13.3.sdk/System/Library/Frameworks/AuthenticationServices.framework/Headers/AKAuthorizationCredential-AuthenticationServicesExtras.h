/*
 Image: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
 */

#import <AuthKit/AKAuthorizationCredential.h>

@interface AKAuthorizationCredential (AuthenticationServicesExtras)

- (id)_credentialScopes;
- (id)authenticationServicesCredential;

@end
