/*
 Image: /System/Library/Frameworks/Network.framework/Network
 */

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface NWAWDLibnetcoreConnectionDataUsageSnapshot : PBCodable

{
    unsigned long long _bytesIn;
    unsigned long long _bytesOut;
    unsigned long long _multipathBytesInCell;
    unsigned long long _multipathBytesInInitial;
    unsigned long long _multipathBytesInWiFi;
    unsigned long long _multipathBytesOutCell;
    unsigned long long _multipathBytesOutInitial;
    unsigned long long _multipathBytesOutWiFi;
    struct {
        unsigned int bytesIn:1;
        unsigned int bytesOut:1;
        unsigned int multipathBytesInCell:1;
        unsigned int multipathBytesInInitial:1;
        unsigned int multipathBytesInWiFi:1;
        unsigned int multipathBytesOutCell:1;
        unsigned int multipathBytesOutInitial:1;
        unsigned int multipathBytesOutWiFi:1;
    } _has;
}

@property (nonatomic) _Bool hasBytesIn;
@property (nonatomic) unsigned long long bytesIn;
@property (nonatomic) _Bool hasBytesOut;
@property (nonatomic) unsigned long long bytesOut;
@property (nonatomic) _Bool hasMultipathBytesInCell;
@property (nonatomic) unsigned long long multipathBytesInCell;
@property (nonatomic) _Bool hasMultipathBytesOutCell;
@property (nonatomic) unsigned long long multipathBytesOutCell;
@property (nonatomic) _Bool hasMultipathBytesInWiFi;
@property (nonatomic) unsigned long long multipathBytesInWiFi;
@property (nonatomic) _Bool hasMultipathBytesOutWiFi;
@property (nonatomic) unsigned long long multipathBytesOutWiFi;
@property (nonatomic) _Bool hasMultipathBytesInInitial;
@property (nonatomic) unsigned long long multipathBytesInInitial;
@property (nonatomic) _Bool hasMultipathBytesOutInitial;
@property (nonatomic) unsigned long long multipathBytesOutInitial;

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
