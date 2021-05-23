/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

#import <NSObject.h>

@class NSDate, NSSet, NSString;

@interface PPTopicQuery : NSObject

{
    _Bool _scoreWithBiases;
    _Bool _scoreWithStrictFiltering;
    _Bool _excludeWithoutSentiment;
    _Bool _scoreWithCalibration;
    _Bool _orderByIdentifier;
    unsigned long long _limit;
    NSDate *_fromDate;
    NSDate *_toDate;
    NSDate *_scoringDate;
    NSSet *_matchingSourceBundleIds;
    NSSet *_excludingSourceBundleIds;
    unsigned long long _deviceFilter;
    double _decayRate;
    NSSet *_matchingTopicIds;
    unsigned long long _minimumComponentCount;
    NSSet *_matchingAlgorithms;
    NSSet *_excludingAlgorithms;
    NSString *_matchingTopicTrie;
}

@property (nonatomic) _Bool scoreWithCalibration;
@property (nonatomic) unsigned long long minimumComponentCount;
@property (retain, nonatomic) NSSet *matchingAlgorithms;
@property (retain, nonatomic) NSSet *excludingAlgorithms;
@property (retain, nonatomic) NSString *matchingTopicTrie;
@property (nonatomic) _Bool orderByIdentifier;
@property (nonatomic) unsigned long long limit;
@property (retain, nonatomic) NSDate *fromDate;
@property (retain, nonatomic) NSDate *toDate;
@property (retain, nonatomic) NSDate *scoringDate;
@property (retain, nonatomic) NSSet *matchingSourceBundleIds;
@property (retain, nonatomic) NSSet *excludingSourceBundleIds;
@property (nonatomic) unsigned long long deviceFilter;
@property (nonatomic) _Bool overrideDecayRate;
@property (nonatomic) double decayRate;
@property (nonatomic) _Bool scoreWithBiases;
@property (retain, nonatomic) NSSet *matchingTopicIds;
@property (nonatomic) _Bool scoreWithStrictFiltering;
@property (nonatomic) _Bool excludeWithoutSentiment;

+ (_Bool)supportsSecureCoding;
+ (id)_algorithmsDescription:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)customizedDescription;
- (_Bool)isEqualToTopicQuery:(id)arg1;

@end
