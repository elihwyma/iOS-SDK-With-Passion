//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol GKVoiceChatClient;

@interface GKVoiceChatService : NSObject
{
    id _voiceChatService;
}

+ (BOOL)isVoIPAllowed;
+ (id)defaultVoiceChatService;
+ (void)initialize;
@property(readonly) float inputMeterLevel;
@property(readonly) float outputMeterLevel;
@property(nonatomic, getter=isInputMeteringEnabled) BOOL inputMeteringEnabled;
@property(nonatomic, getter=isOutputMeteringEnabled) BOOL outputMeteringEnabled;
@property(nonatomic) float remoteParticipantVolume;
@property(nonatomic, getter=isMicrophoneMuted) BOOL microphoneMuted;
- (void)receivedData:(id)arg1 fromParticipantID:(id)arg2;
- (void)receivedRealTimeData:(id)arg1 fromParticipantID:(id)arg2;
- (void)denyCallID:(long long)arg1;
- (BOOL)acceptCallID:(long long)arg1 error:(id )arg2;
- (void)stopVoiceChatWithParticipantID:(id)arg1;
- (BOOL)startVoiceChatWithParticipantID:(id)arg1 error:(id )arg2;
@property id <GKVoiceChatClient> client;
- (void)dealloc;

@end

