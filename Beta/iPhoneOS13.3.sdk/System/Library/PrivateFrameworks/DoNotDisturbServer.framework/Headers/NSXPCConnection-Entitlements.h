/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

#import <Foundation/NSXPCConnection.h>

@interface NSXPCConnection (Entitlements)

- (_Bool)dnds_hasAnyValidEntitlement;
- (_Bool)dnds_hasBehaviorResolutionEntitlementForClientIdentifier:(id)arg1;
- (_Bool)dnds_hasEntitlementsToRequestAssertionWithDetails:(id)arg1 clientIdentifier:(id)arg2;
- (_Bool)dnds_hasModeAssertionEntitlementForClientIdentifier:(id)arg1;
- (_Bool)dnds_hasUserRequestedModeAssertionEntitlementForClientIdentifier:(id)arg1;
- (_Bool)dnds_hasStateRequestEntitlementForClientIdentifier:(id)arg1;
- (_Bool)dnds_hasStateUpdatesEntitlementForClientIdentifier:(id)arg1;
- (_Bool)dnds_hasSettingsRequestEntitlementForClientIdentifier:(id)arg1;
- (_Bool)dnds_hasSettingsModificationEntitlementForClientIdentifier:(id)arg1;
- (_Bool)dnds_hasSettingsUpdatesEntitlementForClientIdentifier:(id)arg1;
- (id)_dnds_safeStringArrayEntitlementForKey:(id)arg1;

@end
