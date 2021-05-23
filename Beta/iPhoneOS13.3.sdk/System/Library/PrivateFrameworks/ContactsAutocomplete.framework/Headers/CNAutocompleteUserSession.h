/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

#import <Foundation/NSObject.h>

@class CNAutocompleteFetchRequest, CNAutocompleteUsageMonitor, NSDate, _CNAutocompleteUserSessionDisplayedResults;

@protocol CNAutocompleteProbeProvider, CNFuture, OS_dispatch_queue;

@interface CNAutocompleteUserSession : NSObject

{
    id <CNAutocompleteProbeProvider> _probeProvider;
    CNAutocompleteFetchRequest *_currentRequest;
    unsigned long long _currentBatch;
    _CNAutocompleteUserSessionDisplayedResults *_lastDisplayedResults;
    NSDate *_requestStartTime;
    CNAutocompleteUsageMonitor *_usageMonitor;
    NSObject<OS_dispatch_queue> *_syncQueue;
    id <CNFuture> _duetResultsFuture;
}

@property (nonatomic, readonly) id <CNAutocompleteProbeProvider> probeProvider;
@property (retain, nonatomic) CNAutocompleteFetchRequest *currentRequest;
@property (nonatomic) unsigned long long currentBatch;
@property (retain, nonatomic) _CNAutocompleteUserSessionDisplayedResults *lastDisplayedResults;
@property (retain, nonatomic) NSDate *requestStartTime;
@property (retain, nonatomic) CNAutocompleteUsageMonitor *usageMonitor;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
@property (retain, nonatomic) id <CNFuture> duetResultsFuture;

- (void)_resetState;
- (id)initWithProbeProvider:(id)arg1;
- (void)willStartDuetRequestWithMatchingResultsFuture:(id)arg1;
- (void)willStartExecutingRequest:(id)arg1;
- (void)didReceiveResults:(id)arg1 forRequest:(id)arg2;
- (void)didSelectResult:(id)arg1 atSortedIndex:(unsigned long long)arg2;

@end
