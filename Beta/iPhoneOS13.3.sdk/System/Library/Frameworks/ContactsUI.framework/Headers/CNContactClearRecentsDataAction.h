/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNContactAction.h>

@class CNContactRecentsReference, CNUICoreRecentsManager;

__attribute__((visibility("hidden")))
@interface CNContactClearRecentsDataAction : CNContactAction

{
    CNContactRecentsReference *_recentsData;
    CNUICoreRecentsManager *_coreRecentsManager;
}

@property (nonatomic, readonly) CNContactRecentsReference *recentsData;
@property (nonatomic, readonly) CNUICoreRecentsManager *coreRecentsManager;

- (id)title;
- (_Bool)isDestructive;
- (_Bool)canPerformAction;
- (void)performActionWithSender:(id)arg1;
- (id)initWithRecentsData:(id)arg1 coreRecentsManager:(id)arg2;

@end
