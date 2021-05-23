/*
 Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSFileHandle, NSSet, NSString;

@interface MBDomain : NSObject

{
    NSFileHandle *_fileHandle;
    NSString *_fileHandlePath;
    NSFileHandle *_fileHandleForSnapshot;
    NSString *_fileHandlePathForSnapshot;
    _Bool _shouldDigest;
    _Bool _hasExternalConfig;
    _Bool _isExternalConfig;
    _Bool _shouldRestoreRelativeSymlinks;
    NSString *_rootPath;
    NSString *_name;
    NSSet *_relativePathsToBackupAndRestore;
    NSSet *_relativePathsNotToBackup;
    NSSet *_relativePathsNotToBackupToDrive;
    NSSet *_relativePathsNotToBackupToService;
    NSSet *_relativePathsToOnlyBackupEncrypted;
    NSSet *_relativePathsNotToCheckIfModifiedDuringBackup;
    NSSet *_relativePathsToRestoreOnly;
    NSSet *_relativePathsToRestoreOnlyFromService;
    NSSet *_relativePathsToRemoveOnRestore;
    NSSet *_relativePathsOfSystemFilesToAlwaysRestore;
    NSSet *_relativePathsOfSystemFilesToAlwaysRemoveOnRestore;
    NSSet *_relativePathsNotToRestore;
    NSSet *_relativePathsNotToMigrate;
    NSSet *_relativePathsNotToRestoreToIPods;
    NSSet *_relativePathsNotToBackupAndRestoreToAppleTVs;
    NSSet *_relativePathsToBackgroundRestore;
    NSSet *_relativePathsNotToRemoveIfNotRestored;
    NSSet *_relativePathsToIgnoreExclusionsForDrive;
    NSSet *_relativePathsToBackupToDriveAndStandardAccount;
    NSSet *_relativePathsToBackupIgnoringProtectionClass;
    NSDictionary *_relativePathAggregateDictionaryGroups;
    NSDictionary *_relativePathDomainRedirects;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *rootPath;
@property (nonatomic, readonly) NSString *containerID;
@property (nonatomic, readonly) int containerType;
@property (nonatomic, readonly) NSSet *relativePathsToBackup;
@property (retain, nonatomic) NSSet *relativePathsToBackupAndRestore;
@property (retain, nonatomic) NSSet *relativePathsNotToBackup;
@property (retain, nonatomic) NSSet *relativePathsNotToBackupToDrive;
@property (retain, nonatomic) NSSet *relativePathsNotToBackupToService;
@property (retain, nonatomic) NSSet *relativePathsToOnlyBackupEncrypted;
@property (retain, nonatomic) NSSet *relativePathsNotToCheckIfModifiedDuringBackup;
@property (nonatomic, readonly) NSSet *relativePathsToRestore;
@property (retain, nonatomic) NSSet *relativePathsToRestoreOnly;
@property (retain, nonatomic) NSSet *relativePathsToRestoreOnlyFromService;
@property (retain, nonatomic) NSSet *relativePathsToRemoveOnRestore;
@property (retain, nonatomic) NSSet *relativePathsOfSystemFilesToAlwaysRestore;
@property (retain, nonatomic) NSSet *relativePathsOfSystemFilesToAlwaysRemoveOnRestore;
@property (retain, nonatomic) NSSet *relativePathsNotToRestore;
@property (retain, nonatomic) NSSet *relativePathsNotToMigrate;
@property (retain, nonatomic) NSSet *relativePathsNotToRestoreToIPods;
@property (retain, nonatomic) NSSet *relativePathsNotToBackupAndRestoreToAppleTVs;
@property (retain, nonatomic) NSSet *relativePathsToBackgroundRestore;
@property (retain, nonatomic) NSSet *relativePathsNotToRemoveIfNotRestored;
@property (retain, nonatomic) NSSet *relativePathsToIgnoreExclusionsForDrive;
@property (retain, nonatomic) NSSet *relativePathsToBackupToDriveAndStandardAccount;
@property (retain, nonatomic) NSSet *relativePathsToBackupIgnoringProtectionClass;
@property (retain, nonatomic) NSDictionary *relativePathAggregateDictionaryGroups;
@property (retain, nonatomic) NSDictionary *relativePathDomainRedirects;
@property (nonatomic) _Bool shouldDigest;
@property (nonatomic) _Bool hasExternalConfig;
@property (nonatomic) _Bool isExternalConfig;
@property (nonatomic) _Bool shouldRestoreRelativeSymlinks;
@property (nonatomic, readonly, getter=isAppDomain) _Bool appDomain;
@property (nonatomic, readonly, getter=isPlaceholderAppDomain) _Bool placeholderAppDomain;
@property (nonatomic, readonly, getter=isPluginAppDomain) _Bool pluginAppDomain;
@property (nonatomic, readonly, getter=isGroupAppDomain) _Bool groupAppDomain;
@property (nonatomic, readonly, getter=isUninstalledAppDomain) _Bool installedAppDomain;
@property (nonatomic, readonly, getter=isSystemContainerDomain) _Bool systemContainerDomain;
@property (nonatomic, readonly, getter=isSystemSharedContainerDomain) _Bool systemSharedContainerDomain;
@property (nonatomic, readonly, getter=isCameraRollDomain) _Bool cameraRollDomain;
@property (nonatomic, readonly) _Bool hasRootPath;

+ (double)systemDomainsVersion;
+ (double)systemDomainsMinSupportedVersion;
+ (double)systemDomainsMaxSupportedVersion;
+ (id)nameWithAppID:(id)arg1;
+ (id)_stringByRemovingCommentsFromValue:(id)arg1 forKey:(id)arg2;
+ (double)_doubleFromStringValueForKey:(id)arg1 plist:(id)arg2;
+ (void)_loadSystemDomains;
+ (_Bool)isAppPluginName:(id)arg1;
+ (_Bool)isAppGroupName:(id)arg1;
+ (_Bool)isSystemContainerName:(id)arg1;
+ (_Bool)isSystemSharedContainerName:(id)arg1;
+ (id)domainWithName:(id)arg1 rootPath:(id)arg2;
+ (_Bool)shouldRestoreRelativeSymlinksForDomainName:(id)arg1;
+ (_Bool)_boolFromValue:(id)arg1 forKey:(id)arg2;
+ (id)_setOfStringsFromValue:(id)arg1 forKey:(id)arg2;
+ (id)_relativePathsByAddingSQLiteJournals:(id)arg1;
+ (id)_dictionaryOfStringsToStringFromValue:(id)arg1 forKey:(id)arg2;
+ (_Bool)isContainerName:(id)arg1;
+ (_Bool)isAppPlaceholderName:(id)arg1;
+ (id)containerIDWithName:(id)arg1;
+ (void)resetSystemDomains;
+ (id)systemDomains;
+ (id)systemDomainsByName;
+ (_Bool)isSystemName:(id)arg1;
+ (int)containerTypeWithName:(id)arg1;
+ (id)placeholderNameWithAppID:(id)arg1;
+ (id)appDomainWithIdentifier:(id)arg1 rootPath:(id)arg2;
+ (id)appPlaceholderDomainWithIdentifier:(id)arg1 rootPath:(id)arg2;
+ (id)appPluginDomainWithIdentifier:(id)arg1 rootPath:(id)arg2;
+ (id)appGroupDomainWithIdentifier:(id)arg1 rootPath:(id)arg2;
+ (id)systemContainerDomainWithIdentifier:(id)arg1 rootPath:(id)arg2;
+ (id)systemSharedContainerDomainWithIdentifier:(id)arg1 rootPath:(id)arg2;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (long long)compare:(id)arg1;
- (id)initWithName:(id)arg1 plist:(id)arg2;
- (id)initWithName:(id)arg1 rootPath:(id)arg2;
- (_Bool)loadSystemDomainFromPlist:(id)arg1;
- (_Bool)loadDomainFromExternalPlist:(id)arg1;
- (void)releaseCachedFileDescriptors;
- (_Bool)isEqualToDomain:(id)arg1;
- (int)_cachedFileDescriptorWithSnapshotPath:(id)arg1 error:(id *)arg2;
- (int)_cachedFileDescriptorWithError:(id *)arg1;
- (int)cachedFileDescriptorWithSnapshotPath:(id)arg1 error:(id *)arg2;

@end
