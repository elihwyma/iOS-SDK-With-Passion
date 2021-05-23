/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/Swift-Protocol.h>

@protocol CNContactViewHostProtocol <Swift>

- (unsigned short)shouldPerformDefaultActionForContact:propertyKey:propertyIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)updateEditing:doneButtonEnabled:doneButtonText: /* Error: Ran out of types for this method. */;
- (unsigned short)didCompleteWithContact: /* Error: Ran out of types for this method. */;
- (unsigned short)didDeleteContact: /* Error: Ran out of types for this method. */;
- (unsigned short)isPresentingFullscreen: /* Error: Ran out of types for this method. */;
- (unsigned short)isPresentingEditingController: /* Error: Ran out of types for this method. */;
- (unsigned short)didChangePreferredContentSize: /* Error: Ran out of types for this method. */;
- (unsigned short)viewDidAppear;
- (unsigned short)didExecuteClearRecentsDataAction;
- (unsigned short)didExecuteDeleteFromDowntimeWhitelistAction;
- (unsigned short)presentCancelConfirmationAlert;

@end
