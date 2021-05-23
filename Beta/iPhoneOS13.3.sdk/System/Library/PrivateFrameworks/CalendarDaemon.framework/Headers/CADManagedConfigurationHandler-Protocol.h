/*
 Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

@protocol CADManagedConfigurationHandler

- (unsigned short)isOpenInRestrictionInEffect;
- (unsigned short)mayShowLocalAccountsForBundleID:sourceAccountManagement: /* Error: Ran out of types for this method. */;
- (unsigned short)mayShowLocalAccountsForTargetBundleID:targetAccountManagement: /* Error: Ran out of types for this method. */;
- (unsigned short)filteredOpenInAccounts:originatingAppBundleID:sourceAccountManagement: /* Error: Ran out of types for this method. */;
- (unsigned short)filteredOpenInOriginatingAccounts:targetAppBundleID:targetAccountManagement: /* Error: Ran out of types for this method. */;

@end
