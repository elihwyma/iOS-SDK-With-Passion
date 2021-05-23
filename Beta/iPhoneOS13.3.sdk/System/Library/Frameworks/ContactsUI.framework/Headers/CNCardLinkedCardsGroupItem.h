/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNCardGroupItem.h>

@class CNContact;

__attribute__((visibility("hidden")))
@interface CNCardLinkedCardsGroupItem : CNCardGroupItem

{
    CNContact *_contact;
}

@property (retain, nonatomic) CNContact *contact;

- (id)initWithContact:(id)arg1;

@end
