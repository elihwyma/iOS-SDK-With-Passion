/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDNearestTransitParameters : PBCodable

{
    PBUnknownFields *_unknownFields;
    unsigned long long _lineMuid;
    _Bool _isTransitOnly;
    struct {
        unsigned int has_lineMuid:1;
        unsigned int has_isTransitOnly:1;
    } _flags;
}

@property (nonatomic) _Bool hasLineMuid;
@property (nonatomic) unsigned long long lineMuid;
@property (nonatomic) _Bool hasIsTransitOnly;
@property (nonatomic) _Bool isTransitOnly;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;

@end
