/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <ProtocolBuffer/PBCodable.h>

@interface KCellularCellPlmnSearchCount : PBCodable

{
    unsigned long long _timestamp;
    unsigned int _cdma1xSearchCount;
    unsigned int _cdmaEvdoSearchCount;
    unsigned int _durationMs;
    unsigned int _gsmSearchCount;
    unsigned int _lteSearchCount;
    unsigned int _subsId;
    unsigned int _tdscdmaSearchCount;
    unsigned int _umtsSearchCount;
    struct {
        unsigned int timestamp:1;
        unsigned int cdma1xSearchCount:1;
        unsigned int cdmaEvdoSearchCount:1;
        unsigned int durationMs:1;
        unsigned int gsmSearchCount:1;
        unsigned int lteSearchCount:1;
        unsigned int subsId:1;
        unsigned int tdscdmaSearchCount:1;
        unsigned int umtsSearchCount:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasDurationMs;
@property (nonatomic) unsigned int durationMs;
@property (nonatomic) _Bool hasGsmSearchCount;
@property (nonatomic) unsigned int gsmSearchCount;
@property (nonatomic) _Bool hasUmtsSearchCount;
@property (nonatomic) unsigned int umtsSearchCount;
@property (nonatomic) _Bool hasTdscdmaSearchCount;
@property (nonatomic) unsigned int tdscdmaSearchCount;
@property (nonatomic) _Bool hasLteSearchCount;
@property (nonatomic) unsigned int lteSearchCount;
@property (nonatomic) _Bool hasCdma1xSearchCount;
@property (nonatomic) unsigned int cdma1xSearchCount;
@property (nonatomic) _Bool hasCdmaEvdoSearchCount;
@property (nonatomic) unsigned int cdmaEvdoSearchCount;
@property (nonatomic) _Bool hasSubsId;
@property (nonatomic) unsigned int subsId;

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
