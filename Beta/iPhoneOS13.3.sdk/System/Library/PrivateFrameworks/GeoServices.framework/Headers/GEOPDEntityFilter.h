/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDEntityFilter : PBCodable

{
    PBUnknownFields *_unknownFields;
    _Bool _includeName;
    _Bool _includeSpokenNames;
    struct {
        unsigned int has_includeName:1;
        unsigned int has_includeSpokenNames:1;
    } _flags;
}

@property (nonatomic) _Bool hasIncludeSpokenNames;
@property (nonatomic) _Bool includeSpokenNames;
@property (nonatomic) _Bool hasIncludeName;
@property (nonatomic) _Bool includeName;
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
