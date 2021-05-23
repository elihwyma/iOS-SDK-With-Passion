/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

#import <ContactsAutocomplete/Swift-Protocol.h>

@protocol CNAutocompleteSearchProvider <Swift>

- (unsigned short)localSearch;
- (unsigned short)recentsSearch;
- (unsigned short)suggestionsSearch;
- (unsigned short)duetSearch;
- (unsigned short)localExtensionSearches;
- (unsigned short)directoryServerSearch;
- (unsigned short)calendarServerSearch;

@end
