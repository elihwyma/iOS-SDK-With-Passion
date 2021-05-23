/*
 Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

#import <IMAVCore/IMAVInterface.h>

@class AVConference, NSLock, NSMutableArray, NSMutableDictionary;

@interface IMAVConferenceInterface : IMAVInterface

{
    NSMutableArray *_avConferencesToCleanup;
    NSMutableDictionary *_avConferences;
    NSLock *_avConferencesLock;
    _Bool _duringInit;
    _Bool _pendingCleanup;
}

@property (nonatomic, readonly) AVConference *controller;

+ (_Bool)_useMultipleAVConference;
+ (void)_postParticipantScreenAttributesChangeNotification:(id)arg1 cameraChanged:(_Bool)arg2 orientationChanged:(_Bool)arg3 aspectChanged:(_Bool)arg4 cameraWillSwitch:(_Bool)arg5 camera:(unsigned int)arg6 orentation:(unsigned int)arg7 aspect:(struct CGSize)arg8;
+ (void)_postParticipantMediaChangeNotification:(id)arg1 cameraChanged:(_Bool)arg2 orientationChanged:(_Bool)arg3 aspectChanged:(_Bool)arg4 contentRectChanged:(_Bool)arg5 cameraWillSwitch:(_Bool)arg6 camera:(unsigned int)arg7 orentation:(unsigned int)arg8 aspect:(struct CGSize)arg9 contentRect:(struct CGRect)arg10;

- (id)init;
- (void)dealloc;
- (id)_controller;
- (unsigned long long)capabilities;
- (_Bool)stopPreview;
- (_Bool)supportsRelay;
- (void)conference:(id)arg1 didStartSession:(_Bool)arg2 withUserInfo:(id)arg3;
- (void)conference:(id)arg1 didStopWithCallID:(long long)arg2 error:(id)arg3;
- (void)conference:(id)arg1 withCallID:(long long)arg2 didPauseAudio:(_Bool)arg3 error:(id)arg4;
- (void)conference:(id)arg1 didStopWithCallID:(long long)arg2 error:(id)arg3 callMetadata:(id)arg4;
- (void)conference:(id)arg1 localIPChange:(id)arg2 withCallID:(long long)arg3;
- (void)conference:(id)arg1 withCallID:(long long)arg2 remoteMediaStalled:(_Bool)arg3;
- (void)conference:(id)arg1 receivedFirstRemoteFrameForCallID:(long long)arg2;
- (void)conference:(id)arg1 remoteVideoAttributesChanged:(id)arg2 callID:(long long)arg3;
- (void)conference:(id)arg1 remoteAudioPaused:(_Bool)arg2 callID:(long long)arg3;
- (void)conference:(id)arg1 remoteVideoPaused:(_Bool)arg2 callID:(long long)arg3;
- (void)conference:(id)arg1 remoteScreenAttributesChanged:(id)arg2 callID:(long long)arg3;
- (void)conference:(id)arg1 updateInputFrequencyLevel:(id)arg2;
- (void)conference:(id)arg1 updateOutputFrequencyLevel:(id)arg2;
- (void)conference:(id)arg1 inititiateRelayRequest:(long long)arg2 requestDict:(id)arg3;
- (void)conference:(id)arg1 sendRelayUpdate:(long long)arg2 updateDict:(id)arg3;
- (void)conference:(id)arg1 cancelRelayRequest:(long long)arg2 requestDict:(id)arg3;
- (void)conference:(id)arg1 videoQualityNotificationForCallID:(long long)arg2 isDegraded:(_Bool)arg3 isRemote:(_Bool)arg4;
- (void)conference:(id)arg1 withCallID:(long long)arg2 networkHint:(_Bool)arg3;
- (void)conference:(id)arg1 didChangeLocalVariablesForCallID:(long long)arg2;
- (void)conference:(id)arg1 reinitializeCallForCallID:(unsigned int)arg2;
- (void)serverDiedForConference:(id)arg1;
- (void)_notifyAboutPotentialCallForChat:(id)arg1;
- (void)_avChatDealloc:(id)arg1;
- (void)chatStateUpdated;
- (void)cancelConferenceForAVChat:(id)arg1;
- (int)endConferenceForAVChat:(id)arg1;
- (_Bool)isAVInterfaceReady;
- (void)initAVInterface;
- (void)processRemoteIPChanged:(id)arg1 fromParticipant:(id)arg2;
- (id)natTypeForAVChat:(id)arg1;
- (void)chatRelayedStatusChanged:(id)arg1;
- (void)endAVConferenceWithChat:(id)arg1 callID:(long long)arg2;
- (void)avChat:(id)arg1 prepareConnectionWithCallInfo:(id)arg2;
- (_Bool)avChat:(id)arg1 generateCallInfoForID:(id)arg2 service:(id)arg3 usingRelay:(_Bool)arg4 callInfo:(id)arg5;
- (void)_conferenceEnded:(id)arg1;
- (_Bool)isMuteForAVChat:(id)arg1;
- (void)avChat:(id)arg1 setMute:(_Bool)arg2;
- (_Bool)isPausedForAVChat:(id)arg1;
- (void)avChat:(id)arg1 setPaused:(_Bool)arg2;
- (_Bool)isSendingAudioForAVChat:(id)arg1;
- (void)avChat:(id)arg1 setSendingAudio:(_Bool)arg2;
- (_Bool)isSendingVideoForAVChat:(id)arg1;
- (void)avChat:(id)arg1 setSendingVideo:(_Bool)arg2;
- (unsigned long long)capabilitiesOfNetwork;
- (unsigned long long)capabilitiesOfCPU;
- (_Bool)startPreviewWithError:(id *)arg1;
- (int)avChat:(id)arg1 endConferenceForUserID:(id)arg2;
- (id)getNatIPFromICEData:(id)arg1;
- (_Bool)supportsLayers;
- (void *)localVideoLayer;
- (void)setLocalVideoLayer:(void *)arg1;
- (void *)localVideoBackLayer;
- (void)setLocalVideoBackLayer:(void *)arg1;
- (void)setRemoteVideoPresentationSize:(struct CGSize)arg1 forChat:(id)arg2;
- (void)setRemoteVideoPresentationState:(unsigned int)arg1 forChat:(id)arg2;
- (void)handleRelayInitate:(id)arg1 fromParticipant:(id)arg2 callInfo:(id)arg3;
- (void)handleRelayUpdate:(id)arg1 fromParticipant:(id)arg2 callInfo:(id)arg3;
- (void)handleRelayCancel:(id)arg1 fromParticipant:(id)arg2 callInfo:(id)arg3;
- (void)avChat:(id)arg1 setLocalLandscapeAspectRatio:(struct CGSize)arg2 localPortraitAspectRatio:(struct CGSize)arg3;
- (_Bool)_submitLoggingInformation:(id)arg1 forChat:(id)arg2;
- (_Bool)_submitEndCallMetric:(id)arg1 forCallID:(long long)arg2;
- (void)updateAVChat:(id)arg1 withCallMetadata:(id)arg2 isFinalUpdate:(_Bool)arg3;
- (id)_existingConferenceForAVChat:(id)arg1;
- (id)_faceTimeUUID;
- (void)_configureAVConference:(id)arg1 forChat:(id)arg2;
- (id)_avChatForConference:(id)arg1 callID:(long long)arg2 errorString:(id)arg3;
- (id)_avChatForConference:(id)arg1;
- (void)_cleanupAVInterface;
- (void)_queueAVConferenceForCleanup:(id)arg1;
- (id)_conferenceForAVChat:(id)arg1;
- (id)_existingConferenceForAVChatGUID:(id)arg1;
- (int)_deviceRoleForAVChat:(id)arg1;
- (_Bool)_hasAVConferenceObjectsForChatsOtherThan:(id)arg1;
- (id)_imAVChatParticipantForConference:(id)arg1 callID:(long long)arg2 errorString:(id)arg3;

@end
