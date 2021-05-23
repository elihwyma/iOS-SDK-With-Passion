/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSData, NSDictionary, NSMutableDictionary, NSString, VCMediaStreamMultiwayConfig, VCNetworkAddress;

__attribute__((visibility("hidden")))
@interface VCMediaStreamConfig : NSObject

{
    long long _direction;
    VCNetworkAddress *_localAddress;
    NSString *_cName;
    unsigned int _localSSRC;
    VCNetworkAddress *_remoteAddress;
    unsigned int _remoteSSRC;
    unsigned long long _recommendedMTU;
    NSData *_sendMasterKey;
    NSMutableDictionary *_txPayloadMap;
    NSData *_receiveMasterKey;
    NSMutableDictionary *_rxPayloadMap;
    long long _SRTPCipherSuite;
    _Bool _rtpTimeOutEnabled;
    double _rtpTimeOutInterval;
    _Bool _decryptionTimeOutEnabled;
    double _decryptionTimeOutInterval;
    unsigned int _cellularUniqueTag;
    _Bool _rtcpEnabled;
    double _rtcpSendInterval;
    long long _SRTCPCipherSuite;
    _Bool _rtcpTimeOutEnabled;
    double _rtcpTimeOutInterval;
    _Bool _rtcpReceiveCallbackEnabled;
    unsigned short _rtcpRemotePort;
    _Bool _rateAdaptationEnabled;
    VCMediaStreamMultiwayConfig *_multiwayConfig;
}

@property (nonatomic) long long direction;
@property (retain, nonatomic) VCNetworkAddress *localAddress;
@property (copy, nonatomic) NSString *cName;
@property (retain, nonatomic) VCNetworkAddress *remoteAddress;
@property (nonatomic) unsigned int remoteSSRC;
@property (nonatomic) unsigned int localSSRC;
@property (nonatomic) unsigned long long recommendedMTU;
@property (retain, nonatomic) NSData *sendMasterKey;
@property (retain, nonatomic) NSData *receiveMasterKey;
@property (nonatomic, readonly) NSDictionary *txPayloadMap;
@property (nonatomic, readonly) NSDictionary *rxPayloadMap;
@property (nonatomic) long long SRTPCipherSuite;
@property (nonatomic, getter=isRTPTimeOutEnabled) _Bool rtpTimeOutEnabled;
@property (nonatomic) double rtpTimeOutInterval;
@property (nonatomic, getter=isDecryptionTimeOutEnabled) _Bool decryptionTimeOutEnabled;
@property (nonatomic) double decryptionTimeOutInterval;
@property (nonatomic) unsigned int cellularUniqueTag;
@property (nonatomic) long long SRTCPCipherSuite;
@property (nonatomic, getter=isRTCPEnabled) _Bool rtcpEnabled;
@property (nonatomic, getter=isRTCPTimeOutEnabled) _Bool rtcpTimeOutEnabled;
@property (nonatomic) double rtcpTimeOutInterval;
@property (nonatomic) double rtcpSendInterval;
@property (nonatomic, getter=isRTCPReceiveCallbackEnabled) _Bool rtcpReceiveCallbackEnabled;
@property (nonatomic) unsigned short rtcpRemotePort;
@property (nonatomic, readonly) long long primaryTxCodecType;
@property (nonatomic, getter=isRateAdaptationEnabled) _Bool rateAdaptationEnabled;
@property (retain, nonatomic) VCMediaStreamMultiwayConfig *multiwayConfig;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)initWithClientDictionary:(id)arg1;
- (void)addTxPayloadType:(int)arg1 networkPayload:(unsigned int)arg2;
- (void)addRxPayloadType:(int)arg1 networkPayload:(unsigned int)arg2;
- (void)setupMediaStreamConfig;
- (void)applyMediaStreamClientDictionary:(id)arg1;
- (void)addRxPayloadType:(int)arg1;
- (void)addTxPayloadType:(int)arg1;

@end
