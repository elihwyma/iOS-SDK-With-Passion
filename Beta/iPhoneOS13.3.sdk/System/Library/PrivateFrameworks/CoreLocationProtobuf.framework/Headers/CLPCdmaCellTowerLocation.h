/*
 Image: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
 */

#import <PBCodable.h>

@class CLPCellNeighborsGroup, CLPLocation, NSMutableArray, NSString;

@interface CLPCdmaCellTowerLocation : PBCodable

{
    struct {
        int *list;
        unsigned long long count;
        unsigned long long size;
    } _derivedMccs;
    double _bsLatitude;
    double _bsLongitude;
    double _sectorLatitude;
    double _sectorLongitude;
    NSString *_appBundleId;
    int _bandclass;
    int _bsid;
    int _celltype;
    int _channel;
    int _dayLightSavings;
    int _ecn0;
    CLPLocation *_location;
    int _ltmOffset;
    int _mcc;
    int _mnc;
    CLPCellNeighborsGroup *_neighborGroup;
    NSMutableArray *_neighbors;
    int _nid;
    NSString *_operatorName;
    int _pnoffset;
    int _rat;
    int _rscp;
    NSString *_sectorid;
    int _serverHash;
    NSString *_serviceProviderName;
    int _sid;
    int _zoneid;
    _Bool _isLimitedService;
    struct {
        unsigned int bsLatitude:1;
        unsigned int bsLongitude:1;
        unsigned int sectorLatitude:1;
        unsigned int sectorLongitude:1;
        unsigned int bandclass:1;
        unsigned int celltype:1;
        unsigned int channel:1;
        unsigned int dayLightSavings:1;
        unsigned int ecn0:1;
        unsigned int ltmOffset:1;
        unsigned int pnoffset:1;
        unsigned int rat:1;
        unsigned int rscp:1;
        unsigned int serverHash:1;
        unsigned int zoneid:1;
        unsigned int isLimitedService:1;
    } _has;
}

@property (nonatomic) int mcc;
@property (nonatomic) int mnc;
@property (nonatomic) int sid;
@property (nonatomic) int nid;
@property (nonatomic) int bsid;
@property (nonatomic) _Bool hasBsLatitude;
@property (nonatomic) double bsLatitude;
@property (nonatomic) _Bool hasBsLongitude;
@property (nonatomic) double bsLongitude;
@property (nonatomic) _Bool hasZoneid;
@property (nonatomic) int zoneid;
@property (nonatomic, readonly) _Bool hasSectorid;
@property (retain, nonatomic) NSString *sectorid;
@property (nonatomic) _Bool hasSectorLatitude;
@property (nonatomic) double sectorLatitude;
@property (nonatomic) _Bool hasSectorLongitude;
@property (nonatomic) double sectorLongitude;
@property (nonatomic) _Bool hasBandclass;
@property (nonatomic) int bandclass;
@property (nonatomic) _Bool hasRat;
@property (nonatomic) int rat;
@property (nonatomic) _Bool hasCelltype;
@property (nonatomic) int celltype;
@property (nonatomic) _Bool hasPnoffset;
@property (nonatomic) int pnoffset;
@property (nonatomic) _Bool hasChannel;
@property (nonatomic) int channel;
@property (retain, nonatomic) CLPLocation *location;
@property (nonatomic, readonly) _Bool hasAppBundleId;
@property (retain, nonatomic) NSString *appBundleId;
@property (nonatomic) _Bool hasServerHash;
@property (nonatomic) int serverHash;
@property (nonatomic, readonly) _Bool hasOperatorName;
@property (retain, nonatomic) NSString *operatorName;
@property (nonatomic) _Bool hasLtmOffset;
@property (nonatomic) int ltmOffset;
@property (nonatomic) _Bool hasDayLightSavings;
@property (nonatomic) int dayLightSavings;
@property (nonatomic, readonly) unsigned long long derivedMccsCount;
@property (nonatomic, readonly) int *derivedMccs;
@property (nonatomic) _Bool hasEcn0;
@property (nonatomic) int ecn0;
@property (nonatomic) _Bool hasRscp;
@property (nonatomic) int rscp;
@property (retain, nonatomic) NSMutableArray *neighbors;
@property (nonatomic, readonly) _Bool hasNeighborGroup;
@property (retain, nonatomic) CLPCellNeighborsGroup *neighborGroup;
@property (nonatomic) _Bool hasIsLimitedService;
@property (nonatomic) _Bool isLimitedService;
@property (nonatomic, readonly) _Bool hasServiceProviderName;
@property (retain, nonatomic) NSString *serviceProviderName;

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
- (id)neighborAtIndex:(unsigned long long)arg1;
- (void)addNeighbor:(id)arg1;
- (void)clearDerivedMccs;
- (int)derivedMccAtIndex:(unsigned long long)arg1;
- (void)addDerivedMcc:(int)arg1;
- (unsigned long long)neighborsCount;
- (void)clearNeighbors;
- (void)setDerivedMccs:(int *)arg1 count:(unsigned long long)arg2;

@end
