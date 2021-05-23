/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOCategory : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_alias;
    long long _geoOntologyId;
    NSMutableArray *_localizedNames;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _level;
    struct {
        unsigned int has_geoOntologyId:1;
        unsigned int read_unknownFields:1;
        unsigned int read_alias:1;
        unsigned int read_localizedNames:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_alias:1;
        unsigned int wrote_geoOntologyId:1;
        unsigned int wrote_localizedNames:1;
        unsigned int wrote_level:1;
    } _flags;
}

@property (retain, nonatomic) NSString *alias;
@property (nonatomic) int level;
@property (nonatomic) _Bool hasGeoOntologyId;
@property (nonatomic) long long geoOntologyId;
@property (retain, nonatomic) NSMutableArray *localizedNames;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)localizedNamesType;

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
- (void)addLocalizedNames:(id)arg1;
- (id)initWithPlaceDataCategory:(id)arg1;
- (unsigned long long)localizedNamesCount;
- (void)_readAlias;
- (void)_readLocalizedNames;
- (void)_addNoFlagsLocalizedNames:(id)arg1;
- (void)clearLocalizedNames;
- (id)localizedNamesAtIndex:(unsigned long long)arg1;

@end
