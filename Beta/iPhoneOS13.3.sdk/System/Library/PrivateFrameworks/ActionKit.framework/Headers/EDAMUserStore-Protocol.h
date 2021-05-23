/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/Swift-Protocol.h>

@protocol EDAMUserStore <Swift>

- (unsigned short)getSubscriptionInfo: /* Error: Ran out of types for this method. */;
- (unsigned short)checkVersion:edamVersionMajor:edamVersionMinor: /* Error: Ran out of types for this method. */;
- (unsigned short)getBootstrapInfo: /* Error: Ran out of types for this method. */;
- (unsigned short)authenticate:password:consumerKey:consumerSecret:supportsTwoFactor: /* Error: Ran out of types for this method. */;
- (unsigned short)authenticateOpenID:consumerKey:consumerSecret:deviceIdentifier:deviceDescription:authLongSession:supportsTwoFactor: /* Error: Ran out of types for this method. */;
- (unsigned short)authenticateLongSession:password:consumerKey:consumerSecret:deviceIdentifier:deviceDescription:supportsTwoFactor: /* Error: Ran out of types for this method. */;
- (unsigned short)authenticateLongSessionV2: /* Error: Ran out of types for this method. */;
- (unsigned short)completeTwoFactorAuthentication:oneTimeCode:deviceIdentifier:deviceDescription: /* Error: Ran out of types for this method. */;
- (unsigned short)revokeLongSession: /* Error: Ran out of types for this method. */;
- (unsigned short)authenticateToBusiness: /* Error: Ran out of types for this method. */;
- (unsigned short)refreshAuthentication: /* Error: Ran out of types for this method. */;
- (unsigned short)getUser: /* Error: Ran out of types for this method. */;
- (unsigned short)getPublicUserInfo: /* Error: Ran out of types for this method. */;
- (unsigned short)getPremiumInfo: /* Error: Ran out of types for this method. */;
- (unsigned short)getNoteStoreUrl: /* Error: Ran out of types for this method. */;
- (unsigned short)getUserUrls: /* Error: Ran out of types for this method. */;
- (unsigned short)inviteToBusiness:emailAddress: /* Error: Ran out of types for this method. */;
- (unsigned short)removeFromBusiness:emailAddress: /* Error: Ran out of types for this method. */;
- (unsigned short)updateBusinessUserIdentifier:oldEmailAddress:newEmailAddress: /* Error: Ran out of types for this method. */;
- (unsigned short)listBusinessUsers: /* Error: Ran out of types for this method. */;
- (unsigned short)listBusinessInvitations:includeRequestedInvitations: /* Error: Ran out of types for this method. */;
- (unsigned short)registerForSyncPushNotifications:credentials: /* Error: Ran out of types for this method. */;
- (unsigned short)unregisterForSyncPushNotifications: /* Error: Ran out of types for this method. */;
- (unsigned short)createSessionAuthenticationToken: /* Error: Ran out of types for this method. */;
- (unsigned short)getAccountLimits: /* Error: Ran out of types for this method. */;
- (unsigned short)getConnectedIdentities:identityIds: /* Error: Ran out of types for this method. */;

@end
