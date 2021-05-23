/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/Swift-Protocol.h>

@protocol CNContactViewControllerPPTDelegate, CNContactViewHostProtocol;

@protocol CNContactContentViewController <Swift>

@property (weak, nonatomic) id <CNContactViewHostProtocol> delegate;
@property (weak, nonatomic) id <CNContactViewControllerPPTDelegate> pptDelegate;

@end
