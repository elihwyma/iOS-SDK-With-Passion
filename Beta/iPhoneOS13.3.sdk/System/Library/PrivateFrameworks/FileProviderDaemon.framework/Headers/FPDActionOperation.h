/*
 Image: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
 */

#import <FileProvider/FPOperation.h>

@class FPActionOperationInfo, FPDExtensionManager, FPDRequest, NSError, NSMutableArray, NSMutableDictionary, NSMutableSet, NSProgress;

@interface FPDActionOperation : FPOperation

{
    _Bool _hasFinishedPreflight;
    NSProgress *_progress;
    FPDExtensionManager *_manager;
    FPDRequest *_request;
    FPActionOperationInfo *_info;
    NSMutableArray *_clients;
    NSMutableArray *_clientCompletions;
    NSMutableDictionary *_progressByRoot;
    NSMutableDictionary *_errorsByRoot;
    NSMutableSet *_completedRoots;
    NSMutableDictionary *_createdItemByRoot;
    NSMutableDictionary *_progressCompletionsByRoot;
    NSError *_error;
    unsigned long long _logSection;
}

@property (retain, nonatomic) NSMutableArray *clients;
@property (retain, nonatomic) NSMutableArray *clientCompletions;
@property (nonatomic) _Bool hasFinishedPreflight;
@property (retain, nonatomic) NSMutableDictionary *progressByRoot;
@property (retain, nonatomic) NSMutableDictionary *errorsByRoot;
@property (retain, nonatomic) NSMutableSet *completedRoots;
@property (retain, nonatomic) NSMutableDictionary *createdItemByRoot;
@property (retain, nonatomic) NSMutableDictionary *progressCompletionsByRoot;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) unsigned long long logSection;
@property (nonatomic, readonly) NSProgress *progress;
@property (weak, nonatomic, readonly) FPDExtensionManager *manager;
@property (nonatomic, readonly) FPDRequest *request;
@property (nonatomic, readonly) FPActionOperationInfo *info;

- (void)cancel;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)dumpStateTo:(id)arg1;
- (void)registerFrameworkClient:(id)arg1 operationCompletion:(CDUnknownBlockType)arg2;
- (id)progressForRoot:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cancelRoot:(id)arg1;
- (id)initWithActionInfo:(id)arg1 request:(id)arg2 server:(id)arg3;
- (void)forAllClients:(CDUnknownBlockType)arg1;
- (void)unregisterClientsAfterCompletion;
- (void)sendPastUpdatesToClient:(id)arg1;

@end
