/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNErrorViewController.h>

@class NSString;

@protocol CNContactViewControllerPPTDelegate, CNContactViewHostProtocol;

__attribute__((visibility("hidden")))
@interface CNContactViewServiceErrorViewController : CNErrorViewController

{
    id <CNContactViewControllerPPTDelegate> pptDelegate;
    id <CNContactViewHostProtocol> delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <CNContactViewHostProtocol> delegate;
@property (weak, nonatomic) id <CNContactViewControllerPPTDelegate> pptDelegate;

- (void)setupWithOptions:(id)arg1 readyBlock:(CDUnknownBlockType)arg2;
- (void)didChangeToEditMode:(_Bool)arg1;
- (void)editCancel;
- (void)toggleEditing;

@end
