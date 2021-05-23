/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <ProtocolBuffer/PBCodable.h>

@class EutraStats, GeraStats, UtraFddStats, UtraTddStats;

@interface KCellularFwCoreStats : PBCodable

{
    unsigned long long _timestamp;
    EutraStats *_eutraStats;
    GeraStats *_geraStats;
    unsigned int _subsId;
    UtraFddStats *_utraFddStats;
    UtraTddStats *_utraTddStats;
    struct {
        unsigned int timestamp:1;
        unsigned int subsId:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, readonly) _Bool hasGeraStats;
@property (retain, nonatomic) GeraStats *geraStats;
@property (nonatomic, readonly) _Bool hasUtraFddStats;
@property (retain, nonatomic) UtraFddStats *utraFddStats;
@property (nonatomic, readonly) _Bool hasUtraTddStats;
@property (retain, nonatomic) UtraTddStats *utraTddStats;
@property (nonatomic, readonly) _Bool hasEutraStats;
@property (retain, nonatomic) EutraStats *eutraStats;
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
