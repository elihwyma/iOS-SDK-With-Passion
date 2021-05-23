/*
 Image: /System/Library/PrivateFrameworks/iAdServices.framework/iAdServices
 */

#import <Foundation/NSObject.h>

@interface ADSerialWorkQueue : NSObject

+ (void)initialize;
+ (void)addOperation:(CDUnknownBlockType)arg1;
+ (void)addDelayedOperation:(double)arg1 block:(CDUnknownBlockType)arg2;
+ (unsigned long long)addCancellableDelayedOperation:(double)arg1 block:(CDUnknownBlockType)arg2;
+ (void)cancelDelayedOperation:(unsigned long long)arg1;
+ (void)releaseCancellableOperation:(unsigned long long)arg1;
+ (id)primaryQueue;

@end
