/*
 Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
 */

#import <Foundation/NSFileManager.h>

@interface NSFileManager (RPExtensions)

- (id)_srTempPath;
- (id)dateSuffix;
- (long long)_srDeleteFilesOlderThanTimeToLiveInSeconds:(double)arg1;
- (unsigned long long)_srDeviceFreeDiskSpace;
- (long long)_srSizeOfTempDir:(id *)arg1;
- (void)_srSetupTempDirectory;
- (id)outputPath:(_Bool)arg1 bundleID:(id)arg2;
- (id)trimmedOutputPath:(id)arg1;
- (long long)_srDeleteAllTempFiles;
- (void)_srRemoveFile:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_srMoveFileFromURL:(id)arg1 toURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_srDeleteFilesWithPrefix:(id)arg1;
- (id)_srGetCreationDateForFile:(id)arg1;
- (_Bool)_srDeviceHasSufficientFreeSpaceForRecording;
- (_Bool)_srDeviceHasSufficientSpaceForCurrentRecording;

@end
