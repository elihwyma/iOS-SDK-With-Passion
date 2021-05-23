/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNContactContentViewController.h>

#import <ContactsUI/Swift-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNContactViewServiceViewController : CNContactContentViewController <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)viewDidAppearForContactViewController:(id)arg1;
- (_Bool)shouldPerformDefaultActionForContact:(id)arg1 propertyKey:(id)arg2 propertyIdentifier:(id)arg3;
- (void)updateEditing:(_Bool)arg1 doneButtonEnabled:(_Bool)arg2 doneButtonText:(id)arg3;
- (void)didCompleteWithContact:(id)arg1;
- (void)didDeleteContact:(id)arg1;
- (void)isPresentingFullscreen:(_Bool)arg1;
- (void)isPresentingEditingController:(_Bool)arg1;
- (void)didChangePreferredContentSize:(struct CGSize)arg1;
- (void)viewDidAppear;
- (void)didExecuteClearRecentsDataAction;
- (void)didExecuteDeleteFromDowntimeWhitelistAction;
- (void)presentCancelConfirmationAlert;
- (_Bool)isOutOfProcess;

@end
