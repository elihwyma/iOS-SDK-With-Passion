/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOLatLng, GEOStyleAttributes, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOPBTransitHall : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOLatLng *_location;
    unsigned long long _muid;
    NSString *_nameDisplayString;
    GEOStyleAttributes *_styleAttributes;
    NSMutableArray *_zoomNames;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _hallIndex;
    unsigned int _stationIndex;
    struct {
        unsigned int has_muid:1;
        unsigned int has_hallIndex:1;
        unsigned int has_stationIndex:1;
        unsigned int read_unknownFields:1;
        unsigned int read_location:1;
        unsigned int read_nameDisplayString:1;
        unsigned int read_styleAttributes:1;
        unsigned int read_zoomNames:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_location:1;
        unsigned int wrote_muid:1;
        unsigned int wrote_nameDisplayString:1;
        unsigned int wrote_styleAttributes:1;
        unsigned int wrote_zoomNames:1;
        unsigned int wrote_hallIndex:1;
        unsigned int wrote_stationIndex:1;
    } _flags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool hasMuid;
@property (nonatomic) unsigned long long muid;
@property (nonatomic) _Bool hasHallIndex;
@property (nonatomic) unsigned int hallIndex;
@property (nonatomic) _Bool hasMuid;
@property (nonatomic) unsigned long long muid;
@property (nonatomic) _Bool hasStationIndex;
@property (nonatomic) unsigned int stationIndex;
@property (nonatomic, readonly) _Bool hasLocation;
@property (retain, nonatomic) GEOLatLng *location;
@property (retain, nonatomic) NSMutableArray *zoomNames;
@property (nonatomic, readonly) _Bool hasStyleAttributes;
@property (retain, nonatomic) GEOStyleAttributes *styleAttributes;
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
- (void)_readStyleAttributes;
- (void)_readNameDisplayString;
- (void)_readZoomNames;
- (void)_addNoFlagsZoomName:(id)arg1;
- (unsigned long long)zoomNamesCount;
- (void)clearZoomNames;
- (id)zoomNameAtIndex:(unsigned long long)arg1;
- (void)addZoomName:(id)arg1;
- (id)bestName;
- (id)bestNameWithLocale:(out id *)arg1;

@end
