/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEONameInfo, NSMutableArray, NSString, PBDataReader;

@interface GEOCompanionDriveStep : PBCodable

{
    PBDataReader *_reader;
    struct GEOJunctionElement *_junctionElements;
    unsigned long long _junctionElementsCount;
    unsigned long long _junctionElementsSpace;
    GEONameInfo *_exitNumber;
    NSMutableArray *_maneuverNames;
    NSString *_shield;
    NSMutableArray *_signposts;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _drivingSide;
    int _junctionType;
    int _maneuverType;
    int _shieldType;
    _Bool _toFreeway;
    struct {
        unsigned int has_drivingSide:1;
        unsigned int has_junctionType:1;
        unsigned int has_maneuverType:1;
        unsigned int has_shieldType:1;
        unsigned int has_toFreeway:1;
        unsigned int read_junctionElements:1;
        unsigned int read_exitNumber:1;
        unsigned int read_maneuverNames:1;
        unsigned int read_shield:1;
        unsigned int read_signposts:1;
        unsigned int wrote_junctionElements:1;
        unsigned int wrote_exitNumber:1;
        unsigned int wrote_maneuverNames:1;
        unsigned int wrote_shield:1;
        unsigned int wrote_signposts:1;
        unsigned int wrote_drivingSide:1;
        unsigned int wrote_junctionType:1;
        unsigned int wrote_maneuverType:1;
        unsigned int wrote_shieldType:1;
        unsigned int wrote_toFreeway:1;
    } _flags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool hasManeuverType;
@property (nonatomic) int maneuverType;
@property (retain, nonatomic) NSMutableArray *maneuverNames;
@property (retain, nonatomic) NSMutableArray *signposts;
@property (nonatomic) _Bool hasJunctionType;
@property (nonatomic) int junctionType;
@property (nonatomic, readonly) unsigned long long junctionElementsCount;
@property (nonatomic, readonly) struct GEOJunctionElement *junctionElements;
@property (nonatomic, readonly) int transportType;
@property (nonatomic) _Bool hasManeuverType;
@property (nonatomic) int maneuverType;
@property (retain, nonatomic) NSMutableArray *maneuverNames;
@property (retain, nonatomic) NSMutableArray *signposts;
@property (nonatomic) _Bool hasToFreeway;
@property (nonatomic) _Bool toFreeway;
@property (nonatomic, readonly) _Bool hasExitNumber;
@property (retain, nonatomic) GEONameInfo *exitNumber;
@property (nonatomic, readonly) _Bool hasShield;
@property (retain, nonatomic) NSString *shield;
@property (nonatomic) _Bool hasShieldType;
@property (nonatomic) int shieldType;
@property (nonatomic) _Bool hasJunctionType;
@property (nonatomic) int junctionType;
@property (nonatomic, readonly) unsigned long long junctionElementsCount;
@property (nonatomic, readonly) struct GEOJunctionElement *junctionElements;
@property (nonatomic) _Bool hasDrivingSide;
@property (nonatomic) int drivingSide;

+ (_Bool)isValid:(id)arg1;
+ (Class)maneuverNameType;
+ (Class)signpostType;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)_readShield;
- (id)drivingSideAsString:(int)arg1;
- (int)StringAsDrivingSide:(id)arg1;
- (void)clearJunctionElements;
- (void)_readManeuverNames;
- (void)_addNoFlagsManeuverName:(id)arg1;
- (void)_readJunctionElements;
- (void)_addNoFlagsJunctionElement:(struct GEOJunctionElement)arg1;
- (void)_readSignposts;
- (void)_addNoFlagsSignpost:(id)arg1;
- (void)_readExitNumber;
- (unsigned long long)maneuverNamesCount;
- (void)clearManeuverNames;
- (id)maneuverNameAtIndex:(unsigned long long)arg1;
- (void)addManeuverName:(id)arg1;
- (struct GEOJunctionElement)junctionElementAtIndex:(unsigned long long)arg1;
- (void)addJunctionElement:(struct GEOJunctionElement)arg1;
- (unsigned long long)signpostsCount;
- (void)clearSignposts;
- (id)signpostAtIndex:(unsigned long long)arg1;
- (void)addSignpost:(id)arg1;
- (id)maneuverTypeAsString:(int)arg1;
- (int)StringAsManeuverType:(id)arg1;
- (id)junctionTypeAsString:(int)arg1;
- (int)StringAsJunctionType:(id)arg1;
- (void)setJunctionElements:(struct GEOJunctionElement *)arg1 count:(unsigned long long)arg2;

@end
