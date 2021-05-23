/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOLatLng, GEOStyleAttributes, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOPBTransitStop : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOLatLng *_latLng;
    unsigned long long _muid;
    NSString *_nameDisplayString;
    GEOStyleAttributes *_styleAttributes;
    NSString *_timezone;
    NSMutableArray *_zoomNames;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _hallIndex;
    unsigned int _stopIndex;
    struct {
        unsigned int has_muid:1;
        unsigned int has_hallIndex:1;
        unsigned int has_stopIndex:1;
        unsigned int read_unknownFields:1;
        unsigned int read_latLng:1;
        unsigned int read_nameDisplayString:1;
        unsigned int read_styleAttributes:1;
        unsigned int read_timezone:1;
        unsigned int read_zoomNames:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_latLng:1;
        unsigned int wrote_muid:1;
        unsigned int wrote_nameDisplayString:1;
        unsigned int wrote_styleAttributes:1;
        unsigned int wrote_timezone:1;
        unsigned int wrote_zoomNames:1;
        unsigned int wrote_hallIndex:1;
        unsigned int wrote_stopIndex:1;
    } _flags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool hasMuid;
@property (nonatomic) unsigned long long muid;
@property (nonatomic) _Bool hasStopIndex;
@property (nonatomic) unsigned int stopIndex;
@property (nonatomic) _Bool hasMuid;
@property (nonatomic) unsigned long long muid;
@property (nonatomic, readonly) _Bool hasLatLng;
@property (retain, nonatomic) GEOLatLng *latLng;
@property (nonatomic, readonly) _Bool hasTimezone;
@property (retain, nonatomic) NSString *timezone;
@property (nonatomic, readonly) _Bool hasStyleAttributes;
@property (retain, nonatomic) GEOStyleAttributes *styleAttributes;
@property (nonatomic) _Bool hasHallIndex;
@property (nonatomic) unsigned int hallIndex;
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
- (void)_readTimezone;
- (void)_readLatLng;
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
