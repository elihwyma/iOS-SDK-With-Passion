/*
 Image: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
 */

#import <Foundation/NSObject.h>

@class TAInterVisitMetricPerDevice;

@interface TASingleVisitDetectionMetrics : NSObject

{
    TAInterVisitMetricPerDevice *_interVisitMetrics;
    unsigned long long _loiType;
}

@property (nonatomic, readonly) TAInterVisitMetricPerDevice *interVisitMetrics;
@property (nonatomic, readonly) unsigned long long loiType;

- (id)initWithInterVisitMetrics:(id)arg1 loiType:(unsigned long long)arg2;

@end
