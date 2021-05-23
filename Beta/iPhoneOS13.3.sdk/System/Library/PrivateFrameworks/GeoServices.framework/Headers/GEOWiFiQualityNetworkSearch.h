/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOLocation, NSMutableArray, PBDataReader;

@interface GEOWiFiQualityNetworkSearch : PBCodable

{
    PBDataReader *_reader;
    NSMutableArray *_ess;
    GEOLocation *_location;
    unsigned long long _radius;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int has_radius:1;
        unsigned int read_ess:1;
        unsigned int read_location:1;
        unsigned int wrote_ess:1;
        unsigned int wrote_location:1;
        unsigned int wrote_radius:1;
    } _flags;
}

@property (retain, nonatomic) NSMutableArray *ess;
@property (nonatomic, readonly) _Bool hasLocation;
@property (retain, nonatomic) GEOLocation *location;
@property (nonatomic) _Bool hasRadius;
@property (nonatomic) unsigned long long radius;

+ (_Bool)isValid:(id)arg1;
+ (Class)essType;

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
- (void)_readLocation;
- (void)_readEss;
- (void)_addNoFlagsEss:(id)arg1;
- (unsigned long long)essCount;
- (void)clearEss;
- (id)essAtIndex:(unsigned long long)arg1;
- (void)addEss:(id)arg1;

@end
