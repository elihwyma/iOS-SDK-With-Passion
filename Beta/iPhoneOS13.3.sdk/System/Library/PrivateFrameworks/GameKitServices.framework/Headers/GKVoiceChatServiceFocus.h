/*
 Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

#import <GameKitServices/GKVoiceChatServicePrivate.h>

@class NSMutableArray, NSString;

@interface GKVoiceChatServiceFocus : GKVoiceChatServicePrivate

{
    NSMutableArray *outgoingCallDictList;
    NSMutableArray *incomingCallDictList;
    long long incomingUID;
    NSString *currentFocus;
    int packetsPerBundle;
    _Bool hasMic;
}

@property (copy, nonatomic) NSString *currentFocus;
@property int packetsPerBundle;
@property _Bool hasMic;

+ (id)defaultVoiceChatService;

- (id)init;
- (void)dealloc;
- (void *)remoteVideoLayer;
- (void)setRemoteVideoLayer:(void *)arg1;
- (void)videoConference:(id)arg1 didStartSession:(_Bool)arg2 withCallID:(unsigned int)arg3 error:(id)arg4;
- (void)videoConference:(id)arg1 didStopWithCallID:(unsigned int)arg2 error:(id)arg3;
- (void)setQualityDelegate:(id)arg1;
- (void)setShouldTimeoutPackets:(_Bool)arg1;
- (void)setChatMode:(int)arg1;
- (void)setIsUsingSuppression:(_Bool)arg1;
- (void)updatedMutedPeers:(id)arg1 forParticipantID:(id)arg2;
- (void)updatedConnectedPeers:(id)arg1;
- (void)setSpeakingDelegate:(id)arg1;
- (void)setTalkingPeersLimit:(unsigned int)arg1;
- (void *)localVideoLayer;
- (void)setLocalVideoLayer:(void *)arg1;
- (_Bool)startVoiceChatWithParticipantID:(id)arg1 error:(id *)arg2;
- (_Bool)acceptCallID:(unsigned int)arg1 error:(id *)arg2;
- (void)denyCallID:(unsigned int)arg1;
- (void)receivedData:(id)arg1 fromParticipantID:(id)arg2;
- (void)setFocus:(_Bool)arg1;
- (void)remoteCancelledProc:(id)arg1;
- (void)stopVoiceChatProc:(id)arg1 participantDidCancel:(_Bool)arg2;
- (id)openOutgoingDictionaryForParticipantID:(id)arg1;
- (id)dictionaryForCallID:(unsigned int)arg1 isIncomingDictonary:(_Bool)arg2;
- (_Bool)processInviteDictionary:(id)arg1 fromParticipantID:(id)arg2;
- (_Bool)processReplyDict:(id)arg1;
- (_Bool)processCancelDict:(id)arg1;
- (_Bool)processFocusDict:(id)arg1 fromParticipantID:(id)arg2;
- (_Bool)processInviteDictionaryForTie:(id)arg1 fromParticipantID:(id)arg2;
- (id)dictionaryForParticipantID:(id)arg1 isIncomingDictonary:(_Bool)arg2;
- (id)dictionaryForNonce:(long long)arg1 participantID:(id)arg2 isIncomingDictonary:(_Bool)arg3;
- (id)incomingDictionaryMatchingOriginalCallID:(unsigned int)arg1 participantID:(id)arg2;
- (_Bool)processFocusChange:(id)arg1 fromParticipantID:(id)arg2;
- (void)remoteCancelled:(id)arg1;
- (void)stopVoiceChatProc:(id)arg1;
- (void)sendFocusChange:(_Bool)arg1;
- (double)localFramerate;
- (double)localBitrate;
- (double)remoteFramerate;
- (double)remoteBitrate;
- (id)localDisplayNameForCallID:(unsigned int)arg1;
- (id)remoteDisplayNameForCallID:(unsigned int)arg1;
- (_Bool)isAudioPausedToParticipantID:(id)arg1;
- (void)pauseAudio:(_Bool)arg1 toParticipantID:(id)arg2;

@end
