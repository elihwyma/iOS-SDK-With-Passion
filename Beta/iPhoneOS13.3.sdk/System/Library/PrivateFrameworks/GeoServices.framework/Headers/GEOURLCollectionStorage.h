/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOURLCollectionStorage : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_name;
    NSMutableArray *_places;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_name:1;
        unsigned int read_places:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_name:1;
        unsigned int wrote_places:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasName;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableArray *places;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)placeType;
+ (_Bool)isValid:(id)arg1;

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
- (void)_readName;
- (unsigned long long)placesCount;
- (void)addPlace:(id)arg1;
- (void)clearPlaces;
- (id)placeAtIndex:(unsigned long long)arg1;
- (void)_readPlaces;
- (void)_addNoFlagsPlace:(id)arg1;

@end
