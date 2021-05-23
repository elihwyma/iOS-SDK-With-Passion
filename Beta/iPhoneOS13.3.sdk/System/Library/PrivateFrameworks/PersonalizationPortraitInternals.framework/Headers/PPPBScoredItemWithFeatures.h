/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface PPPBScoredItemWithFeatures : PBCodable

{
    unsigned long long _topicId;
    NSMutableArray *_features;
    NSMutableArray *_feedbackItems;
    NSString *_namedEntity;
    NSString *_namedEntityWithFeedback;
    float _score;
    struct {
        unsigned int topicId:1;
        unsigned int score:1;
    } _has;
}

@property (nonatomic) _Bool hasTopicId;
@property (nonatomic) unsigned long long topicId;
@property (nonatomic, readonly) _Bool hasNamedEntity;
@property (retain, nonatomic) NSString *namedEntity;
@property (nonatomic, readonly) _Bool hasNamedEntityWithFeedback;
@property (retain, nonatomic) NSString *namedEntityWithFeedback;
@property (nonatomic) _Bool hasScore;
@property (nonatomic) float score;
@property (retain, nonatomic) NSMutableArray *features;
@property (retain, nonatomic) NSMutableArray *feedbackItems;

+ (Class)featuresType;
+ (Class)feedbackItemsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)featuresAtIndex:(unsigned long long)arg1;
- (unsigned long long)featuresCount;
- (void)clearFeatures;
- (void)addFeatures:(id)arg1;
- (void)clearFeedbackItems;
- (void)addFeedbackItems:(id)arg1;
- (unsigned long long)feedbackItemsCount;
- (id)feedbackItemsAtIndex:(unsigned long long)arg1;

@end
