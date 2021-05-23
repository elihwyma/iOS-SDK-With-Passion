/*
 Image: /System/Library/PrivateFrameworks/MetricKitServices.framework/MetricKitServices
 */

#import <Foundation/NSObject.h>

@interface MXService : NSObject

{
    _Bool _isStarted;
    long long _sourceID;
}

@property (readonly) _Bool isStarted;
@property (readonly) long long sourceID;

- (id)init;
- (_Bool)startService;
- (_Bool)stopService;
- (_Bool)metricsAvailableForDate:(id)arg1;
- (id)getMetricsForClient:(id)arg1 dateString:(id)arg2;
- (id)initWithSourceID:(long long)arg1;

@end
