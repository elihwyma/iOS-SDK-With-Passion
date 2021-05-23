/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@interface NTPBNetworkSession : PBCodable

{
    unsigned long long _sessionID;
    int _cellularRadioAccessTechnology;
    _Bool _wifiReachable;
    struct {
        unsigned int sessionID:1;
        unsigned int cellularRadioAccessTechnology:1;
        unsigned int wifiReachable:1;
    } _has;
}

@property (nonatomic) _Bool hasSessionID;
@property (nonatomic) unsigned long long sessionID;
@property (nonatomic) _Bool hasWifiReachable;
@property (nonatomic) _Bool wifiReachable;
@property (nonatomic) _Bool hasCellularRadioAccessTechnology;
@property (nonatomic) int cellularRadioAccessTechnology;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
