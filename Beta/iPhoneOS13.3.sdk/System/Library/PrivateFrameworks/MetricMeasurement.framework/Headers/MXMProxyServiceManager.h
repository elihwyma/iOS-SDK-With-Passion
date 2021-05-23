/*
 Image: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

@protocol MetricMeasurementHelperProtocol_Internal;

@interface MXMProxyServiceManager : NSObject

{
    NSXPCConnection *__serviceConnection;
}

@property (readonly) id <MetricMeasurementHelperProtocol_Internal> _proxyObject;
@property (readonly) NSXPCConnection *_serviceConnection;

+ (id)shared;

- (void)dealloc;
- (id)initInternal;
- (_Bool)wake;
- (id)_sampleWithProxyMetric:(id)arg1 timeout:(double)arg2 stopReason:(unsigned long long *)arg3;

@end
