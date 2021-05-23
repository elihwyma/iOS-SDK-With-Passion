/*
 Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

#import <Foundation/NSObject.h>

@interface IMAVInterface : NSObject

{
    id _delegate;
}

@property (nonatomic, readonly) unsigned int overallChatState;
@property (nonatomic, readonly) _Bool supportsRelay;
@property (weak, nonatomic) id delegate;
@property (nonatomic, readonly) _Bool supportsLayers;
@property (nonatomic, readonly) _Bool isAVInterfaceReady;
@property (nonatomic, readonly) unsigned long long capabilities;
@property (nonatomic, readonly) unsigned long long capabilitiesOfNetwork;
@property (nonatomic, readonly) unsigned long long capabilitiesOfCPU;
@property (nonatomic, readonly) id _controller;
@property (nonatomic) unsigned int maxBitrate;
@property (nonatomic, readonly) id controller;
@property (nonatomic, readonly) _Bool systemCanVideoChat;
@property (nonatomic, readonly) _Bool systemCanAudioChat;
@property (nonatomic, readonly) _Bool systemSupportsFrontFacingCamera;
@property (nonatomic, readonly) _Bool systemSupportsBackFacingCamera;
@property (nonatomic) void *localVideoBackLayer;
@property (nonatomic) void *localVideoLayer;
@property (nonatomic) _Bool shouldKeepCameraRunning;

+ (id)sharedInstance;

- (void)dealloc;
- (_Bool)stopPreview;
- (void)persistentProperty:(id)arg1 changedTo:(id)arg2 from:(id)arg3;
- (void)_notifyAboutPotentialCallForChat:(id)arg1;
- (void)_avChatDealloc:(id)arg1;
- (void)unsetDelegate:(id)arg1;
- (void)chatStateUpdated;
- (void)cancelConferenceForAVChat:(id)arg1;
- (int)endConferenceForAVChat:(id)arg1;
- (void)initAVInterface;
- (void)processRemoteIPChanged:(id)arg1 fromParticipant:(id)arg2;
- (id)natTypeForAVChat:(id)arg1;
- (void)chatRelayedStatusChanged:(id)arg1;
- (void)endAVConferenceWithChat:(id)arg1 callID:(long long)arg2;
- (void)avChat:(id)arg1 prepareConnectionWithCallInfo:(id)arg2;
- (_Bool)avChat:(id)arg1 generateCallInfoForID:(id)arg2 service:(id)arg3 usingRelay:(_Bool)arg4 callInfo:(id)arg5;
- (void)cleanupAVInterface;
- (void)_conferenceWillStart:(id)arg1;
- (void)_conferenceEnded:(id)arg1;
- (_Bool)isMuteForAVChat:(id)arg1;
- (void)avChat:(id)arg1 setMute:(_Bool)arg2;
- (_Bool)isPausedForAVChat:(id)arg1;
- (void)avChat:(id)arg1 setPaused:(_Bool)arg2;
- (_Bool)isRemoteMuteForAVChat:(id)arg1;
- (void)avChat:(id)arg1 setRemoteMute:(_Bool)arg2;
- (_Bool)isSendingAudioForAVChat:(id)arg1;
- (void)avChat:(id)arg1 setSendingAudio:(_Bool)arg2;
- (_Bool)isSendingVideoForAVChat:(id)arg1;
- (void)avChat:(id)arg1 setSendingVideo:(_Bool)arg2;
- (void)avChat:(id)arg1 setValidatedIdentity:(struct __SecIdentity *)arg2;
- (_Bool)startPreviewWithError:(id *)arg1;
- (int)avChat:(id)arg1 endConferenceForUserID:(id)arg2;
- (id)getNatIPFromICEData:(id)arg1;
- (id)avChat:(id)arg1 IPAndPortDataWithCallerIPAndPortData:(id)arg2 shouldFindExternalIP:(_Bool)arg3;
- (id)avChat:(id)arg1 IPAndPortDataWithCallerIP:(id)arg2 callerSIPPort:(unsigned int)arg3 shouldFindExternalIP:(_Bool)arg4;
- (void)setRemoteVideoPresentationSize:(struct CGSize)arg1 forChat:(id)arg2;
- (void)setRemoteVideoPresentationState:(unsigned int)arg1 forChat:(id)arg2;
- (void)handleRelayInitate:(id)arg1 fromParticipant:(id)arg2 callInfo:(id)arg3;
- (void)handleRelayUpdate:(id)arg1 fromParticipant:(id)arg2 callInfo:(id)arg3;
- (void)handleRelayCancel:(id)arg1 fromParticipant:(id)arg2 callInfo:(id)arg3;
- (void)avChat:(id)arg1 setLocalLandscapeAspectRatio:(struct CGSize)arg2 localPortraitAspectRatio:(struct CGSize)arg3;
- (_Bool)_submitLoggingInformation:(id)arg1 forChat:(id)arg2;
- (_Bool)_submitEndCallMetric:(id)arg1 forCallID:(long long)arg2;
- (long long)_checkNetworkForChat:(id)arg1 requiresWifi:(_Bool)arg2;
- (long long)_runPingTestForChat:(id)arg1;
- (void)updateAVChat:(id)arg1 withCallMetadata:(id)arg2 isFinalUpdate:(_Bool)arg3;

@end
