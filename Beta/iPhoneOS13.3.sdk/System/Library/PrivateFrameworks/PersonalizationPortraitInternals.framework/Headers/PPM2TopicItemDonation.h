/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <ProtocolBuffer/PBCodable.h>

@interface PPM2TopicItemDonation : PBCodable

{
    int _isNew;
    int _source;
    struct {
        unsigned int isNew:1;
        unsigned int source:1;
    } _has;
}

@property (nonatomic) _Bool hasSource;
@property (nonatomic) int source;
@property (nonatomic) _Bool hasIsNew;
@property (nonatomic) int isNew;

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
- (id)isNewAsString:(int)arg1;
- (int)StringAsIsNew:(id)arg1;

@end
