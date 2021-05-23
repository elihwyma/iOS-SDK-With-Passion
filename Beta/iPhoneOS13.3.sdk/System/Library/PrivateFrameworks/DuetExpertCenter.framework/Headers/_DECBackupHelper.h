/*
 Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

#import <Foundation/NSObject.h>

@class NSFileManager;

@interface _DECBackupHelper : NSObject

{
    NSFileManager *_fm;
}

+ (id)sharedInstance;

- (id)init;
- (_Bool)isClassCLocked;
- (_Bool)canBackup;
- (_Bool)backupNewerThanCurrentState;
- (_Bool)markRestoreAsNotDone;
- (_Bool)finishBackup;
- (void)fixupDataProtection;
- (_Bool)canRestore;
- (_Bool)restoredAlready;
- (_Bool)restoreStart;
- (_Bool)restoreDone;
- (id)backupPathForExpert:(id)arg1;
- (id)restorePathForExpert:(id)arg1;
- (_Bool)createBackupDirectoriesIfMissing;
- (_Bool)probePathAt:(id)arg1;
- (id)_currentBackupVersionPath;
- (_Bool)markVersionOfBackupDirectoryAsCurrent;

@end
