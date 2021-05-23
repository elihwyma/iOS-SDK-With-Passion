/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <AppleAccount/Swift-Protocol.h>

@protocol AAAppleIDLoginPlugin <Swift>

- (unsigned short)serviceIdentifier;
- (unsigned short)parametersForLoginRequest;
- (unsigned short)parametersForIdentityEstablishmentRequest;
- (unsigned short)handleLoginResponse:completion: /* Error: Ran out of types for this method. */;

@end
