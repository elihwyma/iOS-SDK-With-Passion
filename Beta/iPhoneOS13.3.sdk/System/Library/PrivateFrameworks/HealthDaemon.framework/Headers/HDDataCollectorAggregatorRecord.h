/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDDataAggregator, HDDataCollectorConfiguration, NSString;

@protocol HDCollectedSensorDatum;

@interface HDDataCollectorAggregatorRecord : NSObject

{
    _Bool _hasSetLastSensorDatum;
    HDDataAggregator *_aggregator;
    NSString *_identifier;
    HDDataCollectorConfiguration *_configuration;
    id <HDCollectedSensorDatum> _lastSensorDatum;
}

@property (nonatomic, readonly) HDDataAggregator *aggregator;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (retain, nonatomic) HDDataCollectorConfiguration *configuration;
@property (copy, nonatomic) id <HDCollectedSensorDatum> lastSensorDatum;
@property (nonatomic, readonly) _Bool hasSetLastSensorDatum;

- (id)description;
- (id)initWithAggregator:(id)arg1 identifier:(id)arg2;

@end
