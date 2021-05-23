/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@interface GEOSpokenGuidanceFeedback : PBCodable

{
    int _spokenGuidanceIndex;
    _Bool _shortPrompt;
    struct {
        unsigned int has_spokenGuidanceIndex:1;
        unsigned int has_shortPrompt:1;
    } _flags;
}

@property (nonatomic) _Bool hasSpokenGuidanceIndex;
@property (nonatomic) int spokenGuidanceIndex;
@property (nonatomic) _Bool hasShortPrompt;
@property (nonatomic) _Bool shortPrompt;

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
