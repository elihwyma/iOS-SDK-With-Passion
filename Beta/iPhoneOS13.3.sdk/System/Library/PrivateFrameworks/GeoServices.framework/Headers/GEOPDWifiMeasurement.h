/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDWifiMeasurement : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    unsigned long long _entryTime;
    unsigned long long _exitTime;
    NSMutableArray *_locations;
    NSMutableArray *_wifiAccessPoints;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int has_entryTime:1;
        unsigned int has_exitTime:1;
        unsigned int read_unknownFields:1;
        unsigned int read_locations:1;
        unsigned int read_wifiAccessPoints:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_entryTime:1;
        unsigned int wrote_exitTime:1;
        unsigned int wrote_locations:1;
        unsigned int wrote_wifiAccessPoints:1;
    } _flags;
}

@property (retain, nonatomic) NSMutableArray *locations;
@property (retain, nonatomic) NSMutableArray *wifiAccessPoints;
@property (nonatomic) _Bool hasEntryTime;
@property (nonatomic) unsigned long long entryTime;
@property (nonatomic) _Bool hasExitTime;
@property (nonatomic) unsigned long long exitTime;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)locationType;
+ (Class)wifiAccessPointType;

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
- (void)clearSensitiveFields;
- (void)addLocation:(id)arg1;
- (unsigned long long)locationsCount;
- (void)clearLocations;
- (id)locationAtIndex:(unsigned long long)arg1;
- (void)_readLocations;
- (void)_addNoFlagsLocation:(id)arg1;
- (void)_readWifiAccessPoints;
- (void)_addNoFlagsWifiAccessPoint:(id)arg1;
- (unsigned long long)wifiAccessPointsCount;
- (void)clearWifiAccessPoints;
- (id)wifiAccessPointAtIndex:(unsigned long long)arg1;
- (void)addWifiAccessPoint:(id)arg1;

@end
