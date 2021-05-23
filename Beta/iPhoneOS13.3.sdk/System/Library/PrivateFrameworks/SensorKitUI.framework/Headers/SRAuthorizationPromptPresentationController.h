/*
 Image: /System/Library/PrivateFrameworks/SensorKitUI.framework/SensorKitUI
 */

#import <Foundation/NSObject.h>

@class NSError, NSString, UIViewController;

@protocol SRRemoteAuthorizationPromptViewController;

@interface SRAuthorizationPromptPresentationController : NSObject

{
    _Bool _presenting;
    _Bool _hostNavigationBarHidden;
    UIViewController<SRRemoteAuthorizationPromptViewController> *_viewController;
    CDUnknownBlockType _completionHandler;
    NSError *_error;
}

@property (retain, nonatomic) UIViewController<SRRemoteAuthorizationPromptViewController> *viewController;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (nonatomic, getter=isPresenting) _Bool presenting;
@property (nonatomic) _Bool hostNavigationBarHidden;
@property (retain, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (id)sharedInstance;

- (void)dealloc;
- (void)presentPromptViewController:(id)arg1 withDesiredServices:(id)arg2 bundleIdentifier:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)presentPendingAuthorizationPromptViewController:(id)arg1 withDesiredServices:(id)arg2 bundlePath:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)presentAppsAndStudiesPromptViewController:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)presentStudyAuthorizationPromptViewController:(id)arg1 bundlePath:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)presentResearchDataViewController:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)presentAnyViewController:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)presentationAnchor;
- (id)presentingViewControllerFromRoot:(id)arg1;
- (id)navigationControllerFromRoot:(id)arg1;
- (void)completePromptWithError:(id)arg1;
- (_Bool)isViewControllerPresentedModally;
- (void)viewControllerCleanUp;
- (void)authorizationRequestCompleted;
- (void)authorizationRequestFailedWithError:(id)arg1;
- (void)authorizationUIReadyForDisplayModally:(_Bool)arg1;
- (void)authorizationPresentDeleteAllAlertWithTitle:(id)arg1 actionTitle:(id)arg2 cancelTitle:(id)arg3;
- (void)authorizationPresentDownloadPath:(id)arg1 sandboxExtensionToken:(id)arg2;
- (void)authorizationRequestWillDisappear;
- (void)authorizationRequestDidDisappear;

@end
