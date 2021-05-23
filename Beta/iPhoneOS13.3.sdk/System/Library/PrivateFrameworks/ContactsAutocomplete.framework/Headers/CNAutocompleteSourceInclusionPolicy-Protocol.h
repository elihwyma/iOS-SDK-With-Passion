/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

#import <ContactsAutocomplete/Swift-Protocol.h>

@protocol CNAutocompleteSourceInclusionPolicy <Swift>

@property (readonly) _Bool includeContacts;
@property (readonly) _Bool includeRecents;
@property (readonly) _Bool includeSuggestions;
@property (readonly) _Bool includeLocalExtensions;
@property (readonly) _Bool includeDirectoryServers;
@property (readonly) _Bool includeCalendarServers;
@property (readonly) _Bool includeSupplementalResults;
@property (readonly) _Bool includePredictions;

@end
