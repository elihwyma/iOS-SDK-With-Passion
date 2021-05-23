/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
 */

#import <ContactsAutocompleteUI/CNComposeRecipient.h>

@class NSArray;

@interface CNUnifiedComposeRecipient : CNComposeRecipient

{
    NSArray *_children;
}

- (_Bool)isEqual:(id)arg1;
- (id)children;
- (id)initWithChildren:(id)arg1 defaultChild:(id)arg2;
- (id)sortedChildren;
- (_Bool)showsChevronButton;

@end
