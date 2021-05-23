/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

#import <Foundation/NSObject.h>

@class CNAutocompleteStoreQueryHelper, CNAutocompleteStoreReproStringRecorder, CNAutocompleteUserSession, CNCancelationToken;

@protocol CNAutocompleteProbeProvider, CNAutocompleteSearchProvider, CNScheduler;

@interface CNAutocompleteStore : NSObject

{
    double _fetchCoalescingInterval;
    CNAutocompleteStoreQueryHelper *_queryHelper;
    CNCancelationToken *_currentFetchToken;
    CNAutocompleteUserSession *_userSession;
    CNAutocompleteStoreReproStringRecorder *_reproStringRecorder;
    id <CNAutocompleteProbeProvider> _probeProvider;
    id <CNScheduler> _scheduler;
}

@property (nonatomic, readonly) CNAutocompleteStoreQueryHelper *queryHelper;
@property (weak, nonatomic) CNCancelationToken *currentFetchToken;
@property (retain, nonatomic) CNAutocompleteUserSession *userSession;
@property (retain, nonatomic) CNAutocompleteStoreReproStringRecorder *reproStringRecorder;
@property (nonatomic, readonly) id <CNAutocompleteProbeProvider> probeProvider;
@property (nonatomic, readonly) id <CNAutocompleteSearchProvider> searchProvider;
@property (nonatomic, readonly) id <CNScheduler> scheduler;
@property (nonatomic) double fetchCoalescingInterval;

+ (double)defaultFetchCoalescingInterval;

- (id)init;
- (id)initWithDelegate:(id)arg1;
- (id)executeFetchRequest:(id)arg1;
- (id)scheduleFetchRequest:(id)arg1;
- (id)scheduleFetchRequest:(id)arg1 delegate:(id)arg2;
- (void)userSelectedResult:(id)arg1 atSortedIndex:(unsigned long long)arg2;
- (void)ignoreResult:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithDelegate:(id)arg1 searchProvider:(id)arg2 probeProvider:(id)arg3 scheduler:(id)arg4;
- (id)executeFetchRequest:(id)arg1 delegate:(id)arg2;
- (id)executeFetchRequest:(id)arg1 afterDelay:(double)arg2 delegate:(id)arg3;

@end
