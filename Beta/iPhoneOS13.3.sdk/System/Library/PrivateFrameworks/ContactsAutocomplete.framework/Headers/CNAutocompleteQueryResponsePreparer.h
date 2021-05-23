/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

#import <Foundation/NSObject.h>

@class CNAutocompleteFetchRequest, NSMutableOrderedSet;

@protocol CNAutocompleteFetchDelegate, CNFuture, CNPromise;

@interface CNAutocompleteQueryResponsePreparer : NSObject

{
    NSMutableOrderedSet *_previouslyReturnedResults;
    id <CNAutocompleteFetchDelegate> _delegate;
    CNAutocompleteFetchRequest *_fetchRequest;
    id <CNFuture> _priorityResultsFuture;
    id <CNPromise> _matchingPriorityResultsPromise;
}

@property (weak, nonatomic, readonly) id <CNAutocompleteFetchDelegate> delegate;
@property (nonatomic, readonly) CNAutocompleteFetchRequest *fetchRequest;
@property (retain, nonatomic) id <CNFuture> priorityResultsFuture;
@property (retain, nonatomic) id <CNPromise> matchingPriorityResultsPromise;

+ (id)bundleIdentifierOfCurrentProcess;
+ (id)makeBundleIdentifierOfCurrentProcess;

- (id)init;
- (id)initWithDelegate:(id)arg1;
- (id)sortResults;
- (id)initWithDelegate:(id)arg1 fetchRequest:(id)arg2;
- (id)addDiagnosticLog:(CDUnknownBlockType)arg1;
- (id)askDelegateToAdjustResults;
- (id)suppressResultsWithAddresses:(id)arg1;
- (id)prepareResults:(id)arg1;
- (id)findUniqueResults:(id)arg1;
- (id)resultsNotPreviouslyReturned:(id)arg1;
- (id)applyPriorityResultsOrder:(id)arg1;
- (id)partitionCandidatesForRanking:(id)arg1;
- (_Bool)resultIdentifierIsValidMessagesChatGuid:(id)arg1;
- (_Bool)resultMatchesPrefix:(id)arg1 inNameComponentsOfResult:(id)arg2;

@end
