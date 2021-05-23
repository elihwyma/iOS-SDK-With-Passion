/*
 Image: /System/Library/PrivateFrameworks/MobileInstallation.framework/MobileInstallation
 */

@protocol MobileInstallationHelperServiceProtocol

- (unsigned short)dieForTesting;
- (unsigned short)migrateMobileContentWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)wipeStagingRootWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)stageItemAtURL:options:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)makeSymlinkFromAppDataContainerToBundleForIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)createSafeHarborWithIdentifier:containerType:andMigrateDataFrom:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)createAppSnapshotWithBundleID:snapshotToURL:onlyV1AppIfPresent:placeholderOnly:completion: /* Error: Ran out of types for this method. */;

@end
