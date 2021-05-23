/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@protocol OS_dispatch_queue, SBFFileCacheDelegate, SBFFileCacheFaultHandler, SBFFileCacheStore;

@interface SBFFileCache : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_manifest;
    id <SBFFileCacheStore> _store;
    id <SBFFileCacheFaultHandler> _faultHandler;
    id <SBFFileCacheDelegate> _delegate;
    unsigned long long _maxTotalFileSize;
    unsigned long long _maxTotalFileCount;
    double _maxAllowedTimeSinceLastAccess;
    double _maxAllowedTimeSinceGeneration;
    double _accessDateTimeAdjustment;
}

@property double accessDateTimeAdjustment;
@property (nonatomic, readonly) id <SBFFileCacheStore> store;
@property (nonatomic, readonly) id <SBFFileCacheFaultHandler> faultHandler;
@property (weak) id <SBFFileCacheDelegate> delegate;
@property unsigned long long maxTotalFileSize;
@property unsigned long long maxTotalFileCount;
@property double maxAllowedTimeSinceLastAccess;
@property double maxAllowedTimeSinceGeneration;

- (id)init;
- (id)description;
- (id)callbackQueue;
- (id)fileNameForIdentifier:(id)arg1;
- (void)_queue_updateManifestForLoadedFileWrapper:(id)arg1 filename:(id)arg2 usingStore:(id)arg3;
- (void)_queue_createManifestEntryForGeneratedFileWrapper:(id)arg1 filename:(id)arg2 usingStore:(id)arg3;
- (void)performOnWorkQueueUsingBlock:(CDUnknownBlockType)arg1;
- (void)_queue_removeManifestEntryForFilename:(id)arg1 usingStore:(id)arg2;
- (void)_queue_resetManifestUsingStore:(id)arg1;
- (void)_queue_loadManifestUsingStore:(id)arg1;
- (void)_queue_evictIfNeededUsingStore:(id)arg1;
- (void)_queue_saveManifestUsingStore:(id)arg1;
- (void)_queue_evictFilesAtManifestIndexes:(id)arg1 usingStore:(id)arg2;
- (void)_queue_evictFileWithInfo:(id)arg1 usingStore:(id)arg2;
- (id)initWithStore:(id)arg1 faultHandler:(id)arg2;
- (void)loadFileWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeFileWithIdentifier:(id)arg1;
- (void)removeAllFiles;

@end
