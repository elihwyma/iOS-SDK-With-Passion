/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Accounts/ACAccount.h>

@interface ACAccount (BRAdditions)

- (id)br_dsid;
- (_Bool)br_isEnabledForCloudDocs;
- (_Bool)br_isCloudDocsMigrated;
- (void)br_setCloudDocsMigrated:(_Bool)arg1;
- (_Bool)br_isCloudDocsMigrationComplete;
- (void)br_setCloudDocsMigrationComplete:(_Bool)arg1;
- (_Bool)br_isManagedAppleID;
- (_Bool)br_isEnabledForiCloudDesktop;
- (_Bool)br_isiCloudAccount;
- (_Bool)br_isPrimaryAccount;
- (void)br_setEnabledForiCloudDesktop:(_Bool)arg1;
- (_Bool)br_isEnabledForDesktopSync;
- (_Bool)br_isEnabledForUbiquity;
- (id)br_firstName;
- (id)br_lastName;
- (id)br_displayName;
- (_Bool)br_isPrimaryiCloudAccount;

@end
