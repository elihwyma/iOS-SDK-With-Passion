//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IMAVInterface : NSObject
{
    id _delegate;
}

+ (id)sharedInstance;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)updateAVChat:(id)arg1 withCallMetadata:(id)arg2 isFinalUpdate:(BOOL)arg3;
- (long long)_runPingTestForChat:(id)arg1;
- (long long)_checkNetworkForChat:(id)arg1 requiresWifi:(BOOL)arg2;
- (BOOL)_submitEndCallMetric:(id)arg1 forCallID:(long long)arg2;
- (BOOL)_submitLoggingInformation:(id)arg1 forChat:(id)arg2;
- (void)avChat:(id)arg1 setLocalLandscapeAspectRatio:(CGSize)arg2 localPortraitAspectRatio:(CGSize)arg3;
@property(nonatomic) BOOL shouldKeepCameraRunning;
- (void)persistentProperty:(id)arg1 changedTo:(id)arg2 from:(id)arg3;
@property(readonly, nonatomic) id _controller;
@property(readonly, nonatomic) id controller;
- (void)processRemoteIPChanged:(id)arg1 fromParticipant:(id)arg2;
- (void)handleRelayCancel:(id)arg1 fromParticipant:(id)arg2 callInfo:(id)arg3;
- (void)handleRelayUpdate:(id)arg1 fromParticipant:(id)arg2 callInfo:(id)arg3;
- (void)handleRelayInitate:(id)arg1 fromParticipant:(id)arg2 callInfo:(id)arg3;
@property(readonly, nonatomic) BOOL supportsRelay;
@property(nonatomic) unsigned int maxBitrate;
- (void)setRemoteVideoPresentationState:(unsigned int)arg1 forChat:(id)arg2;
- (void)setRemoteVideoPresentationSize:(CGSize)arg1 forChat:(id)arg2;
@property(nonatomic) void localVideoBackLayer;
@property(nonatomic) void localVideoLayer;
@property(readonly, nonatomic) BOOL supportsLayers;
- (id)avChat:(id)arg1 IPAndPortDataWithCallerIP:(id)arg2 callerSIPPort:(unsigned int)arg3 shouldFindExternalIP:(BOOL)arg4;
- (id)avChat:(id)arg1 IPAndPortDataWithCallerIPAndPortData:(id)arg2 shouldFindExternalIP:(BOOL)arg3;
- (id)natTypeForAVChat:(id)arg1;
- (id)getNatIPFromICEData:(id)arg1;
- (BOOL)avChat:(id)arg1 generateCallInfoForID:(id)arg2 service:(id)arg3 usingRelay:(BOOL)arg4 callInfo:(id)arg5;
- (void)avChat:(id)arg1 prepareConnectionWithCallInfo:(id)arg2;
- (void)cancelConferenceForAVChat:(id)arg1;
- (int)avChat:(id)arg1 endConferenceForUserID:(id)arg2;
- (void)endAVConferenceWithChat:(id)arg1 callID:(long long)arg2;
- (int)endConferenceForAVChat:(id)arg1;
- (BOOL)stopPreview;
- (BOOL)startPreviewWithError:(id )arg1;
@property(readonly, nonatomic) NSUInteger capabilities;
@property(readonly, nonatomic) NSUInteger capabilitiesOfCPU;
@property(readonly, nonatomic) NSUInteger capabilitiesOfNetwork;
- (void)avChat:(id)arg1 setValidatedIdentity:(struct __SecIdentity )arg2;
- (void)avChat:(id)arg1 setSendingVideo:(BOOL)arg2;
- (BOOL)isSendingVideoForAVChat:(id)arg1;
- (void)avChat:(id)arg1 setSendingAudio:(BOOL)arg2;
- (BOOL)isSendingAudioForAVChat:(id)arg1;
- (void)avChat:(id)arg1 setRemoteMute:(BOOL)arg2;
- (BOOL)isRemoteMuteForAVChat:(id)arg1;
- (void)avChat:(id)arg1 setPaused:(BOOL)arg2;
- (BOOL)isPausedForAVChat:(id)arg1;
- (void)avChat:(id)arg1 setMute:(BOOL)arg2;
- (BOOL)isMuteForAVChat:(id)arg1;
@property(readonly, nonatomic) BOOL systemSupportsBackFacingCamera;
@property(readonly, nonatomic) BOOL systemSupportsFrontFacingCamera;
@property(readonly, nonatomic) BOOL systemCanAudioChat;
@property(readonly, nonatomic) BOOL systemCanVideoChat;
- (void)unsetDelegate:(id)arg1;
@property(readonly, nonatomic) BOOL isAVInterfaceReady;
- (void)chatRelayedStatusChanged:(id)arg1;
- (void)chatStateUpdated;
@property(readonly, nonatomic) unsigned int overallChatState;
- (void)_notifyAboutPotentialCallForChat:(id)arg1;
- (void)_conferenceEnded:(id)arg1;
- (void)_conferenceWillStart:(id)arg1;
- (void)cleanupAVInterface;
- (void)initAVInterface;
- (void)_avChatDealloc:(id)arg1;
- (void)dealloc;

@end

