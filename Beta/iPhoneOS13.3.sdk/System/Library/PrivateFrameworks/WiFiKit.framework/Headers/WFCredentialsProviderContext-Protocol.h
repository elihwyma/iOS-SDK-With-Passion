/*
 Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

#import <WiFiKit/Swift-Protocol.h>

@class NSArray, NSString;

@protocol WFCredentialsProviderContext <Swift>

@property (nonatomic, readonly, getter=isPasswordSharingSupported) _Bool passwordSharingSupported;
@property (nonatomic, readonly) NSString *username;
@property (nonatomic, readonly) NSArray *availableTLSIdentities;
@property (nonatomic, readonly, getter=isEnterprise) _Bool enterprise;
@property (nonatomic, readonly, getter=isWeakSecurity) _Bool weakSecurity;
@property (nonatomic, readonly) long long availableAuthTraits;

- (unsigned short)gatherCredentials: /* Error: Ran out of types for this method. */;
- (unsigned short)validateCredentials;
- (unsigned short)validatePassword;
- (unsigned short)activatePasswordSharing;
- (unsigned short)deactivatePasswordSharingWithReactivation: /* Error: Ran out of types for this method. */;
- (unsigned short)launchSettings;

@end
