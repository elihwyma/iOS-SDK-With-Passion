/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol CNFuture;

@interface _CNAutocompleteCachingSearchProvider : NSObject

{
    id <CNFuture> _localSearchFuture;
    id <CNFuture> _recentsSearchFuture;
    id <CNFuture> _suggestionsSearchFuture;
    id <CNFuture> _duetSearchFuture;
    id <CNFuture> _localExtensionSearchesFuture;
    id <CNFuture> _directoryServerSearchFuture;
    id <CNFuture> _calendarServerSearchFuture;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)localSearch;
- (id)initWithSearchProvider:(id)arg1;
- (id)recentsSearch;
- (id)suggestionsSearch;
- (id)duetSearch;
- (id)localExtensionSearches;
- (id)directoryServerSearch;
- (id)calendarServerSearch;

@end
