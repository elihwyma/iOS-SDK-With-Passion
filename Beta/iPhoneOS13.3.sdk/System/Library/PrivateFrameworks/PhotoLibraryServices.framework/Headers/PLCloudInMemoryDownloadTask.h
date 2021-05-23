/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class CPLResourceTransferTask, NSArray, NSMapTable, NSString;

@interface PLCloudInMemoryDownloadTask : NSObject

{
    NSMapTable *_taskIDsToCompletionHandlers;
    _Bool _completed;
    NSString *_resourceID;
    CPLResourceTransferTask *_transferTask;
}

@property (copy, nonatomic, readonly) NSString *resourceID;
@property (retain, nonatomic) CPLResourceTransferTask *transferTask;
@property (nonatomic, readonly, getter=isCompleted) _Bool completed;
@property (weak, nonatomic, readonly) NSArray *taskIDs;

- (id)initWithResourceID:(id)arg1 taskID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)addClientWithTaskID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cancelClientWithTaskID:(id)arg1;
- (void)reportCompletionWithData:(id)arg1 error:(id)arg2;

@end
