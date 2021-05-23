/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNPropertyAction.h>

@class CNContactActionsController, CNUIUserActionListDataSource, NSString, UIAlertController;

__attribute__((visibility("hidden")))
@interface CNPropertySendMessageAction : CNPropertyAction

{
    UIAlertController *_alertController;
    CNContactActionsController *_actionsController;
    CNUIUserActionListDataSource *_actionsDataSource;
}

@property (retain, nonatomic) UIAlertController *alertController;
@property (retain, nonatomic) CNContactActionsController *actionsController;
@property (retain, nonatomic) CNUIUserActionListDataSource *actionsDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)performActionWithSender:(id)arg1;
- (void)performActionForItem:(id)arg1 sender:(id)arg2;
- (void)contactActionsController:(id)arg1 didSelectAction:(id)arg2;
- (void)presentDisambiguationAlertWithSender:(id)arg1;
- (id)initWithContact:(id)arg1 propertyItems:(id)arg2 actionDataSource:(id)arg3;

@end
