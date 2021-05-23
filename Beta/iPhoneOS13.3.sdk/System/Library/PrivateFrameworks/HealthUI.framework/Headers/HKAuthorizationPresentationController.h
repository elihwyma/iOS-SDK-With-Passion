/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class HKHealthPrivacyHostAuthorizationViewController, HKNanoHostAuthorizationController, NSString, UIWindow, _UIAsyncInvocation;

@interface HKAuthorizationPresentationController : NSObject

{
    _Bool _didPresent;
    _UIAsyncInvocation *_requestCancellationInvocation;
    HKHealthPrivacyHostAuthorizationViewController *_hostViewController;
    HKNanoHostAuthorizationController *_nanoAuthorizationController;
    UIWindow *_savedKeyWindow;
    UIWindow *_window;
}

@property (retain, nonatomic) _UIAsyncInvocation *requestCancellationInvocation;
@property (retain, nonatomic) HKHealthPrivacyHostAuthorizationViewController *hostViewController;
@property (retain, nonatomic) HKNanoHostAuthorizationController *nanoAuthorizationController;
@property (retain, nonatomic) UIWindow *savedKeyWindow;
@property (retain, nonatomic) UIWindow *window;
@property (nonatomic) _Bool didPresent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)cancelPresentation;
- (void)presentWithPresentationRequests:(id)arg1 authorizationRequestRecord:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)healthPrivacyHostAuthorizationControllerDidFinishWithError:(id)arg1;
- (void)_requestAndConfigureHostViewController:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_mainQueue_presentWithPresentationRequests:(id)arg1 authorizationRequestRecord:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_dismissRemoteViewController;
- (void)_makeRemoteViewControllerKeyAndVisible:(id)arg1;
- (void)_requestAndConfigureCarouselAlert:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;

@end
