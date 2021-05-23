/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableOrderedSet, NSMutableSet, NSSet, NSString, VCMediaNegotiatorAudioConfiguration, VCVideoRuleCollections;

__attribute__((visibility("hidden")))
@interface VCMediaNegotiatorLocalConfiguration : NSObject

{
    unsigned int _videoSSRC;
    VCMediaNegotiatorAudioConfiguration *_audioConfiguration;
    VCVideoRuleCollections *_videoRuleCollections;
    VCVideoRuleCollections *_screenRuleCollections;
    NSDictionary *_videoFeatureStrings;
    _Bool _allowRTCPFB;
    _Bool _isCaller;
    NSString *_basebandCodec;
    unsigned int _basebandCodecSampleRate;
    NSMutableSet *_bandwidthConfigurations;
    NSSet *_captionsReceiverLanguages;
    NSSet *_captionsSenderLanguages;
    unsigned long long _creationTime;
    NSMutableOrderedSet *_multiwayAudioStreams;
    NSMutableOrderedSet *_multiwayVideoStreams;
    NSSet *_momentsVideoCodecs;
    NSSet *_momentsImageTypes;
    unsigned char _mediaControlInfoVersion;
    _Bool _SIPDisabled;
    _Bool _secureMessagingRequired;
    unsigned int _faceTimeSwitches;
    int _preferredAudioCodec;
    int _deviceRole;
    void *_callLogFile;
    unsigned int _tilesPerVideoFrame;
    _Bool _alwaysOnAudRedEnabled;
    _Bool _alwaysOnAudioRedundancyEnabled;
    _Bool _highFecEnabled;
    _Bool _lowFpsVideoEnabled;
    _Bool _vplrFecEnabled;
    _Bool _rampDownBWDropEnabled;
    _Bool _fastMediaDuplicationEnabled;
    _Bool _iRATRtpEnabled;
    _Bool _preWarmCellEnabled;
    _Bool _duplicateImportantPktsEnabled;
    unsigned int _customVideoWidth;
    unsigned int _customVideoHeight;
}

@property (nonatomic) unsigned int videoSSRC;
@property (retain, nonatomic) VCMediaNegotiatorAudioConfiguration *audioConfiguration;
@property (retain, nonatomic) VCVideoRuleCollections *videoRuleCollections;
@property (retain, nonatomic) VCVideoRuleCollections *screenRuleCollections;
@property (nonatomic) int preferredAudioCodec;
@property (nonatomic) int deviceRole;
@property (retain, nonatomic) NSDictionary *videoFeatureStrings;
@property (nonatomic) _Bool allowRTCPFB;
@property (nonatomic) _Bool isCaller;
@property (retain, nonatomic) NSString *basebandCodec;
@property (nonatomic) unsigned int basebandCodecSampleRate;
@property (retain, nonatomic) NSSet *bandwidthConfigurations;
@property (retain, nonatomic) NSSet *captionsSenderLanguages;
@property (retain, nonatomic) NSSet *captionsReceiverLanguages;
@property (nonatomic) void *callLogFile;
@property (nonatomic) unsigned long long creationTime;
@property (nonatomic) unsigned char mediaControlInfoVersion;
@property (retain, nonatomic) NSMutableOrderedSet *multiwayAudioStreams;
@property (retain, nonatomic) NSMutableOrderedSet *multiwayVideoStreams;
@property (retain, nonatomic) NSSet *momentsVideoCodecs;
@property (retain, nonatomic) NSSet *momentsImageTypes;
@property (nonatomic) _Bool SIPDisabled;
@property (nonatomic) _Bool secureMessagingRequired;
@property (nonatomic) unsigned int faceTimeSwitches;
@property (nonatomic) unsigned int customVideoWidth;
@property (nonatomic) unsigned int customVideoHeight;
@property (nonatomic) _Bool alwaysOnAudRedEnabled;
@property (nonatomic) _Bool alwaysOnAudioRedundancyEnabled;
@property (nonatomic) _Bool highFecEnabled;
@property (nonatomic) _Bool lowFpsVideoEnabled;
@property (nonatomic) _Bool vplrFecEnabled;
@property (nonatomic) _Bool rampDownBWDropEnabled;
@property (nonatomic) _Bool fastMediaDuplicationEnabled;
@property (nonatomic) _Bool iRATRtpEnabled;
@property (nonatomic) _Bool preWarmCellEnabled;
@property (nonatomic) _Bool duplicateImportantPktsEnabled;
@property (nonatomic) unsigned int tilesPerVideoFrame;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)setupBandwidthConfigurationsWithArbiter:(id)arg1;
- (_Bool)setupBandwidthExtensionConfiguration:(id)arg1;
- (_Bool)isEqualBandwidthConfigurations:(id)arg1;
- (_Bool)isEqualMultiwayAudioStreamSet:(id)arg1;
- (_Bool)isEqualMultiwayVideoStreamSet:(id)arg1;
- (_Bool)isEqualFeatureStrings:(id)arg1;
- (_Bool)isEqualMomentsImageTypes:(id)arg1;
- (_Bool)isEqualMomentsVideoCodecs:(id)arg1;
- (_Bool)isEqualFaceTimeSettings:(id)arg1;
- (id)initWithBitrateArbiter:(id)arg1;
- (void)addBandwidthConfiguration:(id)arg1;
- (void)addMultiwayAudioStream:(id)arg1;
- (void)addMultiwayVideoStream:(id)arg1;

@end
