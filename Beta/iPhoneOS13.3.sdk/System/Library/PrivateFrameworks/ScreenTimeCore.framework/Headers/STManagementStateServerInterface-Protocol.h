/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
 */

#import <ScreenTimeCore/Swift-Protocol.h>

@protocol STManagementStateServerInterface <Swift>

- (unsigned short)screenTimeSyncStateWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)screenTimeStateWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)setScreenTimeSyncingEnabled:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)setScreenTimeEnabled:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)isRestrictionsPasscodeSetWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)communicationPoliciesWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)shouldRequestMoreTimeWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)clearRestrictionsPasscodeWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)needsToSetRestrictionsPasscodeWithReplyHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)enableScreenTimeForDSID:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)communicationPoliciesForDSID:withCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)setContactManagementState:forDSID:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)contactManagementStateForDSID:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)primaryiCloudCardDAVAccountIdentifierWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)performMigrationFromMCXSettings:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)permitWebFilterURL:pageTitle:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)shouldAllowOneMoreMinuteForBundleIdentifier:replyHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)shouldAllowOneMoreMinuteForWebsiteURL:replyHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)shouldAllowOneMoreMinuteForCategoryIdentifier:replyHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)isExplicitContentRestrictedWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)authenticateRestrictionsPasscode:replyHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteWebHistoryForURL:webApplication:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteWebHistoryForDomain:webApplication:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteWebHistoryDuringInterval:webApplication:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteAllWebApplicationHistory:completionHandler: /* Error: Ran out of types for this method. */;

@end
