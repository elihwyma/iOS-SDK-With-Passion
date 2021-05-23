/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

@protocol OS_dispatch_queue;

@interface __NSCFDummyQueue : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)dealloc;
- (void)addOperationWithBlock:(CDUnknownBlockType)arg1;
- (int)maxConcurrentOperationCount;
- (id)initWithDispatchQueue:(id)arg1;

@end
