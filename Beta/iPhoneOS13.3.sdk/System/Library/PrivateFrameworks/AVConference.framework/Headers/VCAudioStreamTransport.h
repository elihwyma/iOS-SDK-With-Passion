/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <AVConference/VCMediaStreamTransport.h>

@class WRMClient;

__attribute__((visibility("hidden")))
@interface VCAudioStreamTransport : VCMediaStreamTransport

{
    WRMClient *_wrmClient;
    struct _VCAudioStreamTransportRealtimeContext _realtimeContext;
}

@property (nonatomic, readonly) void *realtimeContext;

- (void)dealloc;
- (void)onStart;
- (void)setWRMCallId:(unsigned int)arg1;
- (id)initWithDelegate:(id)arg1 handle:(struct tagHANDLE *)arg2 callId:(unsigned int)arg3 localSSRC:(unsigned int)arg4 enableNetworkMonitor:(_Bool)arg5;
- (void)setPreWarmState:(_Bool)arg1;
- (void)setWRMMetricConfig:(CDStruct_69d7cc99 *)arg1;
- (void)setWRMNotification:(CDStruct_0693755d *)arg1;
- (void)reportWRMMetrics:(const CDStruct_dea828ac *)arg1;
- (void)onStop;
- (void)onRTCPPacket:(struct tagRTCPPACKET *)arg1 arrivalNTPTime:(union tagNTP)arg2;
- (void)startWRM;
- (void)stopWRM;
- (id)initWithDelegate:(id)arg1 handle:(struct tagHANDLE *)arg2 callId:(unsigned int)arg3 localSSRC:(unsigned int)arg4;

@end
