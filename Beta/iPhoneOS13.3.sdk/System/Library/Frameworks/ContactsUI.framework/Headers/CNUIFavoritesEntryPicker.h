/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class CNContact, CNContactActionsController, NSString, UIAlertController;

@protocol CNUIFavoritesEntryPickerDelegate;

@interface CNUIFavoritesEntryPicker : NSObject

{
    id <CNUIFavoritesEntryPickerDelegate> _delegate;
    CNContact *_contact;
    UIAlertController *_alertController;
    CNContactActionsController *_actionsController;
}

@property (retain, nonatomic) UIAlertController *alertController;
@property (retain, nonatomic) CNContactActionsController *actionsController;
@property (weak, nonatomic) id <CNUIFavoritesEntryPickerDelegate> delegate;
@property (nonatomic, readonly) CNContact *contact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)descriptorForRequiredKeys;

- (id)viewController;
- (id)initWithContact:(id)arg1;
- (void)contactActionsController:(id)arg1 didSelectAction:(id)arg2;

@end
