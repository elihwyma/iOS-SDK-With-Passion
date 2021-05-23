/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

#import <NSXPCConnection.h>

@interface NSXPCConnection (UserNotificationsServer)

- (_Bool)uns_hasEntitlement:(id)arg1 capability:(id)arg2;
- (id)uns_clientBundleProxy;
- (_Bool)uns_isAllowedToRequestUserNotificationsForBundleIdentifier:(id)arg1;
- (_Bool)uns_isAllowedToReadSettings;
- (_Bool)uns_isAllowedToWriteSettings;

@end
