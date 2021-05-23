/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOWiFiQualityHours, NSMutableArray, PBDataReader;

@interface GEOWiFiQualityProfile : PBCodable

{
    PBDataReader *_reader;
    GEOWiFiQualityHours *_hours;
    NSMutableArray *_qualities;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_hours:1;
        unsigned int read_qualities:1;
        unsigned int wrote_hours:1;
        unsigned int wrote_qualities:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasHours;
@property (retain, nonatomic) GEOWiFiQualityHours *hours;
@property (retain, nonatomic) NSMutableArray *qualities;

+ (_Bool)isValid:(id)arg1;
+ (Class)qualitiesType;

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
- (void)_readHours;
- (void)_readQualities;
- (void)_addNoFlagsQualities:(id)arg1;
- (unsigned long long)qualitiesCount;
- (void)clearQualities;
- (id)qualitiesAtIndex:(unsigned long long)arg1;
- (void)addQualities:(id)arg1;

@end
