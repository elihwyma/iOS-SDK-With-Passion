/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <TelephonyUtilities/TUCall.h>

#import <TelephonyUtilities/Swift-Protocol.h>

@class NSData, NSDictionary, NSMutableDictionary, NSSet, NSString, NSUUID, TUCallDisplayContext, TUCallProvider, TUHandle;

@protocol TUCallServicesProxyCallActions, TURemoteVideoClient;

@interface TUProxyCall : TUCall <Swift>

{
    _Bool _hostedOnCurrentDevice;
    _Bool _outgoing;
    _Bool _voicemail;
    _Bool _isVideo;
    _Bool _thirdPartyVideo;
    _Bool _isSendingAudio;
    _Bool _isSendingVideo;
    _Bool _mediaStalled;
    _Bool _videoDegraded;
    _Bool _videoPaused;
    _Bool _videoMirrored;
    _Bool _blocked;
    _Bool _emergency;
    _Bool _sos;
    _Bool _usingBaseband;
    _Bool _supportsTTYWithVoice;
    _Bool _needsManualInCallSounds;
    _Bool _uplinkMuted;
    _Bool _downlinkMuted;
    _Bool _requiresRemoteVideo;
    _Bool _prefersExclusiveAccessToCellularNetwork;
    _Bool _remoteUplinkMuted;
    _Bool _shouldSuppressInCallUI;
    _Bool _mutuallyExclusiveCall;
    _Bool _wantsStagingArea;
    int _callStatus;
    int _ttyType;
    int _callRelaySupport;
    float _localMeterLevel;
    float _remoteMeterLevel;
    NSString *_callUUID;
    TUHandle *_handle;
    NSString *_isoCountryCode;
    TUCallProvider *_backingProvider;
    TUCallProvider *_displayProvider;
    NSString *_callerNameFromNetwork;
    long long _cameraType;
    long long _remoteCameraOrientation;
    NSString *_audioCategory;
    NSString *_audioMode;
    NSDictionary *_endedReasonUserInfo;
    NSString *_endedReasonString;
    NSString *_endedErrorString;
    NSData *_localFrequency;
    NSData *_remoteFrequency;
    long long _videoStreamToken;
    long long _inputAudioPowerSpectrumToken;
    long long _outputAudioPowerSpectrumToken;
    long long _remoteScreenOrientation;
    NSUUID *_callGroupUUID;
    NSDictionary *_providerContext;
    TUCallDisplayContext *_displayContext;
    NSSet *_remoteParticipantHandles;
    NSUUID *_localSenderIdentityUUID;
    NSUUID *_localSenderIdentityAccountUUID;
    id <TUCallServicesProxyCallActions> _proxyCallActionsDelegate;
    id <TURemoteVideoClient> _localVideo;
    id <TURemoteVideoClient> _remoteVideo;
    NSMutableDictionary *_remoteVideoModeToLayer;
    NSMutableDictionary *_localVideoModeToLayer;
    struct CGSize _remoteAspectRatio;
    struct CGSize _remoteScreenPortraitAspectRatio;
    struct CGSize _remoteScreenLandscapeAspectRatio;
    struct CGRect _remoteVideoContentRect;
}

@property (retain, nonatomic) id <TURemoteVideoClient> localVideo;
@property (retain, nonatomic) id <TURemoteVideoClient> remoteVideo;
@property (retain, nonatomic) NSMutableDictionary *remoteVideoModeToLayer;
@property (retain, nonatomic) NSMutableDictionary *localVideoModeToLayer;
@property (nonatomic) struct CGSize remoteScreenPortraitAspectRatio;
@property (nonatomic) struct CGSize remoteScreenLandscapeAspectRatio;
@property (nonatomic) long long remoteScreenOrientation;
@property (nonatomic) struct CGSize remoteAspectRatio;
@property (nonatomic) struct CGRect remoteVideoContentRect;
@property (nonatomic) long long cameraType;
@property (nonatomic) long long remoteCameraOrientation;
@property (weak, nonatomic) id <TUCallServicesProxyCallActions> proxyCallActionsDelegate;
@property (retain, nonatomic) TUHandle *handle;
@property (copy, nonatomic) NSString *isoCountryCode;
@property (copy, nonatomic) NSString *callUUID;
@property (nonatomic) int callStatus;
@property (nonatomic, getter=isHostedOnCurrentDevice) _Bool hostedOnCurrentDevice;
@property (retain, nonatomic) TUCallProvider *backingProvider;
@property (retain, nonatomic) TUCallProvider *displayProvider;
@property (nonatomic, getter=isOutgoing) _Bool outgoing;
@property (nonatomic, getter=isVoicemail) _Bool voicemail;
@property (copy, nonatomic) NSString *callerNameFromNetwork;
@property (nonatomic) _Bool isVideo;
@property (nonatomic, getter=isBlocked) _Bool blocked;
@property (nonatomic, getter=isEmergency) _Bool emergency;
@property (nonatomic, getter=isSOS, setter=setSOS:) _Bool sos;
@property (nonatomic, getter=isUsingBaseband) _Bool usingBaseband;
@property (nonatomic) int ttyType;
@property (nonatomic) _Bool supportsTTYWithVoice;
@property (copy, nonatomic) NSString *audioCategory;
@property (copy, nonatomic) NSString *audioMode;
@property (nonatomic) _Bool needsManualInCallSounds;
@property (copy, nonatomic) NSDictionary *endedReasonUserInfo;
@property (copy, nonatomic) NSString *endedErrorString;
@property (copy, nonatomic) NSString *endedReasonString;
@property (retain, nonatomic) NSData *localFrequency;
@property (retain, nonatomic) NSData *remoteFrequency;
@property (nonatomic) float remoteMeterLevel;
@property (nonatomic) float localMeterLevel;
@property (copy, nonatomic) NSUUID *callGroupUUID;
@property (nonatomic) int callRelaySupport;
@property (nonatomic, getter=isMediaStalled) _Bool mediaStalled;
@property (nonatomic, getter=isVideoDegraded) _Bool videoDegraded;
@property (nonatomic, getter=isVideoPaused) _Bool videoPaused;
@property (nonatomic, getter=isVideoMirrored) _Bool videoMirrored;
@property (nonatomic) _Bool isSendingAudio;
@property (nonatomic, getter=isThirdPartyVideo) _Bool thirdPartyVideo;
@property (nonatomic) long long videoStreamToken;
@property (nonatomic) long long inputAudioPowerSpectrumToken;
@property (nonatomic) long long outputAudioPowerSpectrumToken;
@property (retain, nonatomic) NSDictionary *providerContext;
@property (copy, nonatomic) TUCallDisplayContext *displayContext;
@property (copy, nonatomic) NSSet *remoteParticipantHandles;
@property (nonatomic) _Bool prefersExclusiveAccessToCellularNetwork;
@property (nonatomic, getter=isRemoteUplinkMuted) _Bool remoteUplinkMuted;
@property (copy, nonatomic) NSUUID *localSenderIdentityUUID;
@property (copy, nonatomic) NSUUID *localSenderIdentityAccountUUID;
@property (nonatomic) _Bool shouldSuppressInCallUI;
@property (nonatomic, getter=isMutuallyExclusiveCall) _Bool mutuallyExclusiveCall;
@property (nonatomic) _Bool wantsStagingArea;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)proxyCallWithCall:(id)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isUplinkMuted;
- (_Bool)isDownlinkMuted;
- (void)setUplinkMuted:(_Bool)arg1;
- (void)setDownlinkMuted:(_Bool)arg1;
- (void)setWantsHoldMusic:(_Bool)arg1;
- (void)updateWithCall:(id)arg1;
- (void)setCallDisconnectedDueToComponentCrash;
- (void)setEndpointOnCurrentDevice:(_Bool)arg1;
- (void)setIsSendingVideo:(_Bool)arg1;
- (_Bool)isSendingVideo;
- (struct CGSize)remoteScreenAspectRatio;
- (id)initWithUniqueProxyIdentifier:(id)arg1 endpointOnCurrentDevice:(_Bool)arg2;
- (void)_updateVideoCallAttributes:(id)arg1;
- (void)_updateVideoStreamToken:(long long)arg1;
- (void)disconnectWithReason:(int)arg1;
- (void)answerWithRequest:(id)arg1;
- (void)setDisconnectedReason:(int)arg1;
- (void)updateProxyCallWithDaemon;
- (void)setShouldSuppressRingtone:(_Bool)arg1;
- (void)setTransitionStatus:(int)arg1;
- (int)avcRemoteVideoModeForMode:(long long)arg1;
- (void)_synchronizeRemoteVideo;
- (void)_synchronizeLocalVideo;
- (void)_createLocalVideoIfNecessary;
- (_Bool)requiresRemoteVideo;
- (void)_createRemoteVideoIfNecessary;
- (struct CGSize)localAspectRatioForOrientation:(long long)arg1;
- (long long)_orientationForVideoAttributesOrientation:(int)arg1;
- (long long)_cameraTypeForVideoAttributeCamera:(int)arg1;
- (void)remoteVideoClient:(id)arg1 remoteVideoDidPause:(_Bool)arg2;
- (void)remoteVideoClient:(id)arg1 remoteMediaDidStall:(_Bool)arg2;
- (void)remoteVideoClient:(id)arg1 videoDidDegrade:(_Bool)arg2;
- (void)remoteVideoClient:(id)arg1 remoteScreenAttributesDidChange:(id)arg2;
- (void)remoteVideoClient:(id)arg1 remoteVideoAttributesDidChange:(id)arg2;
- (void)playDTMFToneForKey:(unsigned char)arg1;
- (void)sendHardPauseDigits;
- (void)setRemoteVideoLayer:(id)arg1 forMode:(long long)arg2;
- (void)setLocalVideoLayer:(id)arg1 forMode:(long long)arg2;
- (void)setRequiresRemoteVideo:(_Bool)arg1;
- (void)setRemoteVideoPresentationSize:(struct CGSize)arg1;
- (void)setRemoteVideoPresentationState:(int)arg1;

@end
