/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@interface NTPBBinningConfig : PBCodable

{
    double _decreaseConsumptionThreshold;
    long long _evaluationFrequency;
    long long _historyLength;
    double _increaseConsumptionThreshold;
    long long _minimumArticleCount;
    int _defaultChannelBin;
    int _defaultTopicBin;
    _Bool _enabled;
    struct {
        unsigned int decreaseConsumptionThreshold:1;
        unsigned int evaluationFrequency:1;
        unsigned int historyLength:1;
        unsigned int increaseConsumptionThreshold:1;
        unsigned int minimumArticleCount:1;
        unsigned int defaultChannelBin:1;
        unsigned int defaultTopicBin:1;
        unsigned int enabled:1;
    } _has;
}

@property (nonatomic) _Bool hasEnabled;
@property (nonatomic) _Bool enabled;
@property (nonatomic) _Bool hasEvaluationFrequency;
@property (nonatomic) long long evaluationFrequency;
@property (nonatomic) _Bool hasHistoryLength;
@property (nonatomic) long long historyLength;
@property (nonatomic) _Bool hasIncreaseConsumptionThreshold;
@property (nonatomic) double increaseConsumptionThreshold;
@property (nonatomic) _Bool hasDecreaseConsumptionThreshold;
@property (nonatomic) double decreaseConsumptionThreshold;
@property (nonatomic) _Bool hasMinimumArticleCount;
@property (nonatomic) long long minimumArticleCount;
@property (nonatomic) _Bool hasDefaultTopicBin;
@property (nonatomic) int defaultTopicBin;
@property (nonatomic) _Bool hasDefaultChannelBin;
@property (nonatomic) int defaultChannelBin;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
