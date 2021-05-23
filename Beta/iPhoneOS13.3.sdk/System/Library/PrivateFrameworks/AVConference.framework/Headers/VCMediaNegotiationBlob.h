/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, VCMediaNegotiationBlobAudioSettings, VCMediaNegotiationBlobCaptionsSettings, VCMediaNegotiationBlobMomentsSettings, VCMediaNegotiationBlobVideoSettings, VCMediaNegotiationFaceTimeSettings;

__attribute__((visibility("hidden")))
@interface VCMediaNegotiationBlob : PBCodable

{
    unsigned long long _ntpTime;
    VCMediaNegotiationBlobAudioSettings *_audioSettings;
    NSMutableArray *_bandwidthSettings;
    NSString *_basebandCodec;
    unsigned int _basebandCodecSampleRate;
    unsigned int _blobVersion;
    VCMediaNegotiationBlobCaptionsSettings *_captionsSettings;
    VCMediaNegotiationFaceTimeSettings *_faceTimeSettings;
    unsigned int _mediaControlInfoVersion;
    VCMediaNegotiationBlobMomentsSettings *_momentsSettings;
    NSMutableArray *_multiwayAudioStreams;
    NSMutableArray *_multiwayVideoStreams;
    VCMediaNegotiationBlobVideoSettings *_screenSettings;
    NSString *_userAgent;
    VCMediaNegotiationBlobVideoSettings *_videoSettings;
    _Bool _allowDynamicMaxBitrate;
    _Bool _allowsContentsChangeWithAspectPreservation;
    struct {
        unsigned int ntpTime:1;
        unsigned int basebandCodecSampleRate:1;
        unsigned int blobVersion:1;
        unsigned int mediaControlInfoVersion:1;
        unsigned int allowDynamicMaxBitrate:1;
        unsigned int allowsContentsChangeWithAspectPreservation:1;
    } _has;
}

@property (nonatomic) _Bool hasAllowDynamicMaxBitrate;
@property (nonatomic) _Bool allowDynamicMaxBitrate;
@property (nonatomic) _Bool hasAllowsContentsChangeWithAspectPreservation;
@property (nonatomic) _Bool allowsContentsChangeWithAspectPreservation;
@property (nonatomic, readonly) _Bool hasAudioSettings;
@property (retain, nonatomic) VCMediaNegotiationBlobAudioSettings *audioSettings;
@property (nonatomic, readonly) _Bool hasVideoSettings;
@property (retain, nonatomic) VCMediaNegotiationBlobVideoSettings *videoSettings;
@property (nonatomic, readonly) _Bool hasScreenSettings;
@property (retain, nonatomic) VCMediaNegotiationBlobVideoSettings *screenSettings;
@property (nonatomic, readonly) _Bool hasUserAgent;
@property (retain, nonatomic) NSString *userAgent;
@property (nonatomic, readonly) _Bool hasBasebandCodec;
@property (retain, nonatomic) NSString *basebandCodec;
@property (nonatomic) _Bool hasBasebandCodecSampleRate;
@property (nonatomic) unsigned int basebandCodecSampleRate;
@property (retain, nonatomic) NSMutableArray *bandwidthSettings;
@property (nonatomic, readonly) _Bool hasCaptionsSettings;
@property (retain, nonatomic) VCMediaNegotiationBlobCaptionsSettings *captionsSettings;
@property (retain, nonatomic) NSMutableArray *multiwayAudioStreams;
@property (nonatomic, readonly) _Bool hasMomentsSettings;
@property (retain, nonatomic) VCMediaNegotiationBlobMomentsSettings *momentsSettings;
@property (nonatomic) _Bool hasNtpTime;
@property (nonatomic) unsigned long long ntpTime;
@property (nonatomic) _Bool hasBlobVersion;
@property (nonatomic) unsigned int blobVersion;
@property (retain, nonatomic) NSMutableArray *multiwayVideoStreams;
@property (nonatomic) _Bool hasMediaControlInfoVersion;
@property (nonatomic) unsigned int mediaControlInfoVersion;
@property (nonatomic, readonly) _Bool hasFaceTimeSettings;
@property (retain, nonatomic) VCMediaNegotiationFaceTimeSettings *faceTimeSettings;

+ (Class)bandwidthSettingsType;
+ (Class)multiwayAudioStreamsType;
+ (Class)multiwayVideoStreamType;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addMultiwayVideoStream:(id)arg1;
- (void)addBandwidthSettings:(id)arg1;
- (void)addMultiwayAudioStreams:(id)arg1;
- (unsigned long long)bandwidthSettingsCount;
- (void)clearBandwidthSettings;
- (id)bandwidthSettingsAtIndex:(unsigned long long)arg1;
- (unsigned long long)multiwayAudioStreamsCount;
- (void)clearMultiwayAudioStreams;
- (id)multiwayAudioStreamsAtIndex:(unsigned long long)arg1;
- (unsigned long long)multiwayVideoStreamsCount;
- (void)clearMultiwayVideoStreams;
- (id)multiwayVideoStreamAtIndex:(unsigned long long)arg1;
- (void)printWithTitle:(id)arg1 blobSize:(unsigned int)arg2 logFile:(void *)arg3;
- (void)printBandwidthSettingsWithLogFile:(void *)arg1;
- (void)printCaptionsSettingsWithLogFile:(void *)arg1;
- (void)printMomentsSettingsWithLogFile:(void *)arg1;
- (void)printMultiwayAudioStreamsWithLogFile:(void *)arg1;
- (void)printMultiwayVideoStreamsWithLogFile:(void *)arg1;

@end
