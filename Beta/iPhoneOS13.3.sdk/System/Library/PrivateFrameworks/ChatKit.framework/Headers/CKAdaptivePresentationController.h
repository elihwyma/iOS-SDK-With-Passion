/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class CKPresentationControllerWindow, NSString, UIPopoverPresentationController, UIViewController;

@interface CKAdaptivePresentationController : NSObject

{
    UIViewController *_presentedViewController;
    UIPopoverPresentationController *_currentPresentationController;
    CKPresentationControllerWindow *_presentationWindow;
    CDUnknownBlockType _presentationHandler;
    CDUnknownBlockType _dismissalHandler;
}

@property (retain, nonatomic) UIViewController *presentedViewController;
@property (retain, nonatomic) UIPopoverPresentationController *currentPresentationController;
@property (retain, nonatomic) CKPresentationControllerWindow *presentationWindow;
@property (copy, nonatomic) CDUnknownBlockType presentationHandler;
@property (copy, nonatomic) CDUnknownBlockType dismissalHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (void)dealloc;
- (void)_cleanup;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(inout struct CGRect *)arg2 inView:(inout id *)arg3;
- (void)presentViewController:(id)arg1 fromViewController:(id)arg2 presentationHandler:(CDUnknownBlockType)arg3 dismissalHandler:(CDUnknownBlockType)arg4 animated:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (void)alertControllerViewDidDisappear:(id)arg1;

@end
