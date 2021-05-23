/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <ContactsFoundation/Swift-Protocol.h>

@protocol CNManagedProfileConnection <Swift>

- (unsigned short)isOpenInRestrictionInEffect;
- (unsigned short)mayShowLocalContactsAccountsForBundleID:sourceAccountManagement: /* Error: Ran out of types for this method. */;
- (unsigned short)mayShowLocalContactsAccountsForTargetBundleID:targetAccountManagement: /* Error: Ran out of types for this method. */;
- (unsigned short)filteredOpenInAccounts:originatingAppBundleID:sourceAccountManagement: /* Error: Ran out of types for this method. */;
- (unsigned short)filteredOpenInOriginatingAccounts:targetAppBundleID:targetAccountManagement: /* Error: Ran out of types for this method. */;

@end
