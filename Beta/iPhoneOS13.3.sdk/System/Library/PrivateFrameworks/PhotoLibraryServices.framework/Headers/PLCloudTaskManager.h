/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface PLCloudTaskManager : NSObject

{
    NSMutableDictionary *_pendingTaskForTaskIdentifier;
    NSMutableDictionary *_highPriorityResourceToTaskIdentifierMap;
    NSMutableDictionary *_lowPriorityResourceToTaskIdentifierMap;
    NSObject<OS_dispatch_queue> *_isolationQueue;
}

- (id)init;
- (void)reset;
- (_Bool)addProgressBlock:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2 forResource:(id)arg3 highPriority:(_Bool)arg4 withTaskIdentifier:(id)arg5;
- (void)setPendingTaskWithTransferTask:(id)arg1 withTaskIdentifier:(id)arg2;
- (void)reportProgress:(float)arg1 forResourceTransferTask:(id)arg2;
- (void)reportCompletionForResourceTransferTask:(id)arg1 withError:(id)arg2;
- (id)getPendingTaskForTaskIdentifier:(id)arg1;
- (void)cancelTaskWithTaskIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_taskForResource:(id)arg1 highPriority:(_Bool)arg2;
- (id)_taskIdentifiersForResource:(id)arg1 highPriority:(_Bool)arg2;
- (void)_setTaskIdentifiers:(id)arg1 forResource:(id)arg2 highPriority:(_Bool)arg3;
- (void)_removeTaskIdentifiersForResource:(id)arg1 highPriority:(_Bool)arg2;
- (id)_identifierForResource:(id)arg1;

@end
