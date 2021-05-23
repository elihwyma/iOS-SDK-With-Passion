/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol ENTProtocol;

@interface EDAMUserStoreClient : NSObject

{
    id <ENTProtocol> _inProtocol;
    id <ENTProtocol> _outProtocol;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithProtocol:(id)arg1;
- (id)getSubscriptionInfo:(id)arg1;
- (id)initWithInProtocol:(id)arg1 outProtocol:(id)arg2;
- (_Bool)checkVersion:(id)arg1 edamVersionMajor:(short)arg2 edamVersionMinor:(short)arg3;
- (id)getBootstrapInfo:(id)arg1;
- (id)authenticate:(id)arg1 password:(id)arg2 consumerKey:(id)arg3 consumerSecret:(id)arg4 supportsTwoFactor:(_Bool)arg5;
- (id)authenticateOpenID:(id)arg1 consumerKey:(id)arg2 consumerSecret:(id)arg3 deviceIdentifier:(id)arg4 deviceDescription:(id)arg5 authLongSession:(_Bool)arg6 supportsTwoFactor:(_Bool)arg7;
- (id)authenticateLongSession:(id)arg1 password:(id)arg2 consumerKey:(id)arg3 consumerSecret:(id)arg4 deviceIdentifier:(id)arg5 deviceDescription:(id)arg6 supportsTwoFactor:(_Bool)arg7;
- (id)authenticateLongSessionV2:(id)arg1;
- (id)completeTwoFactorAuthentication:(id)arg1 oneTimeCode:(id)arg2 deviceIdentifier:(id)arg3 deviceDescription:(id)arg4;
- (void)revokeLongSession:(id)arg1;
- (id)authenticateToBusiness:(id)arg1;
- (id)refreshAuthentication:(id)arg1;
- (id)getUser:(id)arg1;
- (id)getPublicUserInfo:(id)arg1;
- (id)getPremiumInfo:(id)arg1;
- (id)getNoteStoreUrl:(id)arg1;
- (id)getUserUrls:(id)arg1;
- (void)inviteToBusiness:(id)arg1 emailAddress:(id)arg2;
- (void)removeFromBusiness:(id)arg1 emailAddress:(id)arg2;
- (void)updateBusinessUserIdentifier:(id)arg1 oldEmailAddress:(id)arg2 newEmailAddress:(id)arg3;
- (id)listBusinessUsers:(id)arg1;
- (id)listBusinessInvitations:(id)arg1 includeRequestedInvitations:(_Bool)arg2;
- (id)registerForSyncPushNotifications:(id)arg1 credentials:(id)arg2;
- (void)unregisterForSyncPushNotifications:(id)arg1;
- (id)createSessionAuthenticationToken:(id)arg1;
- (id)getAccountLimits:(int)arg1;
- (id)getConnectedIdentities:(id)arg1 identityIds:(id)arg2;

@end
