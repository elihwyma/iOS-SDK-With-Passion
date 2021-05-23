/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class PBUnknownFields;

@interface GEODestinationInfo : PBCodable

{
    PBUnknownFields *_unknownFields;
    _Bool _hasDisplayAddress;
    _Bool _hasDisplayName;
    _Bool _hasSpokenAddress;
    _Bool _hasSpokenName;
    struct {
        unsigned int has_hasDisplayAddress:1;
        unsigned int has_hasDisplayName:1;
        unsigned int has_hasSpokenAddress:1;
        unsigned int has_hasSpokenName:1;
    } _flags;
}

@property (nonatomic) _Bool hasHasDisplayName;
@property (nonatomic) _Bool hasDisplayName;
@property (nonatomic) _Bool hasHasSpokenName;
@property (nonatomic) _Bool hasSpokenName;
@property (nonatomic) _Bool hasHasDisplayAddress;
@property (nonatomic) _Bool hasDisplayAddress;
@property (nonatomic) _Bool hasHasSpokenAddress;
@property (nonatomic) _Bool hasSpokenAddress;
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
