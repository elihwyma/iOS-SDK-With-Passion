/*
 Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

#import <Foundation/NSObject.h>

@interface PFDispatchQueue : NSObject

+ (void)initialize;
+ (id)mainQueue;
+ (id)newSerialQueueWithLabel:(id)arg1 qos:(unsigned int)arg2;
+ (id)newSerialQueueWithLabel:(id)arg1;
+ (id)newConcurrentQueueWithLabel:(id)arg1;
+ (id)newConcurrentQueueWithLabel:(id)arg1 qos:(unsigned int)arg2;
+ (Class)concreteQueueClass;
+ (id)_newQueueWithLabel:(id)arg1 qos:(unsigned int)arg2 targetQueue:(id)arg3;
+ (id)newQueueWithLabel:(id)arg1;
+ (id)newQueueWithLabel:(id)arg1 qos:(unsigned int)arg2;
+ (id)injectedExtensions;
+ (id)newQueueWithLabel:(id)arg1 qos:(unsigned int)arg2 targetQueue:(id)arg3 extensions:(id)arg4;
+ (id)newSerialQueueWithLabel:(id)arg1 qos:(unsigned int)arg2 targetQueue:(id)arg3 extensions:(id)arg4;
+ (id)newConcurrentQueueWithLabel:(id)arg1 qos:(unsigned int)arg2 targetQueue:(id)arg3 extensions:(id)arg4;
+ (id)newQueueWithLabel:(id)arg1 concurrencyLimit:(unsigned long long)arg2;
+ (id)newQueueWithLabel:(id)arg1 concurrencyLimit:(unsigned long long)arg2 qos:(unsigned int)arg3;
+ (id)globalUserInteractiveQOSQueue;
+ (id)globalUserInitiatedQOSQueue;
+ (id)globalDefaultQOSQueue;
+ (id)globalUtilityQOSQueue;
+ (id)globalBackgroundQOSQueue;
+ (id)globalQOSQueue:(unsigned int)arg1;
+ (id)globalCurrentQOSQueue;
+ (void)dispatchApply:(unsigned long long)arg1 ofBlock:(CDUnknownBlockType)arg2;
+ (void)dispatchApply:(unsigned long long)arg1 withConcurrencyLimit:(unsigned long long)arg2 canceler:(id)arg3 ofBlock:(CDUnknownBlockType)arg4;

- (id)_init;
- (void)dispatchAsyncWithQOS:(unsigned int)arg1 block:(CDUnknownBlockType)arg2;
- (void)dispatchBarrierAsyncWithQOS:(unsigned int)arg1 block:(CDUnknownBlockType)arg2;
- (void)dispatchAsyncWithCurrentQOS:(CDUnknownBlockType)arg1;
- (void)dispatchBarrierAsyncWithCurrentQOS:(CDUnknownBlockType)arg1;

@end
