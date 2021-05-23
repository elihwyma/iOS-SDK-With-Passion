/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class PBUnknownFields;

@interface GEOTimeGap : PBCodable

{
    PBUnknownFields *_unknownFields;
    unsigned int _seconds;
    unsigned int _subsequentEventId;
    _Bool _ifChained;
    struct {
        unsigned int has_seconds:1;
        unsigned int has_subsequentEventId:1;
        unsigned int has_ifChained:1;
    } _flags;
}

@property (nonatomic) _Bool hasSubsequentEventId;
@property (nonatomic) unsigned int subsequentEventId;
@property (nonatomic) _Bool hasSeconds;
@property (nonatomic) unsigned int seconds;
@property (nonatomic) _Bool hasIfChained;
@property (nonatomic) _Bool ifChained;
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
