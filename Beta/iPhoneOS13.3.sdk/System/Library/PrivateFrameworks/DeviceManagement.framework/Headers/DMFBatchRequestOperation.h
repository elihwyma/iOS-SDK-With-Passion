/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

#import <Catalyst/CATOperation.h>

@class CATOperationQueue, CATRemoteTaskOperation, NSArray;

@interface DMFBatchRequestOperation : CATOperation

{
    CATOperationQueue *_queue;
    CATRemoteTaskOperation *_activityTransactionOperation;
    NSArray *_subOperations;
}

@property (retain, nonatomic) CATOperationQueue *queue;
@property (retain, nonatomic) CATRemoteTaskOperation *activityTransactionOperation;
@property (copy, nonatomic) NSArray *subOperations;

- (void)setName:(id)arg1;
- (void)main;
- (_Bool)isAsynchronous;
- (void)activityTransactionOperationDidStart:(id)arg1;
- (void)activityTransactionOperationDidFinish:(id)arg1;
- (id)initWithActivityTransactionOperation:(id)arg1 subOperations:(id)arg2;

@end
