/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface KCellularLteComponentCarrierInfo : PBCodable

{
    unsigned long long _timestamp;
    NSMutableArray *_carrierInfos;
    int _pccBandwidth;
    unsigned int _pccEarfcn;
    unsigned int _pccRfBand;
    int _scc0Bandwidth;
    unsigned int _scc0Earfcn;
    unsigned int _scc0RfBand;
    int _scc1Bandwidth;
    unsigned int _scc1Earfcn;
    unsigned int _scc1RfBand;
    unsigned int _subsId;
    struct {
        unsigned int timestamp:1;
        unsigned int pccBandwidth:1;
        unsigned int pccEarfcn:1;
        unsigned int pccRfBand:1;
        unsigned int scc0Bandwidth:1;
        unsigned int scc0Earfcn:1;
        unsigned int scc0RfBand:1;
        unsigned int scc1Bandwidth:1;
        unsigned int scc1Earfcn:1;
        unsigned int scc1RfBand:1;
        unsigned int subsId:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasPccEarfcn;
@property (nonatomic) unsigned int pccEarfcn;
@property (nonatomic) _Bool hasScc0Earfcn;
@property (nonatomic) unsigned int scc0Earfcn;
@property (nonatomic) _Bool hasScc1Earfcn;
@property (nonatomic) unsigned int scc1Earfcn;
@property (nonatomic) _Bool hasPccBandwidth;
@property (nonatomic) int pccBandwidth;
@property (nonatomic) _Bool hasScc0Bandwidth;
@property (nonatomic) int scc0Bandwidth;
@property (nonatomic) _Bool hasScc1Bandwidth;
@property (nonatomic) int scc1Bandwidth;
@property (nonatomic) _Bool hasPccRfBand;
@property (nonatomic) unsigned int pccRfBand;
@property (nonatomic) _Bool hasScc0RfBand;
@property (nonatomic) unsigned int scc0RfBand;
@property (nonatomic) _Bool hasScc1RfBand;
@property (nonatomic) unsigned int scc1RfBand;
@property (retain, nonatomic) NSMutableArray *carrierInfos;
@property (nonatomic) _Bool hasSubsId;
@property (nonatomic) unsigned int subsId;

+ (Class)carrierInfoType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addCarrierInfo:(id)arg1;
- (unsigned long long)carrierInfosCount;
- (void)clearCarrierInfos;
- (id)carrierInfoAtIndex:(unsigned long long)arg1;
- (id)pccBandwidthAsString:(int)arg1;
- (int)StringAsPccBandwidth:(id)arg1;
- (id)scc0BandwidthAsString:(int)arg1;
- (int)StringAsScc0Bandwidth:(id)arg1;
- (id)scc1BandwidthAsString:(int)arg1;
- (int)StringAsScc1Bandwidth:(id)arg1;

@end
