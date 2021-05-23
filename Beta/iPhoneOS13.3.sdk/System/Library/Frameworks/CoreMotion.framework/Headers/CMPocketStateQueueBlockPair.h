/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface CMPocketStateQueueBlockPair : NSObject

{
    NSObject<OS_dispatch_queue> *fQueryQueue;
    CDUnknownBlockType fQueryBlock;
}

- (void)dealloc;
- (id)initWithQueue:(id)arg1 andBlock:(CDUnknownBlockType)arg2;
- (void)dispatchWithState:(long long)arg1 andError:(id)arg2;

@end
