/*
 Image: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
 */

#import <Foundation/NSObject.h>

@class MBManager;

@interface PCSMobileBackup : NSObject

{
    MBManager *_backupManager;
}

@property (retain) MBManager *backupManager;

+ (id)defaultMobileBackup;

- (id)init;
- (_Bool)isBackupEnabled;

@end
