/*
 Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

#import <Foundation/NSObject.h>

@class GKInterfaceListener, GKRWLock, GKSessionInternal, GKVoiceChatServiceFocus, NSArray, NSMutableArray, NSMutableDictionary, NSString, VoiceChatSessionRoster;

@protocol GKVoiceChatSessionDelegate, OS_dispatch_queue;

@interface GKVoiceChatSessionInternal : NSObject

{
    NSString *_sessionName;
    unsigned int _conferenceID;
    _Bool activeSession;
    float sessionVolume;
    _Bool focusCallbacks;
    GKSessionInternal *_gkSession;
    NSString *_peerID;
    NSMutableArray *_connectedPeers;
    NSMutableArray *_connectedVoicePeers;
    NSMutableArray *_connectedFocusPeers;
    NSMutableArray *_mutedPeers;
    NSMutableArray *_myPausedList;
    NSMutableDictionary *_peerChannelQuality;
    _Bool needsRecalculateGoodChannels;
    int goodChannels;
    unsigned int talkingPeersLimit;
    _Bool isUsingSuppression;
    unsigned int _sessionState;
    GKRWLock *_rwLock;
    GKVoiceChatServiceFocus *_vcService;
    VoiceChatSessionRoster *_roster;
    NSObject<OS_dispatch_queue> *_sendQueue;
    id <GKVoiceChatSessionDelegate> delegate;
    unsigned int congestionState;
    id _publicWrapper;
    GKInterfaceListener *_wifiListener;
    _Bool _currentWifiState;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property id <GKVoiceChatSessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *sessionName;
@property (nonatomic, readonly) unsigned int conferenceID;
@property (readonly) NSArray *peerList;
@property (getter=isActiveSession) _Bool activeSession;
@property float sessionVolume;
@property unsigned int talkingPeersLimit;
@property _Bool isUsingSuppression;

+ (void)brokenHash:(id)arg1 response:(char *)arg2;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (void)cleanup;
- (id)participantID;
- (void)stopSession;
- (void)startSession;
- (void)interfaceStateDidChangeWithWifiUp:(_Bool)arg1 cellUp:(_Bool)arg2;
- (void)networkStateDidChange;
- (void)lossRate:(float)arg1 forParticipantID:(id)arg2;
- (void)didStartSpeaking:(id)arg1;
- (void)didStopSpeaking:(id)arg1;
- (void)updatedConnectedPeers:(id)arg1;
- (void)cleanupProc:(id)arg1;
- (unsigned int)peerCount;
- (void)session:(id)arg1 peer:(id)arg2 didChangeState:(unsigned int)arg3;
- (void)setMute:(_Bool)arg1 forPeer:(id)arg2;
- (void)voiceChatService:(id)arg1 sendData:(id)arg2 toParticipantID:(id)arg3;
- (void)informClientVoiceChatDidStart:(id)arg1;
- (void)informClientVoiceChatDidStop:(id)arg1;
- (void)voiceChatService:(id)arg1 didReceiveInvitationFromParticipantID:(id)arg2 callID:(unsigned int)arg3;
- (void)voiceChatService:(id)arg1 didStartWithParticipantID:(id)arg2;
- (void)voiceChatService:(id)arg1 didNotStartWithParticipantID:(id)arg2 error:(id)arg3;
- (void)voiceChatService:(id)arg1 didStopWithParticipantID:(id)arg2 error:(id)arg3;
- (id)initWithGKSession:(id)arg1 publicWrapper:(id)arg2 sessionName:(id)arg3;
- (_Bool)getMuteStateForPeer:(id)arg1;
- (void)startSessionInternal;
- (void)stopSessionInternal;
- (void)calculateConferenceID;
- (id)encodePeerID:(id)arg1;
- (void)updatedMutedPeers:(id)arg1 forPeer:(id)arg2;
- (void)sendMutedPeers;
- (void)updatedSubscribedBeaconList:(id)arg1;
- (void)sendConnectedPeers;
- (void)informClientVoiceChatConnecting:(id)arg1;
- (void)handlePeerDisconnected:(id)arg1;
- (void)unPauseAll;
- (void)updatedFocusPeers:(id)arg1;
- (void)informClientVoiceChatFocusChange:(id)arg1;
- (void)addPeerToFocusPausedList:(id)arg1;
- (int)goodChannels;
- (id)decodePeerID:(id)arg1;
- (void)updatedFocusID:(unsigned int)arg1;
- (void)parseMutedPeers:(id)arg1 forPeer:(id)arg2;
- (void)pauseAll;
- (void)pruneBadLinks;
- (void)removeFromFocusPausedList:(id)arg1;
- (void)parseConnectedPeers:(id)arg1;
- (void)session:(id)arg1 didReceiveAudioPacket:(id)arg2 fromPeerID:(id)arg3;
- (void)session:(id)arg1 didReceiveOOBAudioPacket:(id)arg2 fromPeerID:(id)arg3;
- (void)informClientVoiceChatCouldNotConnect:(id)arg1;
- (void)informClientVoiceChatSpeaking:(id)arg1;
- (void)informClientVoiceChatSilent:(id)arg1;
- (int)calculateChannelQualities;

@end
