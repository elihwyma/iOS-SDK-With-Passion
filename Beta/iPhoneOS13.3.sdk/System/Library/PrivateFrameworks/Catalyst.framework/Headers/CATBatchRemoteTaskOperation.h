/*
 Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

#import <Catalyst/CATOperation.h>

@class NSArray, NSOperationQueue;

@interface CATBatchRemoteTaskOperation : CATOperation

{
    NSArray *mRemoteTasks;
    NSOperationQueue *mQueue;
}

@property (copy, nonatomic, readonly) NSArray *remoteTaskOperations;

- (id)init;
- (void)cancel;
- (void)main;
- (_Bool)isAsynchronous;
- (id)initWithRemoteTaskOperations:(id)arg1;
- (void)cancelSubOperations;
- (void)remoteTaskDidFinish:(id)arg1;
- (id)initWithTaskClient:(id)arg1 requests:(id)arg2;

@end
