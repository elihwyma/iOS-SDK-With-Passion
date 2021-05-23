/*
 Image: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AWDMultipeerSessionPeerConnectivityInfo : PBCodable

{
    unsigned long long _timeAll;
    unsigned long long _timeDTLS;
    unsigned long long _timeICE;
    unsigned long long _timeOSPF;
    unsigned long long _timestamp;
    int _channelPriority;
    unsigned int _interfaceType;
    NSString *_sessionID;
    _Bool _authentication;
    _Bool _encryption;
    _Bool _remoteAuthentication;
    struct {
        unsigned int timeAll:1;
        unsigned int timeDTLS:1;
        unsigned int timeICE:1;
        unsigned int timeOSPF:1;
        unsigned int timestamp:1;
        unsigned int channelPriority:1;
        unsigned int interfaceType:1;
        unsigned int authentication:1;
        unsigned int encryption:1;
        unsigned int remoteAuthentication:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, readonly) _Bool hasSessionID;
@property (retain, nonatomic) NSString *sessionID;
@property (nonatomic) _Bool hasInterfaceType;
@property (nonatomic) unsigned int interfaceType;
@property (nonatomic) _Bool hasTimeICE;
@property (nonatomic) unsigned long long timeICE;
@property (nonatomic) _Bool hasTimeDTLS;
@property (nonatomic) unsigned long long timeDTLS;
@property (nonatomic) _Bool hasTimeOSPF;
@property (nonatomic) unsigned long long timeOSPF;
@property (nonatomic) _Bool hasTimeAll;
@property (nonatomic) unsigned long long timeAll;
@property (nonatomic) _Bool hasChannelPriority;
@property (nonatomic) int channelPriority;
@property (nonatomic) _Bool hasAuthentication;
@property (nonatomic) _Bool authentication;
@property (nonatomic) _Bool hasRemoteAuthentication;
@property (nonatomic) _Bool remoteAuthentication;
@property (nonatomic) _Bool hasEncryption;
@property (nonatomic) _Bool encryption;

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

@end
