/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _CNAutocompleteMutableSourceInclusionPolicy : NSObject

{
    _Bool _includeContacts;
    _Bool _includeRecents;
    _Bool _includeSuggestions;
    _Bool _includeLocalExtensions;
    _Bool _includeDirectoryServers;
    _Bool _includeCalendarServers;
    _Bool _includeSupplementalResults;
    _Bool _includePredictions;
}

@property _Bool includeContacts;
@property _Bool includeRecents;
@property _Bool includeSuggestions;
@property _Bool includeLocalExtensions;
@property _Bool includeDirectoryServers;
@property _Bool includeCalendarServers;
@property _Bool includeSupplementalResults;
@property _Bool includePredictions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

@end
