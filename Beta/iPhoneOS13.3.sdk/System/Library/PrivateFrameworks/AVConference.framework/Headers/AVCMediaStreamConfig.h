/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class AVCAudioStreamConfig, AVCNetworkAddress, AVCTextStreamConfig, AVCVideoStreamConfig, NSData, NSString;

@interface AVCMediaStreamConfig : NSObject

{
    AVCNetworkAddress *_localAddress;
    AVCNetworkAddress *_remoteAddress;
    long long _direction;
    unsigned long long _txPayloadType;
    unsigned long long _rxPayloadType;
    unsigned int _localSSRC;
    unsigned int _remoteSSRC;
    NSString *_cName;
    _Bool _rateAdaptationEnabled;
    _Bool _rtcpEnabled;
    _Bool _rtcpXREnabled;
    unsigned short _rtcpRemotePort;
    double _rtcpSendInterval;
    _Bool _rtpTimeOutEnabled;
    _Bool _rtcpTimeOutEnabled;
    double _rtpTimeOutInterval;
    double _rtcpTimeOutInterval;
    unsigned long long _recommendedMTU;
    NSData *_sendMasterKey;
    NSData *_receiveMasterKey;
    long long _SRTPCipherSuite;
    long long _SRTCPCipherSuite;
    AVCAudioStreamConfig *_audio;
    AVCVideoStreamConfig *_video;
    AVCTextStreamConfig *_text;
}

@property (retain, nonatomic) AVCNetworkAddress *localAddress;
@property (retain, nonatomic) AVCNetworkAddress *remoteAddress;
@property (copy, nonatomic) NSString *cName;
@property (nonatomic) long long direction;
@property (nonatomic) unsigned long long txPayloadType;
@property (nonatomic) unsigned long long rxPayloadType;
@property (nonatomic) unsigned int localSSRC;
@property (nonatomic) unsigned int remoteSSRC;
@property (nonatomic, getter=isRateAdaptationEnabled) _Bool rateAdaptationEnabled;
@property (nonatomic, getter=isRTCPEnabled) _Bool rtcpEnabled;
@property (nonatomic, getter=isRTCPXREnabled) _Bool rtcpXREnabled;
@property (nonatomic) unsigned short rtcpRemotePort;
@property (nonatomic) double rtcpSendInterval;
@property (nonatomic, getter=isRTPTimeOutEnabled) _Bool rtpTimeOutEnabled;
@property (nonatomic, getter=isRTCPTimeOutEnabled) _Bool rtcpTimeOutEnabled;
@property (nonatomic) double rtpTimeOutInterval;
@property (nonatomic) double rtcpTimeOutInterval;
@property (nonatomic) unsigned long long recommendedMTU;
@property (retain, nonatomic) NSData *sendMasterKey;
@property (retain, nonatomic) NSData *receiveMasterKey;
@property (nonatomic) long long SRTPCipherSuite;
@property (nonatomic) long long SRTCPCipherSuite;
@property (retain, nonatomic) AVCAudioStreamConfig *audio;
@property (retain, nonatomic) AVCVideoStreamConfig *video;
@property (retain, nonatomic) AVCTextStreamConfig *text;

+ (long long)streamDirectionWithClientDirection:(long long)arg1;
+ (long long)clientStreamDirectionWithDirection:(long long)arg1;
+ (long long)clientCipherSuiteWithCipherSuite:(long long)arg1;
+ (id)dictionaryForCommonStreamConfig:(id)arg1;
+ (long long)cipherSuiteWithClientCipherSuite:(long long)arg1;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)dictionary;
- (_Bool)isValidAudioConfig;
- (_Bool)isValidTextConfig;
- (void)setUpWithDictionary:(id)arg1;
- (_Bool)isValidVideoConfig;
- (_Bool)isAudioCodecValid;

@end
