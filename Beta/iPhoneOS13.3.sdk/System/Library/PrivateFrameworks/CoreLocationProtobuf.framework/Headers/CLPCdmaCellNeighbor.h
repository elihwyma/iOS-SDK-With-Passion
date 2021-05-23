/*
 Image: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
 */

#import <PBCodable.h>

@interface CLPCdmaCellNeighbor : PBCodable

{
    int _channel;
    int _ecn0;
    int _pilotPhase;
    int _pnoffset;
    int _rscp;
    struct {
        unsigned int channel:1;
        unsigned int ecn0:1;
        unsigned int pilotPhase:1;
        unsigned int pnoffset:1;
        unsigned int rscp:1;
    } _has;
}

@property (nonatomic) _Bool hasPnoffset;
@property (nonatomic) int pnoffset;
@property (nonatomic) _Bool hasPilotPhase;
@property (nonatomic) int pilotPhase;
@property (nonatomic) _Bool hasEcn0;
@property (nonatomic) int ecn0;
@property (nonatomic) _Bool hasRscp;
@property (nonatomic) int rscp;
@property (nonatomic) _Bool hasChannel;
@property (nonatomic) int channel;

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
