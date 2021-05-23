/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSString, PBDataReader;

@interface GEOTransitIncidentItem : PBCodable

{
    PBDataReader *_reader;
    NSString *_transitIncidentTitle;
    NSString *_transitLineMuid;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_transitIncidentTitle:1;
        unsigned int read_transitLineMuid:1;
        unsigned int wrote_transitIncidentTitle:1;
        unsigned int wrote_transitLineMuid:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasTransitIncidentTitle;
@property (retain, nonatomic) NSString *transitIncidentTitle;
@property (nonatomic, readonly) _Bool hasTransitLineMuid;
@property (retain, nonatomic) NSString *transitLineMuid;

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
- (void)_readTransitIncidentTitle;
- (void)_readTransitLineMuid;

@end
