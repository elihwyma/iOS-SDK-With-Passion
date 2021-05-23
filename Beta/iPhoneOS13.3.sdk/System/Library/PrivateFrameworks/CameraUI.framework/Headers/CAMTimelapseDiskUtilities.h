/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@interface CAMTimelapseDiskUtilities : NSObject

+ (_Bool)hasPendingWork;
+ (id)fileNameForImageFrameIndex:(long long)arg1;
+ (id)directoryPathForTimelapseUUID:(id)arg1;
+ (id)readSortedStatesFromDiskMergeSecondaryState:(_Bool)arg1;
+ (_Bool)reserveDummyFileForTimelapseUUID:(id)arg1 width:(long long)arg2 height:(long long)arg3 useHEVC:(_Bool)arg4;
+ (id)readSecondaryStateForTimelapseUUID:(id)arg1;
+ (_Bool)writeStateToDisk:(id)arg1 createDirectoryIfNeeded:(_Bool)arg2;
+ (id)timelapseDirectoryPathCreateIfNeeded:(_Bool)arg1;
+ (id)timelapseDirectoryPath;
+ (id)stateFileName;
+ (id)stateFilePathForTimelapseUUID:(id)arg1;
+ (id)secondaryStateFileName;
+ (id)secondaryStateFilePathForTimelapseUUID:(id)arg1;
+ (_Bool)writeSecondaryStateToDisk:(id)arg1 forTimelapseUUID:(id)arg2;
+ (id)timelapseUUIDsOnDisk;
+ (id)readStateForTimelapseUUID:(id)arg1 mergeSecondaryState:(_Bool)arg2;
+ (long long)frameIndexFromImageFileName:(id)arg1;
+ (id)dummyFileName;
+ (id)dummyFilePathForTimelapseUUID:(id)arg1;
+ (id)fileNameForImageVISIndex:(long long)arg1;
+ (id)updateSecondaryStateForTimelapseUUID:(id)arg1 withStopReasons:(long long)arg2 stopTime:(id)arg3;
+ (id)updateSecondaryStateForMovieWriteAttemptForTimelapseUUID:(id)arg1;
+ (id)updateSecondaryStateForTimelapseUUID:(id)arg1 forStateReadSuccessfully:(_Bool)arg2;
+ (id)readFrameFilePathsForTimelapseUUID:(id)arg1;
+ (id)sortedArrayFromFilePathDictionary:(id)arg1 reverse:(_Bool)arg2;
+ (_Bool)removeDummyFileForTimelapseUUID:(id)arg1;

@end
