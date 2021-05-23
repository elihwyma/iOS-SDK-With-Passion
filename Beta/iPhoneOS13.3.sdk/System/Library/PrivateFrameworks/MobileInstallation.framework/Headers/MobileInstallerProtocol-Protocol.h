/*
 Image: /System/Library/PrivateFrameworks/MobileInstallation.framework/MobileInstallation
 */

@protocol MobileInstallerProtocol

- (unsigned short)installURL:withOptions:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)uninstallIdentifiers:withOptions:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)lookupUninstalledWithOptions:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)clearUninstalledIdentifiers:withOptions:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)lookupSystemAppStateWithOptions:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)updateSystemAppStateForIdentifier:appState:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchInstalledDeveloperAppsWithMountPath:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)enumerateInstalledAppsWithOptions:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchDiskUsageForIdentifiers:withOptions:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)processRestoredContainerWithIdentifier:ofType:options:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)registerSafeHarborAtPath:forIdentifier:ofType:withOptions:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)removeSafeHarborForIdentifier:ofType:withOptions:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)listSafeHarborsOfType:withOptions:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)checkCapabilities:withOptions:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)updateSinfForLSWithIdentifier:withOptions:sinfData:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)updateiTunesMetadataForLSWithIdentifier:options:plistData:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)updatePlaceholderMetadataForApp:installType:failureReason:underlyingError:failureSource:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)getAppMetadataForApp:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)snapshotWKAppInCompanionAppID:toURL:options:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)setSystemAppMigrationComplete: /* Error: Ran out of types for this method. */;
- (unsigned short)waitForSystemAppMigratorToComplete: /* Error: Ran out of types for this method. */;
- (unsigned short)systemAppMigratorHasCompleted: /* Error: Ran out of types for this method. */;
- (unsigned short)dieForTesting;

@end
