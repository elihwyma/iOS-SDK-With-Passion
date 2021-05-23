/*
 Image: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
 */

#import <Foundation/NSObject.h>

@class NSString, TAGeneralDetectionMetrics, TASingleVisitDetectionMetrics, TAVisitDetectionMetrics;

@interface TAMetricsDetection : NSObject

{
    unsigned long long _detectionType;
    TAGeneralDetectionMetrics *_generalDetectionMetrics;
    TAVisitDetectionMetrics *_visitDetectionMetrics;
    TASingleVisitDetectionMetrics *_singleVisitDetectionMetrics;
}

@property (nonatomic, readonly) unsigned long long detectionType;
@property (nonatomic, readonly) TAGeneralDetectionMetrics *generalDetectionMetrics;
@property (nonatomic, readonly) TAVisitDetectionMetrics *visitDetectionMetrics;
@property (nonatomic, readonly) TASingleVisitDetectionMetrics *singleVisitDetectionMetrics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (unsigned long long)getMetricsCollectionType;
- (id)initWithDetectionType:(unsigned long long)arg1 visitDetectionMetrics:(id)arg2 generalDetectionMetrics:(id)arg3 singleVisitDetectionMetrics:(id)arg4;

@end
