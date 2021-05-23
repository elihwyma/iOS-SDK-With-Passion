/*
 Image: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
 */

#import <Foundation/NSObject.h>

#import <FileProviderDaemon/Swift-Protocol.h>

@class FPDActionOperationQueue, FPDCoordinator, FPDMoveOperation, FPMoveInfo, NSError, NSMutableArray, NSMutableDictionary, NSObservation;

@protocol FPDMoveWriterExecutor, OS_dispatch_queue;

@interface FPDMoveWriter : NSObject <Swift>

{
    FPMoveInfo *_info;
    FPDActionOperationQueue *_moveQueue;
    id <FPDMoveWriterExecutor> _providerWriter;
    FPDCoordinator *_preemptiveDownloadCoordinator;
    NSMutableArray *_sourceFoldersStack;
    NSMutableArray *_destinationFoldersStack;
    NSMutableDictionary *_errorsByRoot;
    NSMutableDictionary *_progressByRoot;
    id _waitedOnID;
    CDUnknownBlockType _waiterBlock;
    _Bool _cancelled;
    NSError *_error;
    NSObject<OS_dispatch_queue> *_asyncQueue;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _logSection;
    NSObservation *_importProgressObservation;
    FPDMoveOperation *_operation;
    CDUnknownBlockType _itemCopyProgressBlock;
    CDUnknownBlockType _itemCompletionBlock;
    CDUnknownBlockType _rootCreatedBlock;
    CDUnknownBlockType _rootCompletionBlock;
    CDUnknownBlockType _completionBlock;
    id <FPDMoveWriterExecutor> _diskWriter;
    FPDCoordinator *_coordinator;
}

@property (retain, nonatomic) id <FPDMoveWriterExecutor> diskWriter;
@property (nonatomic, readonly) FPMoveInfo *info;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) FPDCoordinator *coordinator;
@property (weak, nonatomic, readonly) FPDMoveOperation *operation;
@property (copy, nonatomic) CDUnknownBlockType itemCopyProgressBlock;
@property (copy, nonatomic) CDUnknownBlockType itemCompletionBlock;
@property (copy, nonatomic) CDUnknownBlockType rootCreatedBlock;
@property (copy, nonatomic) CDUnknownBlockType rootCompletionBlock;
@property (copy, nonatomic) CDUnknownBlockType completionBlock;

+ (void)initialize;
+ (id)acquireDownloadSlotForItem:(id)arg1;
+ (void)releaseDownloadSlot:(id)arg1;

- (void)failWithError:(id)arg1;
- (void)cancel;
- (void)start;
- (void)_step;
- (void)_finishWithError:(id)arg1;
- (void)dumpStateTo:(id)arg1;
- (void)cancelRoot:(id)arg1;
- (id)initWithOperation:(id)arg1 queue:(id)arg2;
- (void)startDownloadOfItem:(id)arg1 shouldMaterializeRecursively:(_Bool)arg2;
- (void)setProgress:(id)arg1 forRoot:(id)arg2;
- (void)performCreateFolder:(id)arg1 inside:(id)arg2 as:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)performCopyOfItem:(id)arg1 to:(id)arg2 as:(id)arg3 sourceMaterializeOption:(unsigned long long)arg4 targetMaterializeOption:(unsigned long long)arg5 completion:(CDUnknownBlockType)arg6;
- (id)waitForResultOfSourceID:(id)arg1 root:(id)arg2 error:(id *)arg3;
- (void)_handleCompletionOfAtom:(id)arg1 source:(id)arg2 result:(id)arg3 error:(id)arg4;
- (void)handleCreationForAtom:(id)arg1 result:(id)arg2;
- (void)performCopyOfItem:(id)arg1 to:(id)arg2 as:(id)arg3 sourceMaterializeOption:(unsigned long long)arg4 targetMaterializeOption:(unsigned long long)arg5 useDiskWriter:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;
- (void)performMoveOfItem:(id)arg1 to:(id)arg2 as:(id)arg3 sourceMaterializeOption:(unsigned long long)arg4 targetMaterializeOption:(unsigned long long)arg5 useDiskWriter:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;
- (void)_performCopyOrMoveOfItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performMoveOfFolder:(id)arg1 to:(id)arg2 as:(id)arg3 sourceMaterializeOption:(unsigned long long)arg4 targetMaterializeOption:(unsigned long long)arg5 atomically:(_Bool)arg6 useDiskWriter:(_Bool)arg7 completion:(CDUnknownBlockType)arg8;
- (void)_unblockWaiterForSourceID:(id)arg1 withResult:(id)arg2 error:(id)arg3;
- (void)_performCopyOrMoveOfFolder:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_removeRoot:(id)arg1;
- (void)_handleItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleFolder:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handlePostFolder:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleAtom:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)defaultExecutor;

@end
