/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
 */

#import <ContactsAutocompleteUI/CNComposeRecipient.h>

@class NSArray;

@interface CNComposeRecipientGroup : CNComposeRecipient

{
    NSArray *_children;
}

- (_Bool)isEqual:(id)arg1;
- (id)address;
- (id)label;
- (id)children;
- (_Bool)isGroup;
- (id)displayString;
- (id)compositeName;
- (id)commentedAddress;
- (id)unlocalizedLabel;
- (id)initWithChildren:(id)arg1 displayString:(id)arg2;
- (id)placeholderName;
- (id)sortedChildren;
- (id)childrenWithCompleteMatches;
- (_Bool)wasCompleteMatch;
- (id)completelyMatchedAttributedStrings;
- (void)_populateSortedChildren;
- (_Bool)showsChevronButton;

@end
