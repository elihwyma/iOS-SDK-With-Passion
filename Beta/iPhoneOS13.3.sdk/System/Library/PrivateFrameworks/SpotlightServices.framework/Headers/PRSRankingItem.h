/*
 Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

#import <Foundation/NSObject.h>

@class MISSING_TYPE, NSArray, NSData, NSMutableArray, NSString, PRSL2FeatureVector, PRSRankingSpanCalculator;

@interface PRSRankingItem : NSObject

{
    _Bool _isInternal;
    _Bool _eligibleForDemotion;
    _Bool _shouldHideUnderShowMore;
    _Bool _matchedQueryTerms;
    _Bool _isPrepared;
    unsigned short _bundleIDType;
    float _rawScore;
    float _feedbackScore;
    float _score;
    float _withinBundleScore;
    NSString *_identifier;
    NSString *_sectionBundleIdentifier;
    PRSL2FeatureVector *_L2FeatureVector;
    NSData *_serverFeaturesJSON;
    double _mostRecentUsedDate;
    double _closestUpComingDate;
    // Error: parsing type: '^{?=q[2Q]TT[0^v]}', name: _attributes
    PRSRankingSpanCalculator *_spanCalculator;
    NSMutableArray *_matchedSenders;
    NSMutableArray *_matchedVipSenders;
    NSMutableArray *_matchedRecipients;
    NSArray *_emailAddresses;
    unsigned long long _importantPropertiesPrefixMatched;
    unsigned long long _importantPropertiesWordMatched;
    NSString *_contentType;
    MISSING_TYPE *_indexScore;
    MISSING_TYPE *_inputToModelScore;
}

// Error parsing type for property attributes:
// Property attributes: T^{?=q[2Q]TT[0^v]},N,V_attributes

@property (nonatomic) MISSING_TYPE *indexScore;
@property (retain, nonatomic) PRSRankingSpanCalculator *spanCalculator;
@property (nonatomic) MISSING_TYPE *inputToModelScore;
@property (retain, nonatomic) NSMutableArray *matchedSenders;
@property (retain, nonatomic) NSMutableArray *matchedVipSenders;
@property (retain, nonatomic) NSMutableArray *matchedRecipients;
@property (retain, nonatomic) NSArray *emailAddresses;
@property (nonatomic) unsigned long long importantPropertiesPrefixMatched;
@property (nonatomic) unsigned long long importantPropertiesWordMatched;
@property (nonatomic) unsigned short bundleIDType;
@property (nonatomic) _Bool isPrepared;
@property (retain, nonatomic) NSString *contentType;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) float rawScore;
@property (nonatomic) float feedbackScore;
@property (nonatomic) float score;
@property (nonatomic) float withinBundleScore;
@property (retain, nonatomic) NSString *sectionBundleIdentifier;
@property (retain, nonatomic) PRSL2FeatureVector *L2FeatureVector;
@property (retain, nonatomic) NSData *serverFeaturesJSON;
@property (nonatomic) _Bool eligibleForDemotion;
@property (nonatomic) _Bool shouldHideUnderShowMore;
@property (nonatomic) _Bool matchedQueryTerms;
@property (nonatomic) double mostRecentUsedDate;
@property (nonatomic) double closestUpComingDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (id)rankingDescriptorForBundleFeature:(unsigned long long)arg1;
+ (unsigned short)featureFromVirtualIdx:(unsigned long long)arg1;
+ (unsigned long long)indexOfShortcutBit;

- (void)dealloc;
- (id)displayName;
- (id)interestingDate;
- (id)dataCollectionBundle;
- (_Bool)serializeToJSON:(void *)arg1 valuesOnly:(_Bool)arg2;
- (void)updateAccumulatedBundleFeatures:(float *)arg1 values:(float *)arg2 feature:(unsigned long long)arg3;
- (void)updateScoreDescriptorBundleFeatures:(float *)arg1 feature:(unsigned long long)arg2;
- (void)updateNumScoreDescriptorBundleFeatures:(float *)arg1 feature:(unsigned long long)arg2 featureScoreInfo:(struct PRSL2FeatureScoreInfo *)arg3;
- (void)populateContactFeatures:(struct PRSL2FeatureScoreInfo *)arg1 currentTime:(double)arg2;
- (void)populateMailFeatures:(struct PRSL2FeatureScoreInfo *)arg1;
- (void)populateSMSFeatures:(struct PRSL2FeatureScoreInfo *)arg1;
- (void)inferDateBinsFromDates:(id)arg1 intoBins:(int *)arg2;
- (void)populateTextFeatureValuesForProperty:(id)arg1 updatingBundleFeatureValues:(float (*)[0])arg2 propertyIndex:(unsigned long long)arg3 withEvaluator:(id)arg4 withContext:(struct prs_feature_population_ctx_t *)arg5 featureScoreInfo:(struct PRSL2FeatureScoreInfo *)arg6 propertyCanFuzzyMatch:(_Bool)arg7 keyboardLanguage:(id)arg8 isCJK:(_Bool)arg9;
- (void)populateCrossAttributeDerivedFeaturesWithContext:(struct prs_feature_population_ctx_t *)arg1 featureScoreInfo:(struct PRSL2FeatureScoreInfo *)arg2;
- (void)populateBundleSpecificFeatures:(struct PRSL2FeatureScoreInfo *)arg1 currentTime:(double)arg2;
- (void)populateOtherFeatures:(struct PRSL2FeatureScoreInfo *)arg1;
- (void)updateBundleFeatures:(float *)arg1 withArrValues:(float (*)[0])arg2 featureScoreInfo:(struct PRSL2FeatureScoreInfo *)arg3;
- (id)moreRecentDateFromDate1:(id)arg1 date2:(id)arg2;
- (long long)compareWithDates:(id)arg1 currentTime:(double)arg2;
- (id)likelyDisplayTitle;
-  // Error parsing type: @24@0:8^{?=q[2Q]TT[0^v]}16 name: initWithAttrs:
- (_Bool)didMatchRankingDescriptor:(id)arg1;
- (void)populateFeaturesWithEvaluator:(id)arg1 updatingBundleFeatures:(float *)arg2 withContext:(struct prs_feature_population_ctx_t *)arg3 keyboardLanguage:(id)arg4 isCJK:(_Bool)arg5 currentTime:(double)arg6;
- (long long)compareWithTypes:(id)arg1;
- (long long)compare:(id)arg1 currentTime:(double)arg2;
- (long long)recencyTestForVisibilityWithCurrentTime:(double)arg1;
- (long long)passesRecencyTestWithCurrentTime:(double)arg1;

@end
