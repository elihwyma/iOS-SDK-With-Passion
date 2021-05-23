/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, VCMediaNegotiatorAudioResults, VCMediaNegotiatorCaptionsResults, VCMediaNegotiatorFaceTimeSettingsResults, VCMediaNegotiatorLocalConfiguration, VCMediaNegotiatorMomentsResults, VCMediaNegotiatorResults, VCMediaNegotiatorVideoResults;

__attribute__((visibility("hidden")))
@interface VCMediaNegotiator : NSObject

{
    _Bool _usePreNegotiation;
    _Bool _negotiationDone;
    _Bool _isCellular16x9Capable;
    VCMediaNegotiatorLocalConfiguration *_localSettings;
    VCMediaNegotiatorResults *_negotiatedSettings;
    VCMediaNegotiatorAudioResults *_negotiatedAudioSettings;
    VCMediaNegotiatorVideoResults *_negotiatedVideoSettings;
    VCMediaNegotiatorVideoResults *_negotiatedScreenSettings;
    VCMediaNegotiatorCaptionsResults *_negotiatedCaptionsSettings;
    VCMediaNegotiatorMomentsResults *_negotiatedMomentsSettings;
    VCMediaNegotiatorFaceTimeSettingsResults *_negotiatedFaceTimeSettings;
    NSMutableArray *_negotiatedMultiwayAudioStreams;
    NSMutableArray *_negotiatedMultiwayVideoStreams;
    long long _negotiationMode;
}

@property (nonatomic, readonly) long long negotiationMode;
@property (nonatomic, readonly) _Bool isCaller;
@property (nonatomic, readonly) _Bool usePreNegotiation;
@property (nonatomic, readonly) VCMediaNegotiatorLocalConfiguration *localSettings;
@property (nonatomic, readonly) VCMediaNegotiatorResults *negotiatedSettings;
@property (nonatomic, readonly) VCMediaNegotiatorAudioResults *negotiatedAudioSettings;
@property (nonatomic, readonly) VCMediaNegotiatorVideoResults *negotiatedVideoSettings;
@property (nonatomic, readonly) VCMediaNegotiatorVideoResults *negotiatedScreenSettings;
@property (nonatomic, readonly) VCMediaNegotiatorCaptionsResults *negotiatedCaptionsSettings;
@property (nonatomic, readonly) VCMediaNegotiatorMomentsResults *negotiatedMomentsSettings;
@property (nonatomic, readonly) VCMediaNegotiatorFaceTimeSettingsResults *negotiatedFaceTimeSettings;
@property (nonatomic, readonly) NSArray *negotiatedMultiwayAudioStreams;
@property (nonatomic, readonly) NSArray *negotiatedMultiwayVideoStreams;

+ (id)localConfigurationWithData:(id)arg1 deviceRole:(int)arg2 preferredAudioPayload:(int)arg3;
+ (_Bool)validateLocalConfiguration:(id)arg1;
+ (id)newCompressedBlob:(id)arg1;
+ (void)dumpBlob:(id)arg1 prefix:(id)arg2 force:(_Bool)arg3;
+ (id)newDecompressedBlob:(id)arg1;
+ (id)negotiationBlobFromData:(id)arg1;
+ (_Bool)validateMultiwayVideoStreamConfigurations:(id)arg1;
+ (_Bool)validateMultiwayAudioStreamConfigurations:(id)arg1;
+ (int)imageTypeBlobSettingsFromSet:(id)arg1;
+ (int)videoCodecBlobSettingsFromSet:(id)arg1;

- (void)dealloc;
- (_Bool)supportsHEIFEncoding;
- (_Bool)supportsHEVCEncoding;
- (id)initWithLocalSettings:(id)arg1;
- (_Bool)processInviteBlob:(id)arg1;
- (_Bool)processResponseBlob:(id)arg1;
- (id)newInviteBlob;
- (id)newResponseBlob;
- (unsigned int)remoteMaxBandwidthForOperatingMode:(int)arg1 connectionType:(int)arg2;
- (id)negotiatedFeaturesStringWithLocalFeaturesString:(id)arg1 remoteFeaturesString:(id)arg2;
- (_Bool)isCellular16x9EncodeCapable;
- (_Bool)setupBandwidthSettingsForMediaBlob:(id)arg1;
- (void)setupCaptionsForMediaBlob:(id)arg1;
- (void)setupMomentsForMediaBlob:(id)arg1;
- (void)setupFaceTimeSettingsForMediaBlob:(id)arg1 isResponse:(_Bool)arg2;
- (void)setupMultiwayAudioStreamsForMediaBlob:(id)arg1;
- (void)setupMultiwayVideoStreamsForMediaBlob:(id)arg1;
- (void)saveRemoteBandwidthSettingsWithMediaBlob:(id)arg1;
- (_Bool)negotiateFaceTimeSettings:(id)arg1;
- (_Bool)negotiateAudioSettings:(id)arg1;
- (_Bool)negotiateVideoSettings:(id)arg1;
- (_Bool)negotiateScreenSettings:(id)arg1;
- (_Bool)negotiateCaptionsWithCaptionsSettings:(id)arg1;
- (_Bool)negotiateMomentsWithMomentsSettings:(id)arg1;
- (_Bool)negotiateMultiwayAudioStreams:(id)arg1;
- (_Bool)negotiateMultiwayVideoStreams:(id)arg1;
- (_Bool)setupAudioWithNegotiatedSettings:(id)arg1;
- (_Bool)setupVideoWithNegotiatedSettings:(id)arg1;
- (_Bool)setupScreenWithNegotiatedSettings:(id)arg1;
- (_Bool)addBandwidthSettingsForMediaBlob:(id)arg1 operatingMode:(int)arg2 connectionType:(int)arg3 maxBitrate:(unsigned int)arg4;
- (void)negotiateAudioUseSBR:(id)arg1;
- (void)negotiateAudioAllowRecording:(id)arg1;
- (_Bool)negotiateAudioPrimaryPayload:(id)arg1;
- (_Bool)negotiateAudioDTXPayload:(id)arg1;
- (_Bool)negotiateAudioREDPayload:(id)arg1;
- (void)negotiateAudioSecondaryPayloads:(id)arg1;
- (id)negotiateVideoMaxResolutionWithEncodeRules:(id)arg1 decodeRules:(id)arg2 isEncoder:(_Bool)arg3;
- (id)selectVideoFeatureString:(id)arg1 selectedPayload:(int)arg2;
- (_Bool)processParameterSets:(id)arg1 videoResults:(id)arg2;
- (void)negotiateRTCPFB:(id)arg1;
- (id)getPreferredVideoPayloadList:(id)arg1;
- (_Bool)canEncodeVideo:(id)arg1;
- (_Bool)canDecodeVideo:(id)arg1;
- (_Bool)selectBestVideoRuleForTransport:(unsigned char)arg1 payload:(int)arg2 encodingType:(unsigned char)arg3 localVideoRuleCollection:(id)arg4 remoteVideoSettings:(id)arg5 negotiatedVideoSettings:(id)arg6 isScreen:(_Bool)arg7;
- (void)negotiateTilesPerFrame:(id)arg1;
- (id)getPreferredScreenPayloadList;
- (_Bool)selectBestScreenRule:(id)arg1 preferredPayloadOrder:(id)arg2;
- (_Bool)isVideoStreamSupported:(int)arg1;
- (id)localeWithMediaBlobLanguage:(int)arg1;
- (id)initWithMode:(long long)arg1 localSettings:(id)arg2;
- (int)mediaBlobLanguageWithLocale:(id)arg1;

@end
