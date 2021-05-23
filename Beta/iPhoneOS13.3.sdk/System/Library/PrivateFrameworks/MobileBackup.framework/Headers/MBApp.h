/*
 Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

#import <MobileBackup/MBContainer.h>

@class NSArray, NSDictionary, NSString;

@interface MBApp : MBContainer

@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) NSString *bundleVersion;
@property (nonatomic, readonly) NSString *bundleDir;
@property (nonatomic, readonly) NSDictionary *entitlements;
@property (nonatomic, readonly) NSString *entitlementsRelativePath;
@property (nonatomic, readonly) NSArray *groups;
@property (nonatomic, readonly) NSArray *plugins;
@property (nonatomic, readonly) NSArray *containers;
@property (nonatomic, readonly) _Bool isPlaceholder;
@property (nonatomic, readonly) _Bool isSystemApp;
@property (nonatomic, readonly) _Bool isAppUpdating;

+ (id)appWithPropertyList:(id)arg1;
+ (id)appWithBundleID:(id)arg1;
+ (id)safeHarborWithPath:(id)arg1;
+ (_Bool)unzipPlaceholderDomainZipFile:(id)arg1 atDirectory:(id)arg2;

- (id)domain;
- (id)_resourceRelativePathsToBackupAndRestoreForRootDir:(id)arg1 relativePath:(id)arg2;
- (id)_placeholderRelativePathsToBackupAndRestoreWithCache:(id)arg1;
- (_Bool)_writeDeviceAppropriateIconToPath:(id)arg1 fromBundlePath:(id)arg2;
- (id)placeholderDomainWithCache:(id)arg1;
- (void)setBundleDir:(id)arg1;
- (id)placeholderDomainZip;

@end
