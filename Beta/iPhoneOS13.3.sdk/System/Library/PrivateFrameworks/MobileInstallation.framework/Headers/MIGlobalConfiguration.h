/*
 Image: /System/Library/PrivateFrameworks/MobileInstallation.framework/MobileInstallation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSSet, NSString, NSURL;

@interface MIGlobalConfiguration : NSObject

{
    _Bool _allowDeletableSystemApps;
    unsigned int _uid;
    unsigned int _gid;
    NSSet *_allFrameworksDirectories;
    NSDictionary *_coreServicesAppBundleIDToInfoMap;
    NSDictionary *_systemAppBundleIDToInfoMap;
    NSDictionary *_stagedSystemAppBundleIDToInfoMap;
    NSDictionary *_systemAppPlaceholderBundleIDToInfoMap;
    NSDictionary *_internalAppBundleIDToInfoMap;
    NSSet *_builtInFrameworkBundleIDs;
    NSSet *_systemAppPlaceholderBundleIDs;
    NSSet *_systemAppPlaceholderPluginBundleIDs;
    NSSet *_systemAppPlaceholderXPCServiceBundleIDs;
    NSURL *_installdPath;
    NSURL *_mobilePath;
    NSURL *_rootPath;
}

@property (nonatomic, readonly) NSURL *installdPath;
@property (nonatomic, readonly) NSURL *mobilePath;
@property (nonatomic, readonly) NSURL *rootPath;
@property (nonatomic, readonly) _Bool allowDeletableSystemApps;
@property (nonatomic, readonly) NSURL *stagingRoot;
@property (nonatomic, readonly) NSURL *logDirectory;
@property (nonatomic, readonly) NSURL *coreServicesDirectory;
@property (nonatomic, readonly) NSURL *systemAppsDirectory;
@property (nonatomic, readonly) NSURL *systemAppPlaceholdersDirectory;
@property (nonatomic, readonly) NSURL *systemAppDetachedSignaturesDirectory;
@property (nonatomic, readonly) NSURL *internalAppsDirectory;
@property (nonatomic, readonly) NSURL *developerAppsDirectory;
@property (nonatomic, readonly) NSURL *stagedSystemAppsDirectory;
@property (nonatomic, readonly) NSURL *factoryMountDirectory;
@property (nonatomic, readonly) NSURL *systemFrameworksRootDirectory;
@property (nonatomic, readonly) NSURL *internalFrameworksRootDirectory;
@property (nonatomic, readonly) NSURL *developerFrameworksRootDirectory;
@property (copy, nonatomic, readonly) NSSet *allFrameworksDirectories;
@property (nonatomic, readonly) NSURL *dataDirectory;
@property (nonatomic, readonly) NSURL *cachesDirectory;
@property (nonatomic, readonly) NSURL *backedUpStateDirectory;
@property (copy, nonatomic, readonly) NSArray *appBundleMetadataItemNames;
@property (copy, nonatomic, readonly) NSArray *appUserDataItemNames;
@property (copy, nonatomic, readonly) NSSet *installationBlacklist;
@property (copy, nonatomic, readonly) NSSet *builtInApplicationBundleIDs;
@property (copy, nonatomic, readonly) NSSet *builtInFrameworkBundleIDs;
@property (copy, nonatomic, readonly) NSSet *systemAppPlaceholderBundleIDs;
@property (copy, nonatomic, readonly) NSSet *systemAppPlaceholderPluginBundleIDs;
@property (copy, nonatomic, readonly) NSSet *systemAppPlaceholderXPCServiceBundleIDs;
@property (copy, nonatomic, readonly) NSDictionary *systemAppBundleIDToInfoMap;
@property (copy, nonatomic, readonly) NSDictionary *stagedSystemAppBundleIDToInfoMap;
@property (copy, nonatomic, readonly) NSDictionary *systemAppPlaceholderBundleIDToInfoMap;
@property (copy, nonatomic, readonly) NSDictionary *coreServicesAppBundleIDToInfoMap;
@property (copy, nonatomic, readonly) NSDictionary *internalAppBundleIDToInfoMap;
@property (copy, nonatomic, readonly) NSDictionary *diskImageAppBundleIDToInfoMap;
@property (nonatomic, readonly) unsigned int uid;
@property (nonatomic, readonly) unsigned int gid;
@property (nonatomic, readonly) NSURL *oldDataDirectoryPath;
@property (nonatomic, readonly) NSURL *oldLoggingPath;
@property (nonatomic, readonly) NSURL *oldArchiveDirectory;
@property (nonatomic, readonly) NSURL *roleUserMigrationMarkerFilePath;
@property (nonatomic, readonly) NSURL *systemAppInstallStateFilePath;
@property (nonatomic, readonly) NSURL *backupSystemAppInstallStateFilePath;
@property (copy, nonatomic, readonly) NSString *alternateThinningModelIdentifier;
@property (copy, nonatomic, readonly) NSArray *diskImageApplicationsDirectories;
@property (copy, nonatomic, readonly) NSURL *migrationPlistURL;
@property (copy, nonatomic, readonly) NSURL *lastBuildInfoFileURL;

+ (id)sharedInstance;

- (id)init;
- (id)disableSystemAppDeletionCanaryFile;
- (id)_bundleIDMapForBundlesInDirectory:(id)arg1 withExtension:(id)arg2 loadingAdditionalKeys:(id)arg3;
- (id)_bundleIDMapForAppsInDirectory:(id)arg1 loadingAdditionalKeys:(id)arg2;
- (id)_bundleIDMapForAppsInDirectory:(id)arg1;
- (id)_bundleIDMapForBundlesInDirectory:(id)arg1 withExtension:(id)arg2;
- (id)_mountFromToOnMap;
- (id)_mountPointForDevice:(unsigned int)arg1 mountFromToOnMap:(id)arg2;
- (id)diskImageMountPoints;
- (void)reScanSystemApps;
- (void)reScanCoreServicesApps;
- (void)reScanInternalApps;

@end
