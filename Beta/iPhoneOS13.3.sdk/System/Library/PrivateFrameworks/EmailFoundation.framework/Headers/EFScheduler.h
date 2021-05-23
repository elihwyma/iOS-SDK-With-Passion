/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSObject.h>

@interface EFScheduler : NSObject

+ (id)mainThreadScheduler;
+ (id)globalAsyncScheduler;
+ (id)immediateScheduler;
+ (id)serialDispatchQueueSchedulerWithName:(id)arg1;
+ (id)operationQueueSchedulerWithMaxConcurrentOperationCount:(long long)arg1;
+ (id)serialDispatchQueueSchedulerWithName:(id)arg1 qualityOfService:(long long)arg2;
+ (id)globalAsyncSchedulerWithQualityOfService:(long long)arg1;
+ (id)onScheduler:(id)arg1 performWithObject:(id)arg2;
+ (id)dispatchQueueSchedulerWithQueue:(id)arg1;
+ (id)_globalAsyncSchedulerWithQualityOfService:(long long)arg1;

@end
