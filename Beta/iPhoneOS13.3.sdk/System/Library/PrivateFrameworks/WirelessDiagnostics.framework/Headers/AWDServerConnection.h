/*
 Image: /System/Library/PrivateFrameworks/WirelessDiagnostics.framework/WirelessDiagnostics
 */

#import <Foundation/NSObject.h>

@interface AWDServerConnection : NSObject

{
    struct AWDServerConnection *fServerConnection;
}

- (void)dealloc;
- (_Bool)registerQueriableMetric:(unsigned int)arg1 callback:(CDUnknownBlockType)arg2;
- (id)initWithComponentId:(unsigned int)arg1;
- (id)initWithComponentId:(unsigned int)arg1 andBlockOnConfiguration:(_Bool)arg2;
- (id)newMetricContainerWithIdentifier:(unsigned int)arg1;
- (_Bool)submitMetric:(id)arg1;
- (_Bool)registerQueriableMetricCallback:(CDUnknownBlockType)arg1 forIdentifier:(unsigned int)arg2;
- (_Bool)registerConfigChangeCallback:(CDUnknownBlockType)arg1;
- (id)getComponentConfigurationParameters;
- (void)registerComponentParametersChangeCallback:(CDUnknownBlockType)arg1;
- (unsigned long long)getAWDTimestamp;
- (void)flushToQueue:(struct dispatch_queue_s *)arg1 block:(CDUnknownBlockType)arg2;

@end
