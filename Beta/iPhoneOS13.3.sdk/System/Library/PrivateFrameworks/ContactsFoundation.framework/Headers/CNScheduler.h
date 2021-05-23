/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@interface CNScheduler : NSObject

+ (id)mainThreadScheduler;
+ (id)globalAsyncScheduler;
+ (id)immediateScheduler;
+ (id)synchronousSerialDispatchQueueWithName:(id)arg1;
+ (id)inlineScheduler;
+ (id)offMainThreadScheduler;
+ (id)offMainThreadSchedulerWithBackgroundScheduler:(id)arg1;
+ (id)serialDispatchQueueSchedulerWithName:(id)arg1;
+ (id)operationQueueSchedulerWithMaxConcurrentOperationCount:(long long)arg1;

@end
