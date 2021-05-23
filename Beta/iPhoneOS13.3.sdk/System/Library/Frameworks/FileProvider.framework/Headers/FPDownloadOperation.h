/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <FileProvider/FPActionOperation.h>

@class FPDownloadInfo, NSArray, NSMutableDictionary, NSMutableSet, NSObject, NSObservation;

@protocol NSXPCProxyCreating><FPDaemonActionOperation, OS_dispatch_source;

@interface FPDownloadOperation : FPActionOperation

{
    NSArray *_items;
    FPDownloadInfo *_info;
    NSMutableSet *_itemsPendingDownload;
    NSObject<OS_dispatch_source> *_stitchingTimer;
    id <NSXPCProxyCreating><FPDaemonActionOperation> _remoteMoveOperation;
    NSMutableDictionary *_progressByRoot;
    NSObservation *_observation;
    NSMutableDictionary *_childProxies;
    NSMutableDictionary *_globalChildProxies;
    _Bool _recursively;
    CDUnknownBlockType _downloadCompletionBlock;
    CDUnknownBlockType __t_patchActionOperationInfo;
}

@property (copy, nonatomic) CDUnknownBlockType _t_patchActionOperationInfo;
@property (nonatomic) _Bool recursively;
@property (copy, nonatomic) CDUnknownBlockType downloadCompletionBlock;

- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithItems:(id)arg1;
- (void)completedWithResult:(id)arg1 error:(id)arg2;
- (id)fp_prettyDescription;
- (void)actionMain;
- (void)presendNotifications;
- (void)_setupParentProgress;
- (void)showItemsAsDownloadingEvenIfDownloaded:(_Bool)arg1;
- (void)_recomputeDownloadInfoIfNecessary;
- (void)_runWithRemoteOperation:(id)arg1;
- (void)_removeProgressWithItemID:(id)arg1;
- (void)_updateProgressWithUpdatedFileCountForItem:(id)arg1;
- (void)_completedWithResultsByRoot:(id)arg1 errorsByRoot:(id)arg2 error:(id)arg3;
- (void)_updateParentProgressForItem:(id)arg1;
- (void)_updateGlobalParentProgressForItem:(id)arg1;
- (void)_retrieveChildProgressForItem:(id)arg1 childProxies:(id)arg2 parentSetup:(CDUnknownBlockType)arg3;
- (void)remoteOperationCreatedRoot:(id)arg1 resultingItem:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remoteOperationCompletedRoot:(id)arg1 resultingItem:(id)arg2 error:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)remoteOperationProgressesAreReady;
- (void)remoteOperationFinishedSendingPastUpdates;
- (id)initWithRemoteOperation:(id)arg1 info:(id)arg2;

@end
