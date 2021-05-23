/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <iTunesCloud/Swift-Protocol.h>

@protocol ICUserIdentityStoreBackendDelegate;

@protocol ICUserIdentityStoreBackend <Swift>

@property (weak, nonatomic) id <ICUserIdentityStoreBackendDelegate> delegate;

- (unsigned short)synchronize;
- (unsigned short)activeAccountDSIDWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)updateActiveAccountDSID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)activeLockerAccountDSIDWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)updateActiveLockerAccountDSID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)identityPropertiesForDSID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)identityPropertiesForPrimaryICloudAccountWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)removeIdentityForDSID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)replaceIdentityProperties:forDSID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)setIdentityProperties:forDSID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)localStoreAccountPropertiesWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)localStoreAccountPropertiesWithError: /* Error: Ran out of types for this method. */;
- (unsigned short)setLocalStoreAccountProperties:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)verificationContextForDSID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)verificationContextForAccountEstablishmentWithCompletion: /* Error: Ran out of types for this method. */;

@end
