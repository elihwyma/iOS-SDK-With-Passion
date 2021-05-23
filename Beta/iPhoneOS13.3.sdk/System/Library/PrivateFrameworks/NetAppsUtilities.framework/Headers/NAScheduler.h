/*
 Image: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
 */

#import <Foundation/NSObject.h>

@interface NAScheduler : NSObject

+ (id)mainThreadScheduler;
+ (id)globalAsyncScheduler;
+ (id)immediateScheduler;
+ (id)serialDispatchQueueSchedulerWithName:(id)arg1;
+ (id)operationQueueSchedulerWithMaxConcurrentOperationCount:(unsigned long long)arg1;
+ (id)schedulerWithDispatchQueue:(id)arg1;

@end
