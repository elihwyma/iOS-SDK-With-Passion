/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/_UIRemoteViewController.h>

#import <ContactsUI/Swift-Protocol.h>

@class NSExtension, NSString;

@protocol CNContactViewControllerPPTDelegate, CNContactViewHostProtocol, NSCopying;

__attribute__((visibility("hidden")))
@interface CNContactViewHostViewController : _UIRemoteViewController <Swift>

{
    id <CNContactViewHostProtocol> _delegate;
    id <CNContactViewControllerPPTDelegate> _pptDelegate;
    id <NSCopying> _currentRequestIdentifier;
    NSExtension *_extension;
}

@property (retain, nonatomic) id <NSCopying> currentRequestIdentifier;
@property (retain, nonatomic) NSExtension *extension;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <CNContactViewHostProtocol> delegate;
@property (weak, nonatomic) id <CNContactViewControllerPPTDelegate> pptDelegate;

+ (id)contextForIdentifier:(id)arg1;
+ (id)contactViewExtension;
+ (_Bool)getViewController:(CDUnknownBlockType)arg1;

- (void)invalidate;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
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
- (void)setupWithOptions:(id)arg1 readyBlock:(CDUnknownBlockType)arg2;
- (void)didChangeToEditMode:(_Bool)arg1;
- (void)editCancel;
- (void)toggleEditing;
- (void)performConfirmedCancel;
- (id)protocolContext;

@end
