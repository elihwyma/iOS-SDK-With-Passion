/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@interface GEOSignGuidanceFeedback : PBCodable

{
    int _signDetailIndex;
    int _signTitleIndex;
    struct {
        unsigned int has_signDetailIndex:1;
        unsigned int has_signTitleIndex:1;
    } _flags;
}

@property (nonatomic) _Bool hasSignTitleIndex;
@property (nonatomic) int signTitleIndex;
@property (nonatomic) _Bool hasSignDetailIndex;
@property (nonatomic) int signDetailIndex;

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

@end
