/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <ProtocolBuffer/NSOperationQueue.h>

__attribute__((visibility("hidden")))
@interface SSVBarrierOperationQueue : NSOperationQueue

- (void)addOperation:(id)arg1;
- (void)addOperationWithBlock:(CDUnknownBlockType)arg1;
- (void)addOperations:(id)arg1 waitUntilFinished:(_Bool)arg2;
- (void)addBarrierOperation:(id)arg1;

@end
