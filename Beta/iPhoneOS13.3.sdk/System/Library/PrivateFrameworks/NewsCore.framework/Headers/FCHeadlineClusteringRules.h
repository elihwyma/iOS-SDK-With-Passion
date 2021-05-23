/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCSolConfiguration;

@interface FCHeadlineClusteringRules : NSObject

{
    _Bool _enforcePublisherCap;
    _Bool _enableOptimizedLayout;
    unsigned long long _minClusterSize;
    unsigned long long _maxClusterSize;
    unsigned long long _minIdealClusterSize;
    unsigned long long _maxIdealClusterSize;
    unsigned long long _maxPublisherOccurrences;
    unsigned long long _maxUnpaidArticles;
    unsigned long long _optimizedLayoutSizeThreshold;
    unsigned long long _optimizedLayoutIncrementUnit;
    double _minSubscribedChannelRatioForUGroup;
    double _maxExpandedAutofavoriteGroupCandidateRatio;
    double _expandedAutofavoriteClusterMinSizeMultiplier;
    double _expandedAutofavoriteClusterMaxSizeMultiplier;
    double _autoFavoriteClusterMinSizeMultiplier;
    double _autoFavoriteClusterMaxSizeMultiplier;
    FCSolConfiguration *_solConfiguration;
    unsigned long long _minClusterSizeAutoFavorite;
    unsigned long long _maxClusterSizeAutoFavorite;
    unsigned long long _minIdealClusterSizeAutoFavorite;
    unsigned long long _maxIdealClusterSizeAutoFavorite;
}

@property (nonatomic) unsigned long long minClusterSizeAutoFavorite;
@property (nonatomic) unsigned long long maxClusterSizeAutoFavorite;
@property (nonatomic) unsigned long long minIdealClusterSizeAutoFavorite;
@property (nonatomic) unsigned long long maxIdealClusterSizeAutoFavorite;
@property (nonatomic, readonly) unsigned long long minClusterSize;
@property (nonatomic, readonly) unsigned long long maxClusterSize;
@property (nonatomic, readonly) unsigned long long minIdealClusterSize;
@property (nonatomic, readonly) unsigned long long maxIdealClusterSize;
@property (nonatomic, readonly) unsigned long long maxPublisherOccurrences;
@property (nonatomic, readonly) _Bool enforcePublisherCap;
@property (nonatomic, readonly) unsigned long long maxUnpaidArticles;
@property (nonatomic, readonly) _Bool enableOptimizedLayout;
@property (nonatomic, readonly) unsigned long long optimizedLayoutSizeThreshold;
@property (nonatomic, readonly) unsigned long long optimizedLayoutIncrementUnit;
@property (nonatomic, readonly) double minSubscribedChannelRatioForUGroup;
@property (nonatomic, readonly) double maxExpandedAutofavoriteGroupCandidateRatio;
@property (nonatomic, readonly) double expandedAutofavoriteClusterMinSizeMultiplier;
@property (nonatomic, readonly) double expandedAutofavoriteClusterMaxSizeMultiplier;
@property (nonatomic) double autoFavoriteClusterMinSizeMultiplier;
@property (nonatomic) double autoFavoriteClusterMaxSizeMultiplier;
@property (retain, nonatomic) FCSolConfiguration *solConfiguration;

+ (id)rulesWithTreatment:(id)arg1 deviceIsiPad:(_Bool)arg2 limitUnpaidArticles:(_Bool)arg3 enforcePublisherCap:(_Bool)arg4;
+ (id)rulesWithTreatment:(id)arg1 configurationSet:(long long)arg2 deviceIsiPad:(_Bool)arg3 limitUnpaidArticles:(_Bool)arg4 enforcePublisherCap:(_Bool)arg5;

- (id)init;
- (id)initWithMinClusterSize:(unsigned long long)arg1 maxClusterSize:(unsigned long long)arg2 minIdealClusterSize:(unsigned long long)arg3 maxIdealClusterSize:(unsigned long long)arg4 minClusterSizeAutoFavorite:(unsigned long long)arg5 maxClusterSizeAutoFavorite:(unsigned long long)arg6 minIdealClusterSizeAutoFavorite:(unsigned long long)arg7 maxIdealClusterSizeAutoFavorite:(unsigned long long)arg8 maxPublisherOccurrences:(unsigned long long)arg9 enforcePublisherCap:(_Bool)arg10 maxUnpaidArticles:(unsigned long long)arg11 enableOptimizedLayout:(_Bool)arg12 optimizedLayoutSizeThreshold:(unsigned long long)arg13 optimizedLayoutIncrementUnit:(unsigned long long)arg14 solConfiguration:(id)arg15 minSubscribedChannelRatioForUGroup:(double)arg16 maxExpandedAutofavoriteGroupCandidateRatio:(double)arg17 expandedAutofavoriteClusterMinSizeMultiplier:(double)arg18 expandedAutofavoriteClusterMaxSizeMultiplier:(double)arg19;

@end
