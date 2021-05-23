/*
 Image: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_queue;

@interface _BSServiceDispatchingQueueImpl : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithQueue:(id)arg1;
- (void)performAsync:(CDUnknownBlockType)arg1;
- (void)assertOnQueue;
- (id)backingQueueIfExists;
- (void)performAsync:(CDUnknownBlockType)arg1 withHandoff:(id)arg2;

@end
