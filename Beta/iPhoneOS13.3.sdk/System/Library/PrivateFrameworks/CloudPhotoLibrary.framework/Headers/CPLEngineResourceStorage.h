/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <CloudPhotoLibrary/CPLEngineStorage.h>

@class CPLEngineFileStorage, CPLPlatformObject, NSMutableDictionary, NSObject, NSString, NSURL, _CPLPruneRequestCounter;

@protocol OS_dispatch_queue;

@interface CPLEngineResourceStorage : CPLEngineStorage

{
    NSMutableDictionary *_identitiesToCommit;
    NSMutableDictionary *_identitiesToDelete;
    NSURL *_tempFolderURL;
    NSObject<OS_dispatch_queue> *_pruneStatsQueue;
    _CPLPruneRequestCounter *_pruneRequests;
    _CPLPruneRequestCounter *_purgeabilityCheckRequests;
    _Bool _shouldCreateTempFolder;
    _Bool _shouldCheckFilesForUpload;
    CPLEngineFileStorage *_fileStorage;
}

@property (nonatomic, readonly) CPLEngineFileStorage *fileStorage;
@property (nonatomic) _Bool shouldCheckFilesForUpload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;

- (id)status;
- (_Bool)openWithError:(id *)arg1;
- (unsigned long long)sizeOfOriginalResourcesToUpload;
- (unsigned long long)sizeOfResourcesToUpload;
- (unsigned long long)scopeType;
- (_Bool)resetWithError:(id *)arg1;
- (_Bool)compactWithError:(id *)arg1;
- (id)initWithEngineStore:(id)arg1 name:(id)arg2;
- (_Bool)_clearAndCreateTempFolderIfNecessaryWithError:(id *)arg1;
- (_Bool)storeResourceForUpload:(id)arg1 shouldCheckResource:(_Bool)arg2 error:(id *)arg3;
- (_Bool)storeResourceCopyForUpload:(id)arg1 error:(id *)arg2;
- (_Bool)dropResourceForUpload:(id)arg1 error:(id *)arg2;
- (id)retainFileURLForResource:(id)arg1 error:(id *)arg2;
- (_Bool)releaseFileURL:(id)arg1 forResource:(id)arg2 error:(id *)arg3;
- (_Bool)hasResource:(id)arg1;
- (id)createTempDestinationURLForResource:(id)arg1 error:(id *)arg2;
- (_Bool)storeDownloadedResource:(id)arg1 atURL:(id)arg2 error:(id *)arg3;
- (_Bool)checkIsEmpty;
- (void)writeTransactionDidFail;
- (void)writeTransactionDidSucceed;
- (id)statusDictionary;
- (void)notePruningRequestForResource:(id)arg1 realPrune:(_Bool)arg2 successful:(_Bool)arg3 prunedSize:(unsigned long long)arg4;
- (void)notePruningRequestForResource:(id)arg1 realPrune:(_Bool)arg2 successful:(_Bool)arg3;

@end
