/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface CPLActiveDownloadQueue : NSObject

{
    NSMutableArray *_transferTasks;
    NSMutableArray *_transportTasks;
    _Bool _FIFOQueue;
    NSString *_name;
    unsigned long long _maximumBatchSize;
    unsigned long long _maximumConcurrentTransportTasks;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly, getter=isFIFOQueue) _Bool FIFOQueue;
@property (nonatomic, readonly) unsigned long long maximumBatchSize;
@property (nonatomic, readonly) unsigned long long countOfTransferTasks;
@property (nonatomic, readonly) NSArray *allTransferTasks;
@property (nonatomic, readonly) unsigned long long maximumConcurrentTransportTasks;
@property (nonatomic, readonly) unsigned long long countOfTransportTasks;
@property (nonatomic, readonly) unsigned long long countOfTransferTasksInTransportTasks;

- (id)status;
- (id)initWithName:(id)arg1 FIFOQueue:(_Bool)arg2 maximumBatchSize:(unsigned long long)arg3 maximumConcurrentTransportTasks:(unsigned long long)arg4;
- (void)addTransferTask:(id)arg1;
- (void)removeTransferTask:(id)arg1;
- (id)dequeueBatchOfTransferTasksDequeuedSize:(unsigned long long *)arg1;
- (void)removeAllTransferTasks;
- (void)addTransportTask:(id)arg1;
- (void)removeTransportTask:(id)arg1;
- (id)dequeueLastTransportTask;

@end
