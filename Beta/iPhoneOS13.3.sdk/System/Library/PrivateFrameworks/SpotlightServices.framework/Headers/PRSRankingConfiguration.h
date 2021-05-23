/*
 Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSMutableOrderedSet, NSString, PRSRankingServerKnobs, SSPlistDataReader;

@interface PRSRankingConfiguration : NSObject

{
    _Bool _allow_coreduet_influence;
    _Bool _disableResultTruncation;
    NSMutableDictionary *_categoryEngagements;
    NSArray *_rankingQueries;
    NSMutableDictionary *_queryDependentCategoryProbabilities;
    SSPlistDataReader *_queryIndependentCategoryProbabilities;
    NSMutableOrderedSet *_cepBlacklistSet;
    NSArray *_parsecCategoryOrder;
    NSString *_shortcutSectionBundleID;
    NSDictionary *_sqfData;
    NSDictionary *_serverFeatures;
    PRSRankingServerKnobs *_serverKnobs;
}

@property (retain) NSMutableDictionary *categoryEngagements;
@property (retain) NSArray *rankingQueries;
@property (retain) NSMutableDictionary *queryDependentCategoryProbabilities;
@property (retain) SSPlistDataReader *queryIndependentCategoryProbabilities;
@property (retain) NSMutableOrderedSet *cepBlacklistSet;
@property (retain) NSArray *parsecCategoryOrder;
@property (retain) NSString *shortcutSectionBundleID;
@property _Bool allow_coreduet_influence;
@property (retain) NSDictionary *sqfData;
@property (retain) NSDictionary *serverFeatures;
@property (retain) PRSRankingServerKnobs *serverKnobs;
@property _Bool disableResultTruncation;

- (id)init;
- (void)mergeWith:(id)arg1;
- (void)updateWithSQFData:(id)arg1;
- (void)appendToExistingCEPBlacklist:(id)arg1;
- (void)updateQueryDependentProbabilityAndBlacklistSetWith:(id)arg1;
- (double)queryDependentProbabilityForCategory:(id)arg1;
- (float)engagementProbabilityForCategory:(id)arg1;
- (double)queryIndependentProbabilityForCategory:(id)arg1;

@end
