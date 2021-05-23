/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CNAutocompleteLocalGroupsFetcher : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)resultsForSearchString:(id)arg1 terms:(id)arg2 properties:(id)arg3 contactStore:(id)arg4 error:(id *)arg5;
- (id)autocompleteResultsForProperties:(id)arg1 fetchResults:(id)arg2 resultFactory:(id)arg3 contactStore:(id)arg4;

@end
