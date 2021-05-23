/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class NSMapTable, NSMutableDictionary;

@interface CKOperationCallbackManager : NSObject

{
    NSMutableDictionary *_progressCallbacks;
    NSMutableDictionary *_statisticsCallbacks;
    NSMutableDictionary *_commandCallbacks;
    NSMutableDictionary *_completionCallbacks;
    NSMutableDictionary *_checkpointCallbacks;
    NSMutableDictionary *_discretionarySuspensionCallbacks;
    NSMapTable *_operationsByID;
}

@property (retain) NSMutableDictionary *progressCallbacks;
@property (retain) NSMutableDictionary *statisticsCallbacks;
@property (retain) NSMutableDictionary *commandCallbacks;
@property (retain) NSMutableDictionary *completionCallbacks;
@property (retain) NSMutableDictionary *checkpointCallbacks;
@property (retain) NSMutableDictionary *discretionarySuspensionCallbacks;
@property (retain) NSMapTable *operationsByID;

- (id)init;
- (void)handleOperationProgress:(id)arg1 forOperationWithID:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)handleOperationStatistics:(id)arg1 forOperationWithID:(id)arg2;
- (void)handleOperationCompletion:(id)arg1 forOperationWithID:(id)arg2;
- (void)handleOperationCheckpoint:(id)arg1 forOperationWithID:(id)arg2;
- (void)removeAllCallbacks;
- (void)handleDiscretionarySuspensionForOperationWithID:(id)arg1;
- (void)registerProgressCallback:(CDUnknownBlockType)arg1 forOperation:(id)arg2;
- (void)registerStatisticsCallback:(CDUnknownBlockType)arg1 forOperation:(id)arg2;
- (void)registerCompletionCallback:(CDUnknownBlockType)arg1 forOperation:(id)arg2;
- (void)registerCheckpointCallback:(CDUnknownBlockType)arg1 forOperation:(id)arg2;
- (void)registerSuspensionCallback:(CDUnknownBlockType)arg1 forDiscretionaryOperation:(id)arg2;
- (void)unregisterAllCallbacksForOperation:(id)arg1;
- (void)_performCallbackForOperation:(id)arg1 callback:(CDUnknownBlockType)arg2 errorCallback:(CDUnknownBlockType)arg3;
- (void)registerCommandCallback:(CDUnknownBlockType)arg1 forOperation:(id)arg2;

@end
