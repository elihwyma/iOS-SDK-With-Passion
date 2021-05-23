/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOJunctionInfo, GEONameInfo, NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEOSignGuidance : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOJunctionInfo *_junctionInfo;
    NSMutableArray *_secondarySigns;
    GEONameInfo *_shieldName;
    NSMutableArray *_signDetails;
    NSMutableArray *_signTitles;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _maneuverArrowOverride;
    unsigned int _stackRanking;
    struct {
        unsigned int has_maneuverArrowOverride:1;
        unsigned int has_stackRanking:1;
        unsigned int read_unknownFields:1;
        unsigned int read_junctionInfo:1;
        unsigned int read_secondarySigns:1;
        unsigned int read_shieldName:1;
        unsigned int read_signDetails:1;
        unsigned int read_signTitles:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_junctionInfo:1;
        unsigned int wrote_secondarySigns:1;
        unsigned int wrote_shieldName:1;
        unsigned int wrote_signDetails:1;
        unsigned int wrote_signTitles:1;
        unsigned int wrote_maneuverArrowOverride:1;
        unsigned int wrote_stackRanking:1;
    } _flags;
}

@property (retain, nonatomic) NSMutableArray *signTitles;
@property (retain, nonatomic) NSMutableArray *signDetails;
@property (retain, nonatomic) NSMutableArray *secondarySigns;
@property (nonatomic) _Bool hasManeuverArrowOverride;
@property (nonatomic) int maneuverArrowOverride;
@property (nonatomic, readonly) _Bool hasShieldName;
@property (retain, nonatomic) GEONameInfo *shieldName;
@property (nonatomic) _Bool hasStackRanking;
@property (nonatomic) unsigned int stackRanking;
@property (nonatomic, readonly) _Bool hasJunctionInfo;
@property (retain, nonatomic) GEOJunctionInfo *junctionInfo;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)signTitleType;
+ (Class)signDetailType;
+ (Class)secondarySignType;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (unsigned long long)secondarySignsCount;
- (void)_readSignTitles;
- (void)_addNoFlagsSignTitle:(id)arg1;
- (void)_readSignDetails;
- (void)_addNoFlagsSignDetail:(id)arg1;
- (void)_readSecondarySigns;
- (void)_addNoFlagsSecondarySign:(id)arg1;
- (void)_readShieldName;
- (void)_readJunctionInfo;
- (unsigned long long)signTitlesCount;
- (void)clearSignTitles;
- (id)signTitleAtIndex:(unsigned long long)arg1;
- (void)addSignTitle:(id)arg1;
- (unsigned long long)signDetailsCount;
- (void)clearSignDetails;
- (id)signDetailAtIndex:(unsigned long long)arg1;
- (void)addSignDetail:(id)arg1;
- (void)clearSecondarySigns;
- (id)secondarySignAtIndex:(unsigned long long)arg1;
- (void)addSecondarySign:(id)arg1;
- (id)maneuverArrowOverrideAsString:(int)arg1;
- (int)StringAsManeuverArrowOverride:(id)arg1;

@end
