/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDProfile, NSDictionary, NSMapTable;

@protocol HDDataCollector;

@interface HDDataCollectorMultiplexer : NSObject

{
    HDProfile *_profile;
    id <HDDataCollector> _collector;
    NSDictionary *_aggregatorsByType;
    NSMapTable *_recordsByAggregator;
}

- (id)diagnosticDescription;
- (id)aggregatorForType:(id)arg1;
- (id)initForCollector:(id)arg1 identifier:(id)arg2 profile:(id)arg3 types:(id)arg4;
- (void)registerForCollectionWithState:(id)arg1;
- (id)mergedConfiguration;
- (id)lastDatumForType:(id)arg1;
- (void)setLastSensorDatum:(id)arg1 forAggregator:(id)arg2;
- (void)setConfiguration:(id)arg1 forAggregator:(id)arg2;
- (id)identifierForAggregator:(id)arg1;

@end
