/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOLatLng, GEOMiniCard, NSString, PBDataReader, PBUnknownFields;

@interface GEOTrafficCamera : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_identifier;
    GEOMiniCard *_infoCard;
    GEOLatLng *_position;
    NSString *_speedLimitText;
    double _speedThreshold;
    GEOMiniCard *_speedingCard;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _cameraPriority;
    unsigned int _highlightDistance;
    int _type;
    struct {
        unsigned int has_speedThreshold:1;
        unsigned int has_cameraPriority:1;
        unsigned int has_highlightDistance:1;
        unsigned int has_type:1;
        unsigned int read_unknownFields:1;
        unsigned int read_identifier:1;
        unsigned int read_infoCard:1;
        unsigned int read_position:1;
        unsigned int read_speedLimitText:1;
        unsigned int read_speedingCard:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_identifier:1;
        unsigned int wrote_infoCard:1;
        unsigned int wrote_position:1;
        unsigned int wrote_speedLimitText:1;
        unsigned int wrote_speedThreshold:1;
        unsigned int wrote_speedingCard:1;
        unsigned int wrote_cameraPriority:1;
        unsigned int wrote_highlightDistance:1;
        unsigned int wrote_type:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) _Bool hasType;
@property (nonatomic) int type;
@property (nonatomic, readonly) _Bool hasPosition;
@property (retain, nonatomic) GEOLatLng *position;
@property (nonatomic) _Bool hasHighlightDistance;
@property (nonatomic) unsigned int highlightDistance;
@property (nonatomic, readonly) _Bool hasInfoCard;
@property (retain, nonatomic) GEOMiniCard *infoCard;
@property (nonatomic, readonly) _Bool hasSpeedLimitText;
@property (retain, nonatomic) NSString *speedLimitText;
@property (nonatomic) _Bool hasSpeedThreshold;
@property (nonatomic) double speedThreshold;
@property (nonatomic, readonly) _Bool hasSpeedingCard;
@property (retain, nonatomic) GEOMiniCard *speedingCard;
@property (nonatomic) _Bool hasCameraPriority;
@property (nonatomic) unsigned int cameraPriority;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

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
- (id)typeAsString:(int)arg1;
- (int)StringAsType:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (void)_readIdentifier;
- (void)_readPosition;
- (void)_readInfoCard;
- (void)_readSpeedLimitText;
- (void)_readSpeedingCard;

@end
