/*
 Image: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
 */

#import <Foundation/NSObject.h>

@class NSString, TAInterVisitMetricPerDevice;

@interface TAMetricsInterVisit : NSObject

{
    TAInterVisitMetricPerDevice *_currentInterVisitMetric;
    TAInterVisitMetricPerDevice *_totalInterVisitMetric;
}

@property (nonatomic, readonly) TAInterVisitMetricPerDevice *currentInterVisitMetric;
@property (nonatomic, readonly) TAInterVisitMetricPerDevice *totalInterVisitMetric;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)descriptionDictionary;
- (unsigned long long)getMetricsCollectionType;

@end
