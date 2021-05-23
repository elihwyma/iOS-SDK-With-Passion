/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface PLCloudInMemoryTaskManager : NSObject

{
    NSMutableDictionary *_resourceIDsToDownloadTasks;
    NSMutableDictionary *_taskIDsToDownloadTasks;
}

- (id)init;
- (void)reset;
- (id)_identifierForResource:(id)arg1;
- (_Bool)addClientHandlerAndCreateTaskIfNecessaryForResource:(id)arg1 taskIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setTransferTask:(id)arg1 forResource:(id)arg2;
- (void)cancelTaskWithTaskIdentifier:(id)arg1;
- (void)reportCompletionForResource:(id)arg1 withData:(id)arg2 error:(id)arg3;

@end
