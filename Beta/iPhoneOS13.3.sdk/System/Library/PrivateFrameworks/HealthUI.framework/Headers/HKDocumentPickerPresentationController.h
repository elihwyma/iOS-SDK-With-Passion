/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class HKHealthPrivacyHostDocumentPickerViewController, NSString, UIWindow, _UIAsyncInvocation;

@interface HKDocumentPickerPresentationController : NSObject

{
    _Bool _didPresent;
    _UIAsyncInvocation *_requestCancellationInvocation;
    HKHealthPrivacyHostDocumentPickerViewController *_hostViewController;
    UIWindow *_savedKeyWindow;
    UIWindow *_window;
}

@property (retain, nonatomic) _UIAsyncInvocation *requestCancellationInvocation;
@property (retain, nonatomic) HKHealthPrivacyHostDocumentPickerViewController *hostViewController;
@property (retain, nonatomic) UIWindow *savedKeyWindow;
@property (retain, nonatomic) UIWindow *window;
@property (nonatomic) _Bool didPresent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)cancelPresentation;
- (void)_didFinishDismissing;
- (void)_dismissViewControllerAnimated:(_Bool)arg1;
- (void)presentWithSession:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_presentWithPromptSession:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_presentRemoteViewController:(id)arg1;
- (void)_requestAndConfigureHostViewController:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)healthPrivacyHostDocumentPickerViewController:(id)arg1 didFinishWithError:(id)arg2;

@end
