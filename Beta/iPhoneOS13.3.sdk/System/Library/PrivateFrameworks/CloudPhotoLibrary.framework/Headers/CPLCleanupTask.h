/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <CloudPhotoLibrary/CPLEngineSyncTask.h>

@interface CPLCleanupTask : CPLEngineSyncTask

- (void)launch;
- (id)taskIdentifier;
- (void)taskDidFinishWithError:(id)arg1;
- (void)_doOneIteration;

@end
