/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOTransitDepartureSequenceUsage, NSString, PBDataReader;

@interface GEOTransitPlaceCard : PBCodable

{
    PBDataReader *_reader;
    NSString *_incidentType;
    GEOTransitDepartureSequenceUsage *_transitDepartureSequenceUsage;
    NSString *_transitSystemName;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _transitCategory;
    struct {
        unsigned int has_transitCategory:1;
        unsigned int read_incidentType:1;
        unsigned int read_transitDepartureSequenceUsage:1;
        unsigned int read_transitSystemName:1;
        unsigned int wrote_incidentType:1;
        unsigned int wrote_transitDepartureSequenceUsage:1;
        unsigned int wrote_transitSystemName:1;
        unsigned int wrote_transitCategory:1;
    } _flags;
}

@property (nonatomic) _Bool hasTransitCategory;
@property (nonatomic) int transitCategory;
@property (nonatomic, readonly) _Bool hasTransitSystemName;
@property (retain, nonatomic) NSString *transitSystemName;
@property (nonatomic, readonly) _Bool hasTransitDepartureSequenceUsage;
@property (retain, nonatomic) GEOTransitDepartureSequenceUsage *transitDepartureSequenceUsage;
@property (nonatomic, readonly) _Bool hasIncidentType;
@property (retain, nonatomic) NSString *incidentType;

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
- (void)_readTransitSystemName;
- (void)_readTransitDepartureSequenceUsage;
- (void)_readIncidentType;
- (id)transitCategoryAsString:(int)arg1;
- (int)StringAsTransitCategory:(id)arg1;

@end
