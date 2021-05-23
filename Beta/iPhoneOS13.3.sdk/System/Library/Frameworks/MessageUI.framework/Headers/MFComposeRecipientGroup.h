/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <MessageUI/MFComposeRecipient.h>

@class NSArray;

@interface MFComposeRecipientGroup : MFComposeRecipient

{
    NSArray *_children;
}

- (_Bool)isEqual:(id)arg1;
- (id)address;
- (id)label;
- (int)recordID;
- (id)children;
- (_Bool)isGroup;
- (id)displayString;
- (int)property;
- (void *)record;
- (id)compositeName;
- (id)commentedAddress;
- (_Bool)isRemovableFromSearchResults;
- (id)unlocalizedLabel;
- (id)initWithChildren:(id)arg1 displayString:(id)arg2;
- (id)placeholderName;
- (id)sortedChildren;
- (id)childrenWithCompleteMatches;
- (_Bool)wasCompleteMatch;
- (id)completelyMatchedAttributedStrings;
- (void)_populateSortedChildren;

@end
