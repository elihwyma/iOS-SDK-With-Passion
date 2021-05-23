/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface IMOrderingMetricCollector : NSObject

{
    _Bool _needToSubmitMetric;
    NSObject<OS_dispatch_queue> *_orderingMetricQueue;
    unsigned long long _numberOfMessagesSeen;
    unsigned long long _numberOfMessagesPlacedOutOfOrder;
    unsigned long long _numberOfMessagesPlacedCorrectly;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *orderingMetricQueue;
@property (nonatomic) unsigned long long numberOfMessagesSeen;
@property (nonatomic) unsigned long long numberOfMessagesPlacedOutOfOrder;
@property (nonatomic) unsigned long long numberOfMessagesPlacedCorrectly;
@property (nonatomic) _Bool needToSubmitMetric;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)_submitMetricIfNeeded;
- (_Bool)_metricIncomingMessage:(id)arg1 items:(id)arg2;
- (void)_metricHistoryQueryOrder:(id)arg1;
- (void)_submitMetric;
- (void)metricIncomingMessage:(id)arg1 items:(id)arg2;
- (void)metricHistoryQueryOrder:(id)arg1;
- (void)_persistMetric;

@end
