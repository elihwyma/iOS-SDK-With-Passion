/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOLatLng, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOPBTransitAccessPoint : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_entranceNameDisplayString;
    NSMutableArray *_entranceZoomNames;
    NSString *_exitNameDisplayString;
    NSMutableArray *_exitZoomNames;
    GEOLatLng *_location;
    unsigned long long _muid;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _accessPointIndex;
    unsigned int _stationIndex;
    struct {
        unsigned int has_muid:1;
        unsigned int has_accessPointIndex:1;
        unsigned int has_stationIndex:1;
        unsigned int read_unknownFields:1;
        unsigned int read_entranceNameDisplayString:1;
        unsigned int read_entranceZoomNames:1;
        unsigned int read_exitNameDisplayString:1;
        unsigned int read_exitZoomNames:1;
        unsigned int read_location:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_entranceNameDisplayString:1;
        unsigned int wrote_entranceZoomNames:1;
        unsigned int wrote_exitNameDisplayString:1;
        unsigned int wrote_exitZoomNames:1;
        unsigned int wrote_location:1;
        unsigned int wrote_muid:1;
        unsigned int wrote_accessPointIndex:1;
        unsigned int wrote_stationIndex:1;
    } _flags;
}

@property (nonatomic) _Bool hasAccessPointIndex;
@property (nonatomic) unsigned int accessPointIndex;
@property (nonatomic) _Bool hasMuid;
@property (nonatomic) unsigned long long muid;
@property (nonatomic, readonly) _Bool hasLocation;
@property (retain, nonatomic) GEOLatLng *location;
@property (nonatomic) _Bool hasStationIndex;
@property (nonatomic) unsigned int stationIndex;
@property (retain, nonatomic) NSMutableArray *entranceZoomNames;
@property (retain, nonatomic) NSMutableArray *exitZoomNames;
@property (nonatomic, readonly) _Bool hasEntranceNameDisplayString;
@property (retain, nonatomic) NSString *entranceNameDisplayString;
@property (nonatomic, readonly) _Bool hasExitNameDisplayString;
@property (retain, nonatomic) NSString *exitNameDisplayString;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)entranceZoomNameType;
+ (Class)exitZoomNameType;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
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
- (void)_readEntranceZoomNames;
- (void)_addNoFlagsEntranceZoomName:(id)arg1;
- (void)_readExitZoomNames;
- (void)_addNoFlagsExitZoomName:(id)arg1;
- (void)_readEntranceNameDisplayString;
- (void)_readExitNameDisplayString;
- (unsigned long long)entranceZoomNamesCount;
- (void)clearEntranceZoomNames;
- (id)entranceZoomNameAtIndex:(unsigned long long)arg1;
- (void)addEntranceZoomName:(id)arg1;
- (unsigned long long)exitZoomNamesCount;
- (void)clearExitZoomNames;
- (id)exitZoomNameAtIndex:(unsigned long long)arg1;
- (void)addExitZoomName:(id)arg1;
- (id)bestEntranceNameWithLocale:(out id *)arg1;
- (id)bestExitNameWithLocale:(out id *)arg1;
- (id)bestEntranceName;
- (id)bestExitName;

@end
