/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOLatLng, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOPBTransitStation : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOLatLng *_location;
    unsigned long long _muid;
    NSString *_nameDisplayString;
    NSMutableArray *_zoomNames;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _stationIndex;
    int _structureType;
    struct {
        unsigned int has_muid:1;
        unsigned int has_stationIndex:1;
        unsigned int has_structureType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_location:1;
        unsigned int read_nameDisplayString:1;
        unsigned int read_zoomNames:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_location:1;
        unsigned int wrote_muid:1;
        unsigned int wrote_nameDisplayString:1;
        unsigned int wrote_zoomNames:1;
        unsigned int wrote_stationIndex:1;
        unsigned int wrote_structureType:1;
    } _flags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool hasMuid;
@property (nonatomic) unsigned long long muid;
@property (nonatomic) _Bool hasStationIndex;
@property (nonatomic) unsigned int stationIndex;
@property (nonatomic) _Bool hasMuid;
@property (nonatomic) unsigned long long muid;
@property (nonatomic, readonly) _Bool hasLocation;
@property (retain, nonatomic) GEOLatLng *location;
@property (nonatomic) _Bool hasStructureType;
@property (nonatomic) int structureType;
@property (retain, nonatomic) NSMutableArray *zoomNames;
@property (nonatomic, readonly) _Bool hasNameDisplayString;
@property (retain, nonatomic) NSString *nameDisplayString;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)zoomNameType;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1;
- (id)identifier;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (void)_readLocation;
- (id)structureTypeAsString:(int)arg1;
- (int)StringAsStructureType:(id)arg1;
- (void)_readNameDisplayString;
- (void)_readZoomNames;
- (void)_addNoFlagsZoomName:(id)arg1;
- (unsigned long long)zoomNamesCount;
- (void)clearZoomNames;
- (id)zoomNameAtIndex:(unsigned long long)arg1;
- (void)addZoomName:(id)arg1;
- (id)bestName;

@end
