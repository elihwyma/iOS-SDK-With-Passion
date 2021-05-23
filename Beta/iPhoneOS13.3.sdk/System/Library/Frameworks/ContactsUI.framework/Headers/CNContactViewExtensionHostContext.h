/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSExtensionContext.h>

#import <ContactsUI/Swift-Protocol.h>

@class CNContactViewHostViewController, NSString;

__attribute__((visibility("hidden")))
@interface CNContactViewExtensionHostContext : NSExtensionContext <Swift>

{
    CNContactViewHostViewController *_viewController;
}

@property (weak, nonatomic) CNContactViewHostViewController *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

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
- (void)asyncShouldPerformDefaultActionForContact:(id)arg1 propertyKey:(id)arg2 propertyIdentifier:(id)arg3;
- (id)protocolService;

@end
