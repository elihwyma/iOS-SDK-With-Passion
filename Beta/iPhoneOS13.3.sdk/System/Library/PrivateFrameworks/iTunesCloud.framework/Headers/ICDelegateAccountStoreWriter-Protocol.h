/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <iTunesCloud/Swift-Protocol.h>

@protocol ICDelegateAccountStoreWriter <Swift>

- (unsigned short)addDelegationUUIDs:forUserIdentity:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)removeAllTokensWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)removeDelegationUUIDs:forUserIdentity:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)removeIdentityPropertiesForUserIdentity:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)removeTokenForUserIdentity:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)removeTokensExpiringBeforeDate:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)setIdentityProperties:forUserIdentity:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)setToken:forUserIdentity:completionHandler: /* Error: Ran out of types for this method. */;

@end
