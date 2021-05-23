/*
 Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSString, PRSQueryRankingConfiguration;

@interface PRSRankingItemRanker : NSObject

{
    PRSQueryRankingConfiguration *_rankingConfiguration;
    _Bool _isInternalDevice;
    _Bool _policyDisabled;
    _Bool _isCancelled;
    _Bool _isCJK;
    _Bool _hasPolicyPhraseMatch;
    _Bool _exact;
    float _lastIsSpaceFeature;
    NSString *_keyboardLanguage;
    NSString *_searchString;
    NSString *_userQueryString;
    unsigned long long _queryTermCount;
    NSMapTable *_bundleFeatures;
    double _experimentalWeight1;
    double _experimentalWeight2;
    NSString *_meContactIdentifier;
    double _currentTime;
}

@property (retain, nonatomic) NSString *keyboardLanguage;
@property (retain, nonatomic) NSString *searchString;
@property (retain, nonatomic) NSString *userQueryString;
@property unsigned long long queryTermCount;
@property _Bool isInternalDevice;
@property (retain, nonatomic) NSMapTable *bundleFeatures;
@property (nonatomic) double experimentalWeight1;
@property (nonatomic) double experimentalWeight2;
@property (retain, nonatomic) NSString *meContactIdentifier;
@property (nonatomic) _Bool policyDisabled;
@property (nonatomic) float lastIsSpaceFeature;
@property _Bool isCancelled;
@property _Bool isCJK;
@property (nonatomic) double currentTime;
@property (nonatomic) _Bool hasPolicyPhraseMatch;
@property (nonatomic) _Bool exact;

+ (void)clearState;
+ (id)phoneFavoritesCopy;
+ (_Bool)isCJK;
+ (id)sortedUniqueBundleFeatureValuesFromBundleFeatures:(id)arg1;
+ (id)importantAttributesForBundle:(id)arg1;
+ (void)setDockApps:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)cancel;
- (void)activate;
- (void)deactivate;
- (id)rankingConfiguration;
- (_Bool)wasItemCreatedWithinAWeek:(id)arg1;
- (float *)computeScoresForVectors:(id)arg1 withBundleFeatures:(id)arg2;
- (id)initWithSearchString:(id)arg1 language:(id)arg2 isCJK:(_Bool)arg3 experimentalWeight1:(double)arg4 experimentalWeight2:(double)arg5 currentTime:(double)arg6;
- (id)initWithSearchString:(id)arg1 userQueryString:(id)arg2 language:(id)arg3 isCJK:(_Bool)arg4 experimentalWeight1:(double)arg5 experimentalWeight2:(double)arg6 currentTime:(double)arg7;
- (id)rankingConfigurationWithMeContact:(id)arg1 emailAddresses:(id)arg2 phoneFavorites:(id)arg3 vipList:(id)arg4 clientBundle:(id)arg5 isScopedSearch:(_Bool)arg6 spotlightQuery:(id)arg7 userQuery:(id)arg8 whyQuery:(unsigned long long)arg9 isPeopleSearch:(_Bool)arg10;
- (void)relevantResultSetPRSL2FeaturesFromBundleFeature:(unsigned long long)arg1 absRankFeatureOut:(unsigned short *)arg2 relRankFeatureOut:(unsigned short *)arg3;
- (void)pickMostRecentDateForItem:(id)arg1 pastItems:(id *)arg2 futureItems:(id *)arg3;
- (void)computeRelativeFeatureForContext:(id)arg1 items:(id)arg2;
- (void)updateResultSetContext:(struct _resultset_computation_ctx *)arg1 andUniqueScores:(id)arg2 withResultSetItems:(id)arg3;
- (void)updateResultSetFeaturesOnItems:(id)arg1 withContext:(struct _resultset_computation_ctx *)arg2 uniqueScores:(id)arg3;
- (void)populateRankResultSetBundleFeaturesWithBundleItems:(id)arg1 withUniqueBundleMaxScores:(id)arg2;
- (void)populateLocalResultSetDateFeaturesForItems:(id)arg1;
- (void)populateMailContactFeaturesWithMailItems:(id)arg1 contactItems:(id)arg2;
- (CDUnknownBlockType)comparatorByJoiningComparator:(CDUnknownBlockType)arg1 withPredicate:(id)arg2;
- (void)updateScoresForPreparedItems:(id)arg1 isCJK:(_Bool)arg2 clientBundle:(id)arg3;
- (void)computeResultSetDependantFeatures:(id)arg1 allItems:(id)arg2;
- (void)computePolicyFeaturesForBundleItems:(id)arg1 isCJK:(_Bool)arg2;
- (void)rerankItemsWithPolicyForBundleItems:(id)arg1 isCJK:(_Bool)arg2;
- (void)setRenderEngagementFeaturesForItemAsShorts:(id)arg1 counts:(short [6])arg2 isRender:(_Bool)arg3 bundleDict:(id)arg4;
- (void)resetbundleFeaturesScratchBuf:(float *)arg1;
- (id)initWithSearchString:(id)arg1 language:(id)arg2 currentTime:(double)arg3;
- (id)initWithSearchString:(id)arg1 userQueryString:(id)arg2 language:(id)arg3 currentTime:(double)arg4;
- (id)rankingConfigurationWithMeContact:(id)arg1 emailAddresses:(id)arg2 phoneFavorites:(id)arg3 vipList:(id)arg4 clientBundle:(id)arg5 isScopedSearch:(_Bool)arg6 spotlightQuery:(id)arg7;
- (void)updateScoresForPreparedItems:(id)arg1;
- (void)setRenderEngagementFeaturesForItem:(id)arg1 counts:(id)arg2 isRender:(_Bool)arg3 bundleDict:(id)arg4;
- (void)prepareItems:(id)arg1 inBundle:(id)arg2;

@end
