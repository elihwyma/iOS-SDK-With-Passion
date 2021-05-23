/*
 Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MBFileSystemManager : NSObject

{
    _Bool _supportsLocalSnapshots;
    _Bool _supportsSparseFiles;
    NSString *_currentSnapshotPath;
    NSString *_currentSnapshotName;
    NSString *_fileSystemType;
}

@property (retain, nonatomic) NSString *fileSystemType;
@property (nonatomic, readonly) _Bool supportsLocalSnapshots;
@property (nonatomic, readonly) _Bool supportsSparseFiles;
@property (nonatomic, readonly) NSString *currentSnapshotPath;
@property (nonatomic, readonly) NSString *currentSnapshotName;

+ (id)sharedManager;
+ (unsigned long long)fileSystemCapacity;
+ (_Bool)startFilesystemKeyRollingWithError:(id *)arg1;
+ (_Bool)stopFilesystemKeyRollingWithError:(id *)arg1;
+ (void)removeDeviceTransferDirectoryWithEarliestCreationDate:(id)arg1;

- (id)init;
- (id)description;
- (_Bool)_fileSystemSupportsSnapshots;
- (_Bool)_fileSystemSupportsSparseFiles;
- (id)_snapshotName:(id)arg1;
- (_Bool)snapshotFilesystemWithSnapshotName:(id)arg1 withError:(id *)arg2;
- (id)listAllSnapshotsWithError:(id *)arg1;
- (_Bool)removeSnapshot:(id)arg1 withError:(id *)arg2;
- (unsigned long long)removeRestorePrefetchCacheWithEarliestDate:(id)arg1;
- (_Bool)snapshotFilesystem:(id)arg1 withError:(id *)arg2;
- (_Bool)removeAllMobileBackupSnapshots:(id *)arg1;
- (_Bool)removeAllMobileBackupInternalSnapshots:(id *)arg1;
- (unsigned long long)removeRestorePrefetchCache;
- (_Bool)mountSnapshot:(id)arg1 atMountPoint:(id)arg2 withError:(id *)arg3;
- (_Bool)unmountCurrentSnapshotFromMountPoint:(id)arg1 andRemoveIt:(_Bool)arg2 withError:(id *)arg3;
- (_Bool)unmountCurrentSnapshotAndRenameToInternalArchive:(id *)arg1;

@end
