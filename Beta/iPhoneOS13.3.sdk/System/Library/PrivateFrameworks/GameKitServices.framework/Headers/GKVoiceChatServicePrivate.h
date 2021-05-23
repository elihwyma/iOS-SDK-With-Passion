/*
 Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

#import <Foundation/NSObject.h>

@class GKVoiceChatDictionary, GKVoiceChatService, NSLock, NSRecursiveLock, VideoConference;

@protocol GKVoiceChatClient;

@interface GKVoiceChatServicePrivate : NSObject

{
    id <GKVoiceChatClient> client;
    _Bool outputMeteringEnabled;
    _Bool inputMeteringEnabled;
    _Bool microphoneMuted;
    unsigned int curCallID;
    int state;
    GKVoiceChatDictionary *incomingCallDict;
    GKVoiceChatDictionary *outgoingCallDict;
    struct tagCONNRESULT currentConnResult;
    NSRecursiveLock *stateLock;
    NSLock *clientLock;
    GKVoiceChatService *wrapperService;
    _Bool forceNoICE;
    VideoConference *conf;
    int chatMode;
    _Bool focus;
}

@property int state;
@property int chatMode;
@property GKVoiceChatService *wrapperService;
@property (nonatomic) id client;
@property (getter=isMicrophoneMuted) _Bool microphoneMuted;
@property float remoteParticipantVolume;
@property (getter=isOutputMeteringEnabled) _Bool outputMeteringEnabled;
@property (getter=isInputMeteringEnabled) _Bool inputMeteringEnabled;
@property (nonatomic, readonly) float outputMeterLevel;
@property (nonatomic, readonly) float inputMeterLevel;
@property (getter=isFocus) _Bool focus;
@property (nonatomic) void *localVideoLayer;
@property (nonatomic) void *remoteVideoLayer;
@property (readonly) double localFramerate;
@property (readonly) double localBitrate;
@property (readonly) double remoteFramerate;
@property (readonly) double remoteBitrate;
@property (nonatomic, readonly) long long outputAudioPowerSpectrumToken;

+ (id)defaultVoiceChatService;

- (id)init;
- (void)dealloc;
- (void)cleanup;
- (void)resetState;
- (void)videoConference:(id)arg1 didStartSession:(_Bool)arg2 withCallID:(unsigned int)arg3 error:(id)arg4;
- (void)videoConference:(id)arg1 didStopWithCallID:(unsigned int)arg2 error:(id)arg3;
- (void)forceNoICE:(_Bool)arg1;
- (_Bool)startVoiceChatWithParticipantID:(id)arg1 error:(id *)arg2;
- (void)stopVoiceChatWithParticipantID:(id)arg1;
- (_Bool)acceptCallID:(unsigned int)arg1 error:(id *)arg2;
- (void)denyCallID:(unsigned int)arg1;
- (void)receivedData:(id)arg1 fromParticipantID:(id)arg2;
- (_Bool)getNSError:(id *)arg1 code:(long long)arg2 description:(id)arg3 reason:(id)arg4;
- (id)createInvite:(id *)arg1 toParticipant:(id)arg2 callID:(unsigned int *)arg3;
- (id)createReplyUsingDictionary:(id)arg1 replyCode:(unsigned long long)arg2 error:(id *)arg3;
- (int)startICEConnectionCheck:(id)arg1 isCaller:(_Bool)arg2 withCallID:(unsigned int)arg3;
- (void)informClientVoiceChatDidNotStart:(id)arg1;
- (void)informClientOfInviteFromParticipant:(id)arg1;
- (void)informClientVoiceChatDidStart:(id)arg1;
- (void)informClientVoiceChatDidStop:(id)arg1;
- (void)stopVoiceChatProc:(id)arg1;
- (id)localDisplayNameForCallID:(unsigned int)arg1;
- (id)remoteDisplayNameForCallID:(unsigned int)arg1;
- (int)startICEConnectionCheck:(id)arg1 isCaller:(_Bool)arg2;
- (void)informClientVoiceChatDidStartMainSelector:(id)arg1;
- (void)informClientVoiceChatDidNotStartMainSelector:(id)arg1;
- (_Bool)inviteIsValid:(id)arg1;
- (_Bool)getNSError:(id *)arg1 code:(long long)arg2 description:(id)arg3 hResult:(int)arg4;

@end
