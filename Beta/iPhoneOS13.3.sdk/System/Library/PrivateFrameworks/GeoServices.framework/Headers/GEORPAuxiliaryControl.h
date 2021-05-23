/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEORPCarPlayAuxiliaryControl, GEORPWatchAuxiliaryControl, PBDataReader;

@interface GEORPAuxiliaryControl : PBCodable

{
    PBDataReader *_reader;
    GEORPCarPlayAuxiliaryControl *_car;
    GEORPWatchAuxiliaryControl *_watch;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_car:1;
        unsigned int read_watch:1;
        unsigned int wrote_car:1;
        unsigned int wrote_watch:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasWatch;
@property (retain, nonatomic) GEORPWatchAuxiliaryControl *watch;
@property (nonatomic, readonly) _Bool hasCar;
@property (retain, nonatomic) GEORPCarPlayAuxiliaryControl *car;

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
- (void)_readWatch;
- (void)_readCar;

@end
