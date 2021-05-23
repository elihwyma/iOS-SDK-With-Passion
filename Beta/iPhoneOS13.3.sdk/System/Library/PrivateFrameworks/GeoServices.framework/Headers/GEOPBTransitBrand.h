/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOStyleAttributes, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPBTransitBrand : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    unsigned long long _muid;
    NSString *_nameDisplayString;
    GEOStyleAttributes *_styleAttributes;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _brandIndex;
    struct {
        unsigned int has_muid:1;
        unsigned int has_brandIndex:1;
        unsigned int read_unknownFields:1;
        unsigned int read_nameDisplayString:1;
        unsigned int read_styleAttributes:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_muid:1;
        unsigned int wrote_nameDisplayString:1;
        unsigned int wrote_styleAttributes:1;
        unsigned int wrote_brandIndex:1;
    } _flags;
}

@property (nonatomic) _Bool hasBrandIndex;
@property (nonatomic) unsigned int brandIndex;
@property (nonatomic) _Bool hasMuid;
@property (nonatomic) unsigned long long muid;
@property (nonatomic, readonly) _Bool hasStyleAttributes;
@property (retain, nonatomic) GEOStyleAttributes *styleAttributes;
@property (nonatomic, readonly) _Bool hasNameDisplayString;
@property (retain, nonatomic) NSString *nameDisplayString;
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
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (void)_readStyleAttributes;
- (void)_readNameDisplayString;

@end
