/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@class AWDServerConnection;

@protocol OS_dispatch_queue;

@interface IDSAWDLogging : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    AWDServerConnection *_AWDServerConnection;
}

@property (readonly) AWDServerConnection *AWDServerConnection;

+ (id)sharedInstance;

- (id)init;
- (void)submitMetric:(id)arg1 withIdentifier:(unsigned int)arg2;
- (_Bool)_shouldSubmit;
- (id)_metricContainerForMetricType:(unsigned int)arg1;
- (void)_submitAWDMetric:(id)arg1 withContainer:(id)arg2;
- (void)IDSCoreAnalyticsQuickRelayEventType:(id)arg1 eventSubType:(id)arg2 duration:(id)arg3 resultCode:(id)arg4 providerType:(id)arg5 transportType:(id)arg6 interfaceType:(id)arg7 skeEnabled:(id)arg8 isInitiator:(id)arg9 protocolVersion:(id)arg10 retryCount:(id)arg11 serviceName:(id)arg12 subServiceName:(id)arg13 participantCount:(id)arg14;
- (void)IDSQuickRelayEventType:(id)arg1 eventSubType:(id)arg2 duration:(id)arg3 resultCode:(id)arg4 providerType:(id)arg5 transportType:(id)arg6 interfaceType:(id)arg7 skeEnabled:(id)arg8 isInitiator:(id)arg9 protocolVersion:(id)arg10 retryCount:(id)arg11 serviceName:(id)arg12 subServiceName:(id)arg13 participantCount:(id)arg14;

@end
