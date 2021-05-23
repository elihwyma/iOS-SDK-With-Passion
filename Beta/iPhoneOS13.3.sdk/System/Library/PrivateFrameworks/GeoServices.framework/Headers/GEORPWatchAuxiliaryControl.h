/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSString, PBDataReader;

@interface GEORPWatchAuxiliaryControl : PBCodable

{
    PBDataReader *_reader;
    NSString *_hardwareIdentifier;
    NSString *_osBuild;
    NSString *_osVersion;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_hardwareIdentifier:1;
        unsigned int read_osBuild:1;
        unsigned int read_osVersion:1;
        unsigned int wrote_hardwareIdentifier:1;
        unsigned int wrote_osBuild:1;
        unsigned int wrote_osVersion:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasHardwareIdentifier;
@property (retain, nonatomic) NSString *hardwareIdentifier;
@property (nonatomic, readonly) _Bool hasOsVersion;
@property (retain, nonatomic) NSString *osVersion;
@property (nonatomic, readonly) _Bool hasOsBuild;
@property (retain, nonatomic) NSString *osBuild;

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
- (void)_readHardwareIdentifier;
- (void)_readOsVersion;
- (void)_readOsBuild;

@end
