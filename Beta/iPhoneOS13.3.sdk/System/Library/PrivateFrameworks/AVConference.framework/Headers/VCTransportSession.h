/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class TimingCollection, VCConnectionManager;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCTransportSession : NSObject

{
    _Bool _isCallActive;
    _Bool _requiresWiFi;
    _Bool _useCompressedConnectionData;
    _Bool _didRegisterForBasebandNotifications;
    unsigned int _basebandNotificationRegistrationToken;
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSObject *_connectionSetupPiggybackBlob;
    struct opaqueRTCReporting *_reportingAgent;
    TimingCollection *_perfTimings;
    VCConnectionManager *_connectionManager;
    CDUnknownBlockType _eventHandler;
}

@property (nonatomic, readonly) int detailedErrorCode;
@property (nonatomic, readonly) _Bool isHandoverSupported;
@property (nonatomic, readonly) _Bool isRemoteOSPreLion;
@property (nonatomic) _Bool requiresWiFi;
@property (nonatomic) _Bool useCompressedConnectionData;
@property (nonatomic, readonly) unsigned int connectionSetupRTTEstimate;
@property (retain, nonatomic) NSObject *connectionSetupPiggybackBlob;
@property (retain, nonatomic) TimingCollection *perfTimings;
@property (nonatomic, readonly) VCConnectionManager *connectionManager;
@property (copy, nonatomic) CDUnknownBlockType eventHandler;
@property (nonatomic, readonly) unsigned int basebandNotificationRegistrationToken;
@property (nonatomic, setter=setCallActive:) _Bool isCallActive;

- (void)dealloc;
- (void)stop;
- (void)start;
- (id)initWithNotificationQueue:(id)arg1 reportingAgent:(struct opaqueRTCReporting *)arg2;
- (void)callEventHandlerWithEvent:(unsigned int)arg1 info:(id)arg2;
- (int)updateBasebandForConnection:(id)arg1;
- (_Bool)getConnectionSetupData:(id *)arg1 withOptions:(id)arg2 error:(id *)arg3;
- (int)getSignalStrengthBars:(int *)arg1 displayBars:(int *)arg2 maxDisplayBars:(int *)arg3;
- (int)flushBasebandQueueForConnection:(id)arg1 payloadInfoList:(id)arg2;
- (int)updateQualityIndicator:(int)arg1 isIPv6:(_Bool)arg2;
- (int)registerBasebandNotificationsForConnection:(id)arg1;
- (void)deregisterBasebandNotifications;
- (void)reportNetworkConditionsDegraded;
- (void)handleMediaReceivedOverPeerToPeerLinkWithConnectionId:(int)arg1;
- (void)handleMediaReceivedOverRelayLinkWithConnectionId:(int)arg1;
- (int)flushBasebandQueueWithPayloads:(id)arg1 flushCount:(unsigned int *)arg2;
- (void)cleanupBaseband;

@end
