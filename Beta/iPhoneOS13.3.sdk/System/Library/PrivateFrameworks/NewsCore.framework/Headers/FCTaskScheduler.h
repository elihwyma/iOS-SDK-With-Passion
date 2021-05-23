/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@interface FCTaskScheduler : NSObject

+ (id)lowPriorityQueue;
+ (id)lowPriorityOperationQueue;
+ (void)scheduleLowPriorityBlock:(CDUnknownBlockType)arg1;
+ (void)scheduleLowPriorityBlockForMainThread:(CDUnknownBlockType)arg1;
+ (void)scheduleLowPriorityOperation:(id)arg1;
+ (void)pushHighPriorityTaskInFlight;
+ (void)popHighPriorityTaskInFlight;
+ (void)scheduleOptionalPrefetchBlock:(CDUnknownBlockType)arg1;
+ (void)executeOptionalPrefetchBlock:(CDUnknownBlockType)arg1;
+ (void)disableOptionalPrefetching;

@end
