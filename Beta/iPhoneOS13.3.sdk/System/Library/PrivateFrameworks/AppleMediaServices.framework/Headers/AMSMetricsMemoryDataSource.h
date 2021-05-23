/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface AMSMetricsMemoryDataSource : NSObject

{
    NSMutableArray *_sortedEvents;
}

@property (retain, nonatomic) NSMutableArray *sortedEvents;

- (void)cancel;
- (id)initWithEvents:(id)arg1;
- (void)willStartBatchingWithLogKey:(id)arg1 error:(id *)arg2;
- (void)removeEvents:(id)arg1 error:(id *)arg2;
- (void)skipEvents:(id)arg1 error:(id *)arg2;
- (void)didFinishBatching;
- (void)enumerateSortedEventsForTopic:(id)arg1 block:(CDUnknownBlockType)arg2;

@end
