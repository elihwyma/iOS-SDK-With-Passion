/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

#import <Foundation/NSObject.h>

@class CNUserDefaults, NSString;

@interface _CNAutocompleteUserDefaultsSourceInclusionPolicy : NSObject

{
    CNUserDefaults *_userDefaults;
}

@property (readonly) CNUserDefaults *userDefaults;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) _Bool includeContacts;
@property (readonly) _Bool includeRecents;
@property (readonly) _Bool includeSuggestions;
@property (readonly) _Bool includeLocalExtensions;
@property (readonly) _Bool includeDirectoryServers;
@property (readonly) _Bool includeCalendarServers;
@property (readonly) _Bool includeSupplementalResults;
@property (readonly) _Bool includePredictions;

- (id)initWithUserDefaults:(id)arg1;

@end
