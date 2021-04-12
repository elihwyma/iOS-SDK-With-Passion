//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FileProvider/FPActionOperation.h>

#import <FileProvider/FPDaemonActionOperationClient-Protocol.h>

@class FPDownloadInfo, NSArray, NSMutableDictionary, NSMutableSet, NSObject, NSObservation;
@protocol NSXPCProxyCreating><FPDaemonActionOperation, OS_dispatch_source;

@interface FPDownloadOperation : FPActionOperation <FPDaemonActionOperationClient>
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
    BOOL _recursively;
    id /* CDUnknownBlockType */ _downloadCompletionBlock;
    id /* CDUnknownBlockType */ __t_patchActionOperationInfo;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ _t_patchActionOperationInfo; // @synthesize _t_patchActionOperationInfo=__t_patchActionOperationInfo;
@property(copy, nonatomic) id /* CDUnknownBlockType */ downloadCompletionBlock; // @synthesize downloadCompletionBlock=_downloadCompletionBlock;
@property(nonatomic) BOOL recursively; // @synthesize recursively=_recursively;
// - (void).cxx_destruct;
- (void)_retrieveChildProgressForItem:(id)arg1 childProxies:(id)arg2 parentSetup:(id /* CDUnknownBlockType */)arg3;
- (void)_removeProgressWithItemID:(id)arg1;
- (void)_updateGlobalParentProgressForItem:(id)arg1;
- (void)_updateParentProgressForItem:(id)arg1;
- (void)_setupParentProgress;
- (void)_updateProgressWithUpdatedFileCountForItem:(id)arg1;
- (void)showItemsAsDownloadingEvenIfDownloaded:(BOOL)arg1;
- (void)_runWithRemoteOperation:(id)arg1;
- (void)remoteOperationProgressesAreReady;
- (void)remoteOperationFinishedSendingPastUpdates;
- (void)remoteOperationCreatedRoot:(id)arg1 resultingItem:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)remoteOperationCompletedRoot:(id)arg1 resultingItem:(id)arg2 error:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (id)initWithRemoteOperation:(id)arg1 info:(id)arg2;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)completedWithResult:(id)arg1 error:(id)arg2;
- (void)_completedWithResultsByRoot:(id)arg1 errorsByRoot:(id)arg2 error:(id)arg3;
- (void)actionMain;
- (id)fp_prettyDescription;
- (void)presendNotifications;
- (id)initWithItems:(id)arg1;
- (void)_recomputeDownloadInfoIfNecessary;

@end

