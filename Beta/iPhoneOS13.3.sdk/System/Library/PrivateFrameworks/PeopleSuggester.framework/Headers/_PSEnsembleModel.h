/*
 Image: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
 */

#import <NSObject.h>

@class CNContactStore, NSArray, NSDictionary, NSSet, NSString, NSUserDefaults, TRIClient, TRITrackingId, _CDInteractionCache, _CDInteractionStore, _PSHeuristics, _PSInteractionAndContactMonitor, _PSKNNModel, _PSRuleMiningModel;

@protocol _DKKnowledgeQuerying><_DKKnowledgeSaving;

@interface _PSEnsembleModel : NSObject

{
    struct os_unfair_lock_s _lock;
    _CDInteractionStore *_interactionStore;
    id <_DKKnowledgeQuerying><_DKKnowledgeSaving> _knowledgeStore;
    _CDInteractionCache *_messageInteractionCache;
    _CDInteractionCache *_shareInteractionCache;
    NSUserDefaults *_peopleSuggesterDefaults;
    CNContactStore *_contactStore;
    NSArray *_defaultContactKeysToFetch;
    NSString *_trialID;
    _PSRuleMiningModel *_ruleMiningModel;
    _PSKNNModel *_knnModel;
    _PSKNNModel *_knnMapsModel;
    _PSKNNModel *_knnZkwModel;
    _PSKNNModel *_knnNameOrContactRankerModel;
    _PSHeuristics *_heuristics;
    _PSInteractionAndContactMonitor *_contactMonitor;
    NSSet *_cachedSupportedBundleIDs;
    NSDictionary *_psConfig;
    TRIClient *_trialClient;
    TRITrackingId *_trialTrackingID;
}

@property (retain, nonatomic) _PSRuleMiningModel *ruleMiningModel;
@property (retain, nonatomic) _PSKNNModel *knnModel;
@property (retain, nonatomic) _PSKNNModel *knnMapsModel;
@property (retain, nonatomic) _PSKNNModel *knnZkwModel;
@property (retain, nonatomic) _PSKNNModel *knnNameOrContactRankerModel;
@property (retain, nonatomic) _PSHeuristics *heuristics;
@property (retain, nonatomic) _PSInteractionAndContactMonitor *contactMonitor;
@property (retain, nonatomic) NSSet *cachedSupportedBundleIDs;
@property (retain) NSDictionary *psConfig;
@property (retain) TRIClient *trialClient;
@property (retain) TRITrackingId *trialTrackingID;
@property (retain, nonatomic) id <_DKKnowledgeQuerying><_DKKnowledgeSaving> knowledgeStore;
@property (retain, nonatomic) _CDInteractionStore *interactionStore;
@property (retain, nonatomic) _CDInteractionCache *messageInteractionCache;
@property (retain, nonatomic) _CDInteractionCache *shareInteractionCache;
@property (retain, nonatomic) NSUserDefaults *peopleSuggesterDefaults;
@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) NSArray *defaultContactKeysToFetch;
@property (retain, nonatomic) NSString *trialID;

- (id)init;
- (void)loadDefaultPSConfig;
- (_Bool)loadPSConfig:(id)arg1;
- (void)updateFactorLevels;
- (id)fetchShareSheetSupportedBundleIDs;
- (void)populateCachesWithSupportedBundleIDs:(id)arg1;
- (id)predictWithPredictionContext:(id)arg1 maxSuggestions:(unsigned long long)arg2 contactKeysToFetch:(id)arg3;
- (id)suggestionsFromSuggestionProxies:(id)arg1 supportedBundleIDs:(id)arg2 contactKeysToFetch:(id)arg3 meContactIdentifier:(id)arg4 maxSuggestions:(unsigned long long)arg5;
- (void)updateTrialID:(id)arg1;
- (id)mapsSuggestionArrayWithArray:(id)arg1 appendingUniqueElementsFromArray:(id)arg2 contactResolver:(id)arg3 meContactId:(id)arg4;
- (void)registerWithTrial;
- (void)populateCaches;
- (id)predictWithPredictionContext:(id)arg1 maxSuggestions:(unsigned long long)arg2;
- (id)predictWithMapsPredictionContext:(id)arg1 maxSuggestions:(unsigned long long)arg2;
- (id)suggestZKWMessagesSuggestionsWithPredictionContext:(id)arg1 maxSuggestions:(unsigned long long)arg2;
- (id)rankedContactSuggestionsWithPredictionContext:(id)arg1 contactsOnly:(_Bool)arg2 maxSuggestions:(unsigned long long)arg3;
- (id)rankedNameSuggestionsWithPredictionContext:(id)arg1 name:(id)arg2;
- (id)rankedAutocompleteSuggestionsFromContext:(id)arg1 candidates:(id)arg2;
- (id)appExtensionSuggestionsFromContext:(id)arg1;

@end
