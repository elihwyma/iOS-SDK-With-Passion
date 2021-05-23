/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <ProtocolBuffer/NSOperation.h>

@class NSError, NSMutableArray, NSObject;

@protocol OS_dispatch_queue;

@interface SSVOperation : NSOperation

{
    NSOperation *_childOperation;
    NSMutableArray *_childRequests;
    NSObject<OS_dispatch_queue> *_serialQueue;
    _Bool _success;
    NSError *_error;
}

@property (nonatomic) _Bool success;
@property (copy, nonatomic) NSError *error;

- (id)init;
- (void)cancel;
- (void)dispatchSync:(CDUnknownBlockType)arg1;
- (void)dispatchAsync:(CDUnknownBlockType)arg1;
- (void)runChildOperation:(id)arg1;
- (void)addChildRequest:(id)arg1;
- (void)removeChildRequest:(id)arg1;

@end
