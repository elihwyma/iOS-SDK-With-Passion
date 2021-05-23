/*
 Image: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
 */

#import <Foundation/NSObject.h>

@interface FMScheduler : NSObject

+ (id)mainThreadScheduler;
+ (id)globalAsyncScheduler;
+ (id)immediateScheduler;
+ (id)serialDispatchQueueSchedulerWithName:(id)arg1;
+ (id)operationQueueSchedulerWithMaxConcurrentOperationCount:(long long)arg1;
+ (id)schedulerWithDispatchQueue:(id)arg1;

@end
