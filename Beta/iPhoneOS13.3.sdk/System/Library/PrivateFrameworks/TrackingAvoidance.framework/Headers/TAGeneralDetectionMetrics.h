/*
 Image: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
 */

#import <Foundation/NSObject.h>

@class TAInterVisitMetricPerDevice;

@interface TAGeneralDetectionMetrics : NSObject

{
    _Bool _geoNavHint;
    _Bool _vehicularStateHint;
    TAInterVisitMetricPerDevice *_interVisitMetrics;
    unsigned long long _dominantUserActivity;
    long long _pdState;
}

@property (nonatomic, readonly) TAInterVisitMetricPerDevice *interVisitMetrics;
@property (nonatomic, readonly) unsigned long long dominantUserActivity;
@property (nonatomic, readonly) long long pdState;
@property (nonatomic, readonly) _Bool geoNavHint;
@property (nonatomic, readonly) _Bool vehicularStateHint;

- (id)initWithInterVisitMetrics:(id)arg1 dominantUserActivity:(unsigned long long)arg2 pdState:(long long)arg3 geoNavHint:(_Bool)arg4 vehicularStateHint:(_Bool)arg5;

@end
