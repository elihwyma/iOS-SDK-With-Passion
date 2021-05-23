/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/CNPredicate.h>

@class NSString;

@interface CNSuggestedContactIdentifierPredicate : CNPredicate

{
    unsigned long long _suggestionIdentifier;
}

@property (readonly) unsigned long long suggestionIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)cn_supportsNativeSorting;
- (id)sgContactMatchesWithSortOrder:(long long)arg1 mutableObjects:(_Bool)arg2 service:(id)arg3 error:(id *)arg4;
- (id)initWithSuggestionIdentifier:(unsigned long long)arg1;

@end
