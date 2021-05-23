/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class AVCStatisticsCollector, NSArray, NSMutableArray, VCAudioPayload, VCTransportSession;

__attribute__((visibility("hidden")))
@interface VCAudioTransmitterConfig : NSObject

{
    struct tagHANDLE *_rtpHandle;
    struct tagHANDLE *_rtpVideo;
    struct tagHANDLE *_mediaQueue;
    struct tagHANDLE *_afrcHandle;
    void *_controlInfoGenerator;
    AVCStatisticsCollector *_statisticsCollector;
    NSMutableArray *_audioPayloads;
    VCAudioPayload *_chosenAudioPayload;
    VCAudioPayload *_chosenDTXPayload;
    unsigned char _packetsPerBundle;
    _Bool _useRateControl;
    int _bundlingScheme;
    _Bool _isUseCaseWatchContinuity;
    _Bool _allowAudioSwitching;
    _Bool _supportsAdaptation;
    int _chosenRedPayloadType;
    _Bool _redEnabled;
    _Bool _includeRedSequenceOffset;
    unsigned int _redNumPayloads;
    unsigned int _redMaxDelay20ms;
    _Bool _transmitROC;
    _Bool _needsPacketThread;
    int _operatingMode;
    struct AudioStreamBasicDescription _inputFormat;
    struct opaqueRTCReporting *_reportingAgent;
    int _reportingParentID;
    VCTransportSession *_transportSession;
    _Bool _ignoreSilence;
    unsigned int _maxIDSStreamIdCount;
    NSArray *_streamIDs;
    unsigned int _tierNetworkBitrate;
    NSArray *_supportedNumRedundantPayload;
    _Bool _sendActiveVoiceOnly;
    _Bool _currentDTXEnable;
    unsigned char _mediaControlInfoVersion;
    _Bool _alwaysOnAudioRedundancyEnabled;
    _Bool _cellularAllowRedLowBitratesEnabled;
    _Bool _wifiAllowRedLowBitratesEnabled;
}

@property (nonatomic) struct tagHANDLE *rtpHandle;
@property (nonatomic) struct tagHANDLE *afrcHandle;
@property (nonatomic) struct tagHANDLE *mediaQueue;
@property (nonatomic) struct tagHANDLE *rtpVideo;
@property (nonatomic) void *controlInfoGenerator;
@property (retain, nonatomic) NSMutableArray *audioPayloads;
@property (retain, nonatomic) VCAudioPayload *chosenAudioPayload;
@property (retain, nonatomic) VCAudioPayload *chosenDTXPayload;
@property (nonatomic) unsigned char packetsPerBundle;
@property (nonatomic) _Bool useRateControl;
@property (nonatomic) int bundlingScheme;
@property (nonatomic) _Bool isUseCaseWatchContinuity;
@property (nonatomic) _Bool allowAudioSwitching;
@property (nonatomic) _Bool supportsAdaptation;
@property (nonatomic) _Bool needsPacketThread;
@property (nonatomic) int chosenRedPayloadType;
@property (nonatomic, getter=isRedEnabled) _Bool redEnabled;
@property (nonatomic) _Bool includeRedSequenceOffset;
@property (nonatomic) unsigned int redNumPayloads;
@property (nonatomic) unsigned int redMaxDelay20ms;
@property (nonatomic) _Bool transmitROC;
@property (nonatomic) int operatingMode;
@property (retain, nonatomic) VCTransportSession *transportSession;
@property (nonatomic) struct AudioStreamBasicDescription inputFormat;
@property (nonatomic) struct opaqueRTCReporting *reportingAgent;
@property (nonatomic) int reportingParentID;
@property (retain, nonatomic) AVCStatisticsCollector *statisticsCollector;
@property (nonatomic) _Bool ignoreSilence;
@property (retain, nonatomic) NSArray *streamIDs;
@property (nonatomic) unsigned int tierNetworkBitrate;
@property (nonatomic) unsigned int maxIDSStreamIdCount;
@property (retain, nonatomic) NSArray *supportedNumRedundantPayload;
@property (nonatomic) _Bool sendActiveVoiceOnly;
@property (nonatomic, getter=isCurrentDTXEnabled) _Bool currentDTXEnable;
@property (nonatomic) unsigned char mediaControlInfoVersion;
@property (nonatomic) _Bool alwaysOnAudioRedundancyEnabled;
@property (nonatomic) _Bool cellularAllowRedLowBitratesEnabled;
@property (nonatomic) _Bool wifiAllowRedLowBitratesEnabled;

- (void)dealloc;
- (id)description;

@end
