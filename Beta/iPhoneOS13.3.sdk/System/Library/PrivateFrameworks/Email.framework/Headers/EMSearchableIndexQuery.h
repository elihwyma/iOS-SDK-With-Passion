/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Foundation/NSObject.h>

#import <Email/Swift-Protocol.h>

@class CSSearchQuery, EFPromise, EMSearchableIndexQueryExpression, NSArray, NSError, NSLock, NSProgress, NSString;

@interface EMSearchableIndexQuery : NSObject <Swift>

{
    NSLock *_lock;
    NSProgress *_progress;
    NSProgress *_internalProgress;
    EFPromise *_resultsPromise;
    _Bool _counting;
    _Bool _live;
    _Bool _queryDidMoveToFinishedState;
    _Bool _liveQueryDidGather;
    NSString *_bundleIdentifier;
    CDUnknownBlockType _resultsBlock;
    CDUnknownBlockType _completionBlock;
    CDUnknownBlockType _failureBlock;
    CDUnknownBlockType _gatheredBlock;
    CDUnknownBlockType _changedItemsBlock;
    CDUnknownBlockType _removedItemsBlock;
    CDUnknownBlockType _countChangedBlock;
    NSArray *_fetchAttributes;
    NSArray *_protectionClasses;
    NSArray *_rankingQueries;
    long long _maxCount;
    NSString *_logIdentifier;
    EMSearchableIndexQueryExpression *_expression;
    NSString *_logPrefixString;
    NSString *_queryStatus;
    long long _count;
    NSError *_simulatedFailedQueryError;
    CSSearchQuery *_query;
}

@property (copy, nonatomic) NSString *logPrefixString;
@property (copy, nonatomic) NSString *queryStatus;
@property (nonatomic) _Bool queryDidMoveToFinishedState;
@property (nonatomic) _Bool liveQueryDidGather;
@property (nonatomic) long long count;
@property (retain, nonatomic) NSError *simulatedFailedQueryError;
@property (retain, nonatomic) CSSearchQuery *query;
@property (nonatomic, readonly) _Bool isCancelled;
@property (nonatomic, readonly) EMSearchableIndexQueryExpression *expression;
@property (nonatomic, readonly) _Bool isFinished;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) CDUnknownBlockType resultsBlock;
@property (copy, nonatomic) CDUnknownBlockType completionBlock;
@property (copy, nonatomic) CDUnknownBlockType failureBlock;
@property (copy, nonatomic) CDUnknownBlockType gatheredBlock;
@property (copy, nonatomic) CDUnknownBlockType changedItemsBlock;
@property (copy, nonatomic) CDUnknownBlockType removedItemsBlock;
@property (copy, nonatomic) CDUnknownBlockType countChangedBlock;
@property (copy, nonatomic) NSArray *fetchAttributes;
@property (copy, nonatomic) NSArray *protectionClasses;
@property (copy, nonatomic) NSArray *rankingQueries;
@property (nonatomic) long long maxCount;
@property (nonatomic) _Bool live;
@property (nonatomic) _Bool counting;
@property (copy, nonatomic) NSString *logIdentifier;
@property (readonly) unsigned long long signpostID;
@property (readonly) NSProgress *progress;

+ (id)log;
+ (id)queryStringByJoiningQueries:(id)arg1 withOperand:(long long)arg2;
+ (id)searchWordsForPhrase:(id)arg1 languages:(id)arg2;
+ (id)signpostLog;
+ (double)intervalForSpotlightFailureSimulation;
+ (id)queryWithExpression:(id)arg1 builder:(CDUnknownBlockType)arg2;
+ (id)_operandStringForOperand:(long long)arg1;
+ (id)_queryStringForPhrase:(id)arg1 attributes:(id)arg2 modifiers:(unsigned long long)arg3 phraseMatchFormatString:(id)arg4 comparisonOperator:(long long)arg5;
+ (id)_modifierStringFromModifiers:(unsigned long long)arg1;
+ (id)_queryStringForPhrase:(id)arg1 attributes:(id)arg2 modifiers:(unsigned long long)arg3 phraseMatchFormatString:(id)arg4;
+ (id)queryStringForPhrase:(id)arg1 attributes:(id)arg2 modifiers:(unsigned long long)arg3 languages:(id)arg4;
+ (id)queryStringForPhrase:(id)arg1 attributes:(id)arg2 modifiers:(unsigned long long)arg3 languages:(id)arg4 phraseMatchFormatString:(id)arg5 comparisonOperator:(long long)arg6;

- (id)init;
- (void)dealloc;
- (void)cancel;
- (void)start;
- (void)_completed;
- (void)_cancel;
- (void)_cancelQuery;
- (id)initWithExpression:(id)arg1 builder:(CDUnknownBlockType)arg2;
- (void)_searchQueryDidFailWithError:(id)arg1;
- (void)_removeResultsBlock;
- (void)_removeAllLiveUpdatesBlocks;
- (void)_searchQueryDidFindItems:(id)arg1;
- (void)_searchQueryDidComplete;
- (void)_searchQueryGatherDidEnd;
- (void)_searchQueryDidChangeItems:(id)arg1;
- (void)_searchQueryDidRemoveIdentifiers:(id)arg1;
- (void)_searchQueryDidChangeCount:(long long)arg1;
- (_Bool)_isFinishedQueryStatus:(id)arg1;
- (void)_logSignpostForSearchQueryDidFinishWithStatus:(id)arg1;
- (void)_logSignpostForSearchQueryDidReceiveFirstResultsWithItemCount:(unsigned long long)arg1;
- (_Bool)_isCancellationError:(id)arg1;
- (void)_failedWithError:(id)arg1;
- (void)_logSignpostForSearchQueryStart;
- (void)_foundItems:(id)arg1;
- (void)_performClientWork:(CDUnknownBlockType)arg1;
- (void)_gathered;
- (void)_changedItems:(id)arg1;
- (void)_removedItems:(id)arg1;
- (void)_changeCount:(long long)arg1;
- (void)simulateFailedQueryWithError:(id)arg1;

@end
