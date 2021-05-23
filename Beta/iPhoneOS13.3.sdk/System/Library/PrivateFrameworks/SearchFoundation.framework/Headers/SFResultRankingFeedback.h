/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@class NSArray, SFSearchResult;

@interface SFResultRankingFeedback

{
    SFSearchResult *_result;
    NSArray *_hiddenResults;
    NSArray *_duplicateResults;
    unsigned long long _localResultPosition;
    double _personalizationScore;
}

@property (retain, nonatomic) SFSearchResult *result;
@property (copy, nonatomic) NSArray *hiddenResults;
@property (copy, nonatomic) NSArray *duplicateResults;
@property (nonatomic) unsigned long long localResultPosition;
@property (nonatomic) double personalizationScore;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResult:(id)arg1 hiddenResults:(id)arg2 duplicateResults:(id)arg3 localResultPosition:(unsigned long long)arg4;

@end
