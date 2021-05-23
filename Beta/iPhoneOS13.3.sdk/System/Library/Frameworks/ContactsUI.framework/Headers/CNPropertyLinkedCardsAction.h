/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNPropertyAction.h>

@class CNContactContentViewController, CNMutableContact;

@protocol CNContactContentViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface CNPropertyLinkedCardsAction : CNPropertyAction

{
    id <CNContactContentViewControllerDelegate> _contactDelegate;
    CNContactContentViewController *_contactController;
    CNMutableContact *_linkedContact;
}

@property (retain) CNContactContentViewController *contactController;
@property (retain) CNMutableContact *linkedContact;
@property (weak) id <CNContactContentViewControllerDelegate> contactDelegate;

- (void)dealloc;
- (id)initWithContact:(id)arg1;
- (void)performActionForItem:(id)arg1 sender:(id)arg2;
- (void)setPreferredForImage;
- (void)setPreferredForName;

@end
