/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/Swift-Protocol.h>

@protocol SBApplicationRestrictionDataSource <Swift>

- (unsigned short)allApplications;
- (unsigned short)allBundleIdentifiers;
- (unsigned short)applicationWithBundleIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)alwaysAvailableApplicationBundleIdentifiers;
- (unsigned short)bundleIdentifiersWithVisibilityOverrideHidden;

@end
