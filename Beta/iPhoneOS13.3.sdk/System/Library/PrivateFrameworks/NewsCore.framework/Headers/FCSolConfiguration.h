/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@interface FCSolConfiguration : NSObject

{
    unsigned long long _maxArticleCombos;
    unsigned long long _heuristicSampleSize;
    unsigned long long _searchBranchMultiplier;
    double _searchBranchDecay;
    double _searchTimeLimit;
    double _tagSizeCoeff;
    double _tagFavoritedCoeff;
    double _tagAutoFavoritedCoeff;
    double _tagGroupableCoeff;
    double _tagArticleScoreCoeff;
    double _tagPersonalizationCoeff;
    double _tagSpecificityCoeff;
    double _optionalTagSpecificityScore;
    long long _heuristicOption;
}

@property (nonatomic, readonly) unsigned long long maxArticleCombos;
@property (nonatomic, readonly) unsigned long long heuristicSampleSize;
@property (nonatomic, readonly) unsigned long long searchBranchMultiplier;
@property (nonatomic, readonly) double searchBranchDecay;
@property (nonatomic, readonly) double searchTimeLimit;
@property (nonatomic, readonly) double tagSizeCoeff;
@property (nonatomic, readonly) double tagFavoritedCoeff;
@property (nonatomic, readonly) double tagAutoFavoritedCoeff;
@property (nonatomic, readonly) double tagGroupableCoeff;
@property (nonatomic, readonly) double tagArticleScoreCoeff;
@property (nonatomic, readonly) double tagPersonalizationCoeff;
@property (nonatomic, readonly) double tagSpecificityCoeff;
@property (nonatomic, readonly) double optionalTagSpecificityScore;
@property (nonatomic, readonly) long long heuristicOption;

+ (id)configurationWithTreatment:(id)arg1 deviceIsiPad:(_Bool)arg2;

- (id)initWithHeuristicSampleSize:(unsigned long long)arg1 searchBranchMultiplier:(unsigned long long)arg2 searchBranchDecay:(double)arg3 searchTimeLimit:(double)arg4 tagSizeCoeff:(double)arg5 tagFavoritedCoeff:(double)arg6 tagAutoFavoritedCoeff:(double)arg7 tagGroupableCoeff:(double)arg8 tagArticleScoreCoeff:(double)arg9 tagPersonalizationCoeff:(double)arg10 tagSpecificityCoeff:(double)arg11 optionalTagSpecificityScore:(double)arg12 heuristicOption:(long long)arg13;

@end
