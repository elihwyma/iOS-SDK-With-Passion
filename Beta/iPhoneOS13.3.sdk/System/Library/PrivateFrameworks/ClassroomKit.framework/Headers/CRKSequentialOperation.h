/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATOperation.h>

@class CATOperationQueue, NSArray;

@interface CRKSequentialOperation : CATOperation

{
    CATOperation *_failedOperation;
    unsigned long long _frontOfQueue;
    NSArray *_operations;
    CATOperationQueue *_queue;
}

@property (nonatomic) unsigned long long frontOfQueue;
@property (nonatomic, readonly) NSArray *operations;
@property (nonatomic, readonly) CATOperationQueue *queue;
@property (retain, nonatomic) CATOperation *failedOperation;

+ (id)sequentialOperationWithOperations:(id)arg1;

- (id)init;
- (void)cancel;
- (void)main;
- (_Bool)isAsynchronous;
- (id)initWithSequentialOperations:(id)arg1 queue:(id)arg2;
- (void)enqueueFront;
- (void)frontOperationDidFinish:(id)arg1;

@end
