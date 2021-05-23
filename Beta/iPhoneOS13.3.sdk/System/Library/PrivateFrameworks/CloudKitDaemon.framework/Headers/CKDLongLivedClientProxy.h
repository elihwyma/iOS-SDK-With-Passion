/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDClientProxy.h>

@interface CKDLongLivedClientProxy : CKDClientProxy

+ (id)longLivedProxyWithContext:(id)arg1;
+ (void)clearCachedLongLivedProxies;
+ (id)sharedLongLivedProxies;
+ (id)_sharedLongLivedProxyForContext:(id)arg1;

- (id)description;
- (id)bundleIdentifier;
- (id)applicationBundleID;
- (id)CKPropertiesDescription;
- (_Bool)isLongLived;
- (id)sourceApplicationBundleIdentifier;
- (id)initWithClientContext:(id)arg1;
- (_Bool)hasOutOfProcessUIEntitlement;
- (_Bool)hasParticipantPIIEntitlement;
- (void)addOperationWithOperationInfo:(id)arg1;
- (_Bool)hasAllowAccessDuringBuddyEntitlement;
- (id)associatedApplicationBundleID;
- (_Bool)hasMasqueradingEntitlement;
- (id)_clientPrefixEntitlement;
- (void)_handleProgressForOperation:(id)arg1 withArguments:(id)arg2;
- (void)_handleCompletionForOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (_Bool)_hasCustomAccountsEntitlement;
- (_Bool)_hasEnvironmentEntitlement;
- (_Bool)hasTCCAuthorization;
- (_Bool)hasProtectionDataEntitlement;
- (_Bool)hasZoneProtectionDataEntitlement;
- (_Bool)hasDeviceIdentifierEntitlement;
- (_Bool)hasCloudKitSystemServiceEntitlement;
- (_Bool)hasDarkWakeNetworkReachabilityEnabledEntitlement;
- (_Bool)hasLightweightPCSEntitlement;
- (_Bool)hasDisplaysSystemAcceptPromptEntitlement;
- (_Bool)hasNonLegacyShareURLEntitlement;
- (_Bool)hasAllowUnverifiedAccountEntitlement;
- (_Bool)hasExplicitCodeOperationURLEntitlement;
- (id)serviceNameForContainerMapEntitlement;
- (id)applicationBundleIDForPush;
- (id)apsEnvironmentEntitlement;

@end
