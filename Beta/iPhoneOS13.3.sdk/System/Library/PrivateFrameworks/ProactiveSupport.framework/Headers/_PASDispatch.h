/*
 Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

#import <Foundation/NSObject.h>

@interface _PASDispatch : NSObject

+ (unsigned long long)dispatchTimeWithSecondsFromNow:(double)arg1;
+ (void)waitForSemaphore:(id)arg1;
+ (unsigned char)waitForSemaphore:(id)arg1 timeoutSeconds:(double)arg2;
+ (void)waitForSemaphore:(id)arg1 timeoutSeconds:(double)arg2 onAcquire:(CDUnknownBlockType)arg3 onTimeout:(CDUnknownBlockType)arg4;
+ (void)waitForGroup:(id)arg1;
+ (unsigned char)waitForGroup:(id)arg1 timeoutSeconds:(double)arg2;
+ (void)waitForGroup:(id)arg1 timeoutSeconds:(double)arg2 onGroupComplete:(CDUnknownBlockType)arg3 onTimeout:(CDUnknownBlockType)arg4;
+ (void)waitForBlock:(CDUnknownBlockType)arg1;
+ (unsigned char)waitForBlock:(CDUnknownBlockType)arg1 timeoutSeconds:(double)arg2;
+ (void)waitForBlock:(CDUnknownBlockType)arg1 timeoutSeconds:(double)arg2 onBlockComplete:(CDUnknownBlockType)arg3 onTimeout:(CDUnknownBlockType)arg4;
+ (void)runAsyncOnQueue:(id)arg1 afterDelaySeconds:(double)arg2 block:(CDUnknownBlockType)arg3;
+ (void)runSyncOnMainThreadWithBlock:(CDUnknownBlockType)arg1;
+ (id)autoreleasingSerialQueueWithLabel:(const char *)arg1;
+ (id)autoreleasingSerialQueueWithLabel:(const char *)arg1 qosClass:(unsigned int)arg2;

@end
