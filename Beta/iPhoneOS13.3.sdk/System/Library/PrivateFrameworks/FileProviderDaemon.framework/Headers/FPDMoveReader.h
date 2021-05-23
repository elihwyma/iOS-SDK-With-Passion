/*
 Image: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
 */

#import <Foundation/NSObject.h>

#import <FileProviderDaemon/Swift-Protocol.h>

@class FPDActionOperationQueue, FPDMoveOperation, FPDMoveWriter, FPMoveInfo, NSError, NSMutableSet;

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface FPDMoveReader : NSObject <Swift>

{
    FPDMoveOperation *_operation;
    FPMoveInfo *_info;
    FPDActionOperationQueue *_moveQueue;
    FPDMoveWriter *_writer;
    _Bool _startedPreflight;
    _Bool _finishedPreflight;
    _Bool _willMaterializeTargetFolder;
    _Bool _isTargetFolderMaterialized;
    unsigned long long _depth;
    NSMutableSet *_cancelledRoots;
    _Bool __cancelled;
    NSError *_error;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _logSection;
    NSObject<OS_dispatch_semaphore> *_clientUnblockSema;
    CDUnknownBlockType _rootPreflightCompletionBlock;
    CDUnknownBlockType _preflightCompletionBlock;
    CDUnknownBlockType _startDownloadBlock;
    CDUnknownBlockType _errorBlock;
}

@property (copy, nonatomic) CDUnknownBlockType rootPreflightCompletionBlock;
@property (copy, nonatomic) CDUnknownBlockType preflightCompletionBlock;
@property (copy, nonatomic) CDUnknownBlockType startDownloadBlock;
@property (copy, nonatomic) CDUnknownBlockType errorBlock;

+ (_Bool)_hasDiskWriterSupportForDomain:(id)arg1;

- (id)init;
- (void)cancel;
- (void)start;
- (_Bool)_isCancelled;
- (void)_run;
- (void)_finishWithError:(id)arg1;
- (void)dumpStateTo:(id)arg1;
- (void)cancelRoot:(id)arg1;
- (id)initWithMoveWriter:(id)arg1 operation:(id)arg2 queue:(id)arg3;
- (void)_t_unblock;
- (void)_progressComputationPreflight;
- (_Bool)_isRootCancelled:(id)arg1;
- (id)_getTargetFolderFor:(id)arg1 root:(id)arg2 error:(id *)arg3;
- (id)_targetNameForSource:(id)arg1;
- (_Bool)_isSingleMoveForRoot:(id)arg1;
- (_Bool)_shouldUseDiskWriterToPerformMoveForItem:(id)arg1;
- (_Bool)_enqueueItem:(id)arg1 forRoot:(id)arg2 atomically:(_Bool)arg3 useDiskWriter:(_Bool)arg4;
- (void)_t_waitForUnblock;
- (void)_bailOutOfRoot:(id)arg1;
- (void)_enqueueAtomsForRoot:(id)arg1;

@end
