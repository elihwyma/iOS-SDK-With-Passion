/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@protocol AMSMetricsDataSource

- (unsigned short)cancel;
- (unsigned short)willStartBatchingWithLogKey:error: /* Error: Ran out of types for this method. */;
- (unsigned short)removeEvents:error: /* Error: Ran out of types for this method. */;
- (unsigned short)skipEvents:error: /* Error: Ran out of types for this method. */;
- (unsigned short)didFinishBatching;
- (unsigned short)enumerateSortedEventsForTopic:block: /* Error: Ran out of types for this method. */;

@end
