/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSExtensionContext.h>

#import <ContactsUI/Swift-Protocol.h>

@class NSObject, NSString;

@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface CNContactViewExtensionContext : NSExtensionContext <Swift>

{
    _Bool _asyncShouldPerformResponse;
    NSObject<OS_dispatch_semaphore> *_asyncShouldPerformSemaphore;
}

@property (nonatomic) _Bool asyncShouldPerformResponse;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *asyncShouldPerformSemaphore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (id)host;
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
- (void)asyncShouldPerformDefaultActionResponse:(_Bool)arg1;
- (void)asyncShouldPerformDefaultActionForContact:(id)arg1 propertyKey:(id)arg2 propertyIdentifier:(id)arg3;

@end
