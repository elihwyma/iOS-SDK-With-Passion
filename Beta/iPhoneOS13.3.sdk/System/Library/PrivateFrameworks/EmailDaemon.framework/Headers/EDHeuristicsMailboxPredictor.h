/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class NSCache, NSDictionary, NSMutableString, NSString;

@protocol EDMailboxPredictionQueryAdapter, EMUserProfileProvider;

@interface EDHeuristicsMailboxPredictor : NSObject

{
    id <EMUserProfileProvider> _userProfileProvider;
    id <EDMailboxPredictionQueryAdapter> _library;
    NSDictionary *_parameters;
    NSCache *_mailboxIDCache;
    NSMutableString *_debugLog;
}

@property (retain, nonatomic) id <EMUserProfileProvider> userProfileProvider;
@property (retain, nonatomic) id <EDMailboxPredictionQueryAdapter> library;
@property (retain, nonatomic) NSDictionary *parameters;
@property (retain, nonatomic) NSCache *mailboxIDCache;
@property (retain, nonatomic) NSMutableString *debugLog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)predictMailboxIDsForMessages:(id)arg1 limit:(unsigned long long)arg2 diagnostics:(id *)arg3;
- (id)initWithUserProfileProvider:(id)arg1 queryAdapter:(id)arg2;
- (id)_mergeDefaultParameters:(id)arg1 withParameters:(id)arg2;
- (_Bool)_modeParameterIs:(id)arg1;
- (id)_predictionsForMessage:(id)arg1 limit:(unsigned long long)arg2;
- (id)_summedWeightedPredictionsForMessage:(id)arg1 limit:(unsigned long long)arg2;
- (id)_orderedModePredictionForMessage:(id)arg1;
- (id)_weightedModePredictionsForMessage:(id)arg1;
- (id)_countsForField:(id)arg1 message:(id)arg2;
- (id)_topHitFromMailboxDictionary:(id)arg1 message:(id)arg2;
- (id)_removeSpecialMailboxesInCounts:(id)arg1 message:(id)arg2;
- (id)_conversationIDCountsForMessage:(id)arg1;
- (id)_senderCountsForMessage:(id)arg1;
- (id)_recipientCountsForMessage:(id)arg1;
- (id)_listIDCountsForMessage:(id)arg1;
- (_Bool)_limitToRecents;
- (id)_groupedMessagesCountByMailboxMatchingQuery:(unsigned long long)arg1 variable:(id)arg2;
- (id)_allowedRecipientsForMessage:(id)arg1;
- (id)_userCreatedMailboxIDs;
- (id)_normalizedTermFrequencyTopHitFromDictionary:(id)arg1 withThreshold:(double)arg2;
- (id)_topHitFromMailboxDictionary:(id)arg1;
- (id)_objectWithMeasure:(double)arg1 timesHigherThanFollowUpInMeasures:(id)arg2;
- (_Bool)_isAllowedRecipient:(id)arg1;
- (id)initWithUserProfileProvider:(id)arg1 queryAdapter:(id)arg2 parameters:(id)arg3;

@end
