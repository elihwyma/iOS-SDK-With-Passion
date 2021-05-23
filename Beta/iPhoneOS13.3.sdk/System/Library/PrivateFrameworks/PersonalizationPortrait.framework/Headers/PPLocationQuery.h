/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

#import <NSObject.h>

@class NSDate, NSSet, NSString;

@interface PPLocationQuery : NSObject

{
    _Bool _excludingWithoutSentiment;
    unsigned long long _limit;
    NSDate *_fromDate;
    NSDate *_toDate;
    NSDate *_scoringDate;
    NSSet *_matchingSourceBundleIds;
    NSSet *_excludingSourceBundleIds;
    unsigned long long _deviceFilter;
    double _perRecordDecayRate;
    double _decayRate;
    NSString *_fuzzyMatchingString;
    NSSet *_fuzzyMatchingFields;
    NSSet *_matchingCategories;
    NSSet *_matchingAlgorithms;
    NSSet *_excludingAlgorithms;
    unsigned long long _consumer;
}

@property (nonatomic) unsigned long long consumer;
@property (nonatomic) unsigned long long limit;
@property (retain, nonatomic) NSDate *fromDate;
@property (retain, nonatomic) NSDate *toDate;
@property (retain, nonatomic) NSDate *scoringDate;
@property (retain, nonatomic) NSSet *matchingSourceBundleIds;
@property (retain, nonatomic) NSSet *excludingSourceBundleIds;
@property (nonatomic) unsigned long long deviceFilter;
@property (nonatomic) double perRecordDecayRate;
@property (nonatomic) double decayRate;
@property (retain, nonatomic) NSString *fuzzyMatchingString;
@property (retain, nonatomic) NSSet *fuzzyMatchingFields;
@property (retain, nonatomic) NSSet *matchingCategories;
@property (retain, nonatomic) NSSet *matchingAlgorithms;
@property (retain, nonatomic) NSSet *excludingAlgorithms;
@property (nonatomic) _Bool excludingWithoutSentiment;

+ (_Bool)supportsSecureCoding;
+ (id)_algorithmsDescription:(id)arg1;
+ (id)_matchingCategoriesDescription:(id)arg1;
+ (id)queryForMapsWithLimit:(unsigned long long)arg1 fromDate:(id)arg2 consumerType:(unsigned long long)arg3;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToLocationQuery:(id)arg1;
- (id)customizedDescription;

@end
