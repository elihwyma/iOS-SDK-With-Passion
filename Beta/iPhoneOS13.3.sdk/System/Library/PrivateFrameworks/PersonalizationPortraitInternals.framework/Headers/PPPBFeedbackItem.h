/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <ProtocolBuffer/PBCodable.h>

@interface PPPBFeedbackItem : PBCodable

{
    int _feedbackType;
    float _mappingWeight;
    struct {
        unsigned int feedbackType:1;
        unsigned int mappingWeight:1;
    } _has;
}

@property (nonatomic) _Bool hasFeedbackType;
@property (nonatomic) int feedbackType;
@property (nonatomic) _Bool hasMappingWeight;
@property (nonatomic) float mappingWeight;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
