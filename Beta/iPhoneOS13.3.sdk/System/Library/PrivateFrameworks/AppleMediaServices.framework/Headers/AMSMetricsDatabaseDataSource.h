/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class AMSMetricsDatabase, NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AMSMetricsDatabaseDataSource : NSObject

{
    AMSMetricsDatabase *_database;
    NSString *_containerIdentifier;
    NSString *_currentLockKey;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic, readonly) AMSMetricsDatabase *database;
@property (retain, nonatomic) NSString *currentLockKey;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) NSString *containerIdentifier;
@property (nonatomic, readonly) long long eventCount;

- (void)dealloc;
- (void)cancel;
- (id)initWithContainerIdentifier:(id)arg1;
- (void)willStartBatchingWithLogKey:(id)arg1 error:(id *)arg2;
- (void)removeEvents:(id)arg1 error:(id *)arg2;
- (void)skipEvents:(id)arg1 error:(id *)arg2;
- (void)didFinishBatching;
- (void)enumerateSortedEventsForTopic:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)removeAllEvents;
- (id)enqueueEvents:(id)arg1;

@end
