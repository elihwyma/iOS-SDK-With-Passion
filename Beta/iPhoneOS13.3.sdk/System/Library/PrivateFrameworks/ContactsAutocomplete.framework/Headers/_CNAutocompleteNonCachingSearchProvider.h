/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _CNAutocompleteNonCachingSearchProvider : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)localSearch;
- (id)recentsSearch;
- (id)suggestionsSearch;
- (id)duetSearch;
- (id)localExtensionSearches;
- (id)directoryServerSearch;
- (id)calendarServerSearch;

@end
