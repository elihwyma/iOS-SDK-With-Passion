/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

#import <Foundation/NSObject.h>

@protocol CNAutocompleteProbeProvider;

@interface CNAutocompleteUsageMonitor : NSObject

{
    id <CNAutocompleteProbeProvider> _probeProvider;
}

@property (nonatomic, readonly) id <CNAutocompleteProbeProvider> probeProvider;

+ (void)userSelectedResult:(id)arg1 atSortedIndex:(unsigned long long)arg2 forRequest:(id)arg3 gotResultsFromDuet:(_Bool)arg4;
+ (void)userIgnoredResultsForRequest:(id)arg1 afterDelay:(double)arg2;

- (id)init;
- (id)initWithProbeProvider:(id)arg1;
- (void)userIgnoredResultsOfBatch:(unsigned long long)arg1 forRequest:(id)arg2 afterDelay:(double)arg3;
- (void)userSawNumberOfResults:(unsigned long long)arg1 forBatch:(unsigned long long)arg2 includingNumberOfSuggestions:(unsigned long long)arg3 forRequest:(id)arg4;
- (void)userSelectedResult:(id)arg1 atSortedIndex:(unsigned long long)arg2 forRequest:(id)arg3 gotResultsFromDuet:(_Bool)arg4;

@end
