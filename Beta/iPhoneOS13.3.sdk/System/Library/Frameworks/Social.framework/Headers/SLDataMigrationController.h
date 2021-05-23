/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Foundation/NSObject.h>

@interface SLDataMigrationController : NSObject

+ (id)sharedController;

- (_Bool)needsMigrationForSocialDaemonBundleID:(id)arg1 preferenceKey:(id)arg2;
- (void)didFinishMigrationForSocialDaemonBundleID:(id)arg1 preferenceKey:(id)arg2;
- (void)ensureSocialUserDataDirectory;
- (_Bool)needsFileProtectionUpgradeForProfileImagesAtPath:(id)arg1 serviceNameForLogging:(id)arg2;
- (void)removeAncillarySocialDatabaseFilesWithPrefix:(id)arg1 serviceNameForLogging:(id)arg2;

@end
