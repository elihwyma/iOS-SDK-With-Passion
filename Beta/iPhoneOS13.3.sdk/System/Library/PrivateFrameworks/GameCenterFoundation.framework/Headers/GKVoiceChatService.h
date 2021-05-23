/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSObject.h>

@protocol GKVoiceChatClient;

@interface GKVoiceChatService : NSObject

{
    id _voiceChatService;
}

@property id <GKVoiceChatClient> client;
@property (nonatomic, getter=isMicrophoneMuted) _Bool microphoneMuted;
@property (nonatomic) float remoteParticipantVolume;
@property (nonatomic, getter=isOutputMeteringEnabled) _Bool outputMeteringEnabled;
@property (nonatomic, getter=isInputMeteringEnabled) _Bool inputMeteringEnabled;
@property (readonly) float outputMeterLevel;
@property (readonly) float inputMeterLevel;

+ (void)initialize;
+ (id)defaultVoiceChatService;
+ (_Bool)isVoIPAllowed;

- (void)dealloc;
- (void)receivedRealTimeData:(id)arg1 fromParticipantID:(id)arg2;
- (_Bool)startVoiceChatWithParticipantID:(id)arg1 error:(id *)arg2;
- (void)stopVoiceChatWithParticipantID:(id)arg1;
- (_Bool)acceptCallID:(long long)arg1 error:(id *)arg2;
- (void)denyCallID:(long long)arg1;
- (void)receivedData:(id)arg1 fromParticipantID:(id)arg2;

@end
