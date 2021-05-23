/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <C2/C2MetricOptions.h>

@interface C2MetricOptions (CKMetricOptionAdditions)

+ (id)metricOptionsForNetworkRequest:(id)arg1;
+ (id)metricOptionsForNetworkOperation:(id)arg1;
+ (id)metricOptionsForEventMetric:(id)arg1 metricType:(long long)arg2 proxy:(id)arg3 config:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;

- (void)_setupC2MetricsEndpointWithContext:(id)arg1;
- (void)_attributeCurrentProxy:(id)arg1 config:(id)arg2;

@end
