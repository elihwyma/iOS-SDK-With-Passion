/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <ProtocolBuffer/PBCodable.h>

@interface PPM2ObjectsDeleted : PBCodable

{
    int _domain;
    int _source;
    _Bool _error;
    struct {
        unsigned int domain:1;
        unsigned int source:1;
        unsigned int error:1;
    } _has;
}

@property (nonatomic) _Bool hasSource;
@property (nonatomic) int source;
@property (nonatomic) _Bool hasDomain;
@property (nonatomic) int domain;
@property (nonatomic) _Bool hasError;
@property (nonatomic) _Bool error;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)sourceAsString:(int)arg1;
- (int)StringAsSource:(id)arg1;
- (id)domainAsString:(int)arg1;
- (int)StringAsDomain:(id)arg1;

@end
