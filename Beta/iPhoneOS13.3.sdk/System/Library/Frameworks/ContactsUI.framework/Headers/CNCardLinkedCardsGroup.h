/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNCardGroup.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface CNCardLinkedCardsGroup : CNCardGroup

{
    NSArray *_linkedContacts;
}

@property (retain, nonatomic) NSArray *linkedContacts;

- (id)title;
- (id)displayItems;
- (id)editingItems;

@end
