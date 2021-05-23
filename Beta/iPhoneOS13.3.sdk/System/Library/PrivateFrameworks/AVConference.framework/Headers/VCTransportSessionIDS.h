/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <AVConference/VCTransportSession.h>

@class NSString, VCDatagramChannelIDS, VCIDSSessionInfoSynchronizer;

__attribute__((visibility("hidden")))
@interface VCTransportSessionIDS : VCTransportSession

{
    int _socket;
    NSString *_destination;
    VCDatagramChannelIDS *_datagramChannel;
    _Bool _requireEncryptionInfo;
    VCIDSSessionInfoSynchronizer *_sessionInfoSynchronizer;
    _Bool _isIDSDCEventUsageErrorReported;
    _Bool _isWiFiAssistActive;
}

@property (nonatomic) int socket;
@property (copy, nonatomic) NSString *destination;
@property (nonatomic, readonly) VCIDSSessionInfoSynchronizer *sessionInfoSynchronizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)stop;
- (void)start;
- (void)setWiFiAssist:(_Bool)arg1;
- (id)initWithCallID:(unsigned int)arg1 reportingAgent:(id)arg2;
- (void)primaryConnectionChanged:(id)arg1 oldPrimaryConnection:(id)arg2;
- (void)connectionCallback:(id)arg1 isInitialConnection:(_Bool)arg2;
- (id)initWithCallID:(unsigned int)arg1 requireEncryptionInfo:(_Bool)arg2 reportingAgent:(id)arg3 notificationQueue:(id)arg4 isMultiwaySession:(_Bool)arg5;
- (void)dispatchedProcessDatagramChannelEventInfo:(id)arg1;
- (void)handleLinkConnectedWithInfo:(id)arg1;
- (void)handleLinkDisconnectedWithInfo:(id)arg1;
- (void)handleDefaultLinkUpdatedWithInfo:(id)arg1;
- (void)handlePreConnectionDataReceived:(id)arg1;
- (void)handleRATChanged:(id)arg1;
- (void)handleCellularMTUChanged:(id)arg1;
- (void)handleChannelInfoReport:(id)arg1;
- (void)handleIDSEncryptionInfoEvent:(id)arg1;
- (void)handleIDSMembershipChangeInfoEvent:(id)arg1;
- (void)handleUpdateRemoteSessionInfo:(id)arg1;
- (void)processDatagramChannelEventInfo:(id)arg1;
- (void)setPiggybackBlobPreference;
- (void)setConnectionSetupTime;
- (void)setQuickRelayServerProvider:(int)arg1;
- (void)setDefaultLink:(id)arg1;
- (void)resetParticipantGenerationCounter;
- (void)didEnableDuplication:(_Bool)arg1 activeConnection:(id)arg2;
- (void)discardConnection:(id)arg1;
- (void)updateParticipantGenerationCounter:(unsigned char)arg1;
- (void)optOutAllStreamsForConnection:(id)arg1;
- (void)VCIDSSessionInfoSynchronizer:(void *)arg1 sendVCIDSSessionInfoRequest:(id)arg2;
- (_Bool)getConnectionSetupData:(id *)arg1 withOptions:(id)arg2 error:(id *)arg3;
- (void)setConnectionSetupPiggybackBlob:(id)arg1;
- (id)connectionSetupPiggybackBlob;
- (int)getSignalStrengthBars:(int *)arg1 displayBars:(int *)arg2 maxDisplayBars:(int *)arg3;
- (int)flushBasebandQueueForConnection:(id)arg1 payloadInfoList:(id)arg2;
- (int)updateQualityIndicator:(int)arg1 isIPv6:(_Bool)arg2;
- (int)registerBasebandNotificationsForConnection:(id)arg1;
- (void)deregisterBasebandNotifications;

@end
