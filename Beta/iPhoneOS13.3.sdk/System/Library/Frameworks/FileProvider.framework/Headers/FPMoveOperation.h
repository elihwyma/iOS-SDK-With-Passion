/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <FileProvider/FPActionOperation.h>

@class FPItem, FPMoveInfo, FPProgressManager, NSArray, NSDictionary, NSMutableDictionary, NSMutableSet, NSURL;

@protocol NSXPCProxyCreating><FPDaemonActionOperation;

@interface FPMoveOperation : FPActionOperation

{
    FPMoveInfo *_info;
    NSArray *__sourceURLs;
    NSArray *__sourceItems;
    NSURL *__destinationURL;
    FPItem *__destinationFolder;
    unsigned long long __lastUsedDatePolicy;
    NSDictionary *__targetFilenamesByURL;
    NSDictionary *__targetFilenamesByItem;
    FPProgressManager *_progressManager;
    _Bool _isScheduledFromThisClient;
    id <NSXPCProxyCreating><FPDaemonActionOperation> _remoteMoveOperation;
    NSMutableSet *_createdOrFailedRoots;
    NSMutableDictionary *_createdItemsByRoot;
    NSMutableDictionary *_placeholderIDsByRoot;
    NSMutableDictionary *_URLByResolvedFPItem;
    NSDictionary *_errorsByItem;
    NSDictionary *_transferResults;
    NSMutableDictionary *_progressByRoot;
    _Bool _shouldBounceOnCollision;
    NSDictionary *_transferLocations;
    NSMutableDictionary *_filenamesByURL;
    CDUnknownBlockType __t_patchActionOperationInfo;
    CDUnknownBlockType __t_remoteOperationWasScheduled;
    CDUnknownBlockType __t_rootCompleted;
}

@property (copy, nonatomic) NSDictionary *progressByRoot;
@property (copy, nonatomic) CDUnknownBlockType _t_patchActionOperationInfo;
@property (copy, nonatomic) CDUnknownBlockType _t_remoteOperationWasScheduled;
@property (copy, nonatomic) CDUnknownBlockType _t_rootCompleted;
@property (nonatomic) _Bool shouldBounceOnCollision;
@property (nonatomic) unsigned long long lastUsageUpdatePolicy;
@property (copy, nonatomic) NSDictionary *targetFilenamesByURL;
@property (copy, nonatomic) NSDictionary *targetFilenamesByItem;
@property (nonatomic, readonly) _Bool byCopy;
@property (nonatomic, readonly) NSDictionary *transferResults;
@property (nonatomic, readonly) NSDictionary *errorsByItem;
@property (nonatomic, readonly) NSDictionary *transferLocations;
@property (nonatomic, readonly) NSMutableDictionary *filenamesByURL;

- (void)cancel;
- (id)operationDescription;
- (void)completedWithResult:(id)arg1 error:(id)arg2;
- (id)fp_prettyDescription;
- (id)initWithItems:(id)arg1 destinationURL:(id)arg2;
- (id)initWithURLs:(id)arg1 destinationFolder:(id)arg2;
- (id)initWithItems:(id)arg1 destinationFolder:(id)arg2;
- (void)actionMain;
- (void)presendNotifications;
- (void)_runWithRemoteOperation:(id)arg1;
- (void)_completedWithResultsByRoot:(id)arg1 errorsByRoot:(id)arg2 error:(id)arg3;
- (void)remoteOperationCreatedRoot:(id)arg1 resultingItem:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remoteOperationCompletedRoot:(id)arg1 resultingItem:(id)arg2 error:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)remoteOperationProgressesAreReady;
- (void)remoteOperationFinishedSendingPastUpdates;
- (id)initWithRemoteOperation:(id)arg1 info:(id)arg2;
- (unsigned long long)defaultLastUsedDatePolicy;
- (void)checkNonEmptyPackage;
- (id)initWithSourceItems:(id)arg1 orSourceURLs:(id)arg2 destinationFolder:(id)arg3 orDestinationURL:(id)arg4 action:(id)arg5;
- (void)_recomputeMoveInfoIfNecessary;
- (void)_resolveURLsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_presendNotifications;
- (void)_scheduleAgainAfterErrorRecovery;
- (void)_completedWithResult:(id)arg1 error:(id)arg2;
- (void)_recoverFromCollisionError:(id)arg1 withPolicy:(unsigned long long)arg2;
- (_Bool)_preflightCheckNotMovingIntoSelfWithError:(id *)arg1;
- (_Bool)_preflightCheckProviderCanMoveWithErrors:(id *)arg1;
- (void)_preflightForceBounceIfCopyingOntoSelf;
- (void)_t_unblockReader;
- (id)initWithSourceURLs:(id)arg1 destinationFolder:(id)arg2;
- (id)initWithSourceURLsAndNames:(id)arg1 destinationFolder:(id)arg2;
- (void)subclassPreflightWithCompletion:(CDUnknownBlockType)arg1;

@end
