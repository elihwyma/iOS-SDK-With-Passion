/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOLocation, NSString, PBDataReader;

@interface GEOSignificantLocation : PBCodable

{
    PBDataReader *_reader;
    double _confidence;
    NSString *_identifier;
    GEOLocation *_location;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _locationIndex;
    unsigned int _numberOfVisitsBucket;
    struct {
        unsigned int has_confidence:1;
        unsigned int has_locationIndex:1;
        unsigned int has_numberOfVisitsBucket:1;
        unsigned int read_identifier:1;
        unsigned int read_location:1;
        unsigned int wrote_confidence:1;
        unsigned int wrote_identifier:1;
        unsigned int wrote_location:1;
        unsigned int wrote_locationIndex:1;
        unsigned int wrote_numberOfVisitsBucket:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasLocation;
@property (retain, nonatomic) GEOLocation *location;
@property (nonatomic) _Bool hasLocationIndex;
@property (nonatomic) unsigned int locationIndex;
@property (nonatomic) _Bool hasNumberOfVisitsBucket;
@property (nonatomic) unsigned int numberOfVisitsBucket;
@property (nonatomic, readonly) _Bool hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) _Bool hasConfidence;
@property (nonatomic) double confidence;

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
- (void)clearSensitiveFields;
- (void)_readLocation;
- (void)_readIdentifier;

@end
