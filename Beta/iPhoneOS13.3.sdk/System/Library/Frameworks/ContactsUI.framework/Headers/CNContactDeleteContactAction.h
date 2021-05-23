/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNContactAction.h>

@class CNUICoreRecentsManager, CNUIExternalComponentsFactory;

__attribute__((visibility("hidden")))
@interface CNContactDeleteContactAction : CNContactAction

{
    CNUIExternalComponentsFactory *_componentsFactory;
    CNUICoreRecentsManager *_recentsManager;
}

@property (nonatomic, readonly) CNUIExternalComponentsFactory *componentsFactory;
@property (nonatomic, readonly) CNUICoreRecentsManager *recentsManager;

- (void)performActionWithSender:(id)arg1;
- (id)initWithContact:(id)arg1 recentsManager:(id)arg2 componentsFactory:(id)arg3;
- (_Bool)deleteContact;
- (void)showDeleteFailureAlert;

@end
