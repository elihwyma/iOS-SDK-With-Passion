/*
 Image: /System/Library/Frameworks/IdentityLookupUI.framework/IdentityLookupUI
 */

#import <UIKit/UIViewController.h>

@class ILClassificationExtensionShellViewController, ILClassificationReportingController, ILClassificationRequest, ILClassificationResponse, ILClassificationUIExtensionHostContext, NSExtension, NSObject, NSString, NSUUID, UINavigationController;

@protocol ILClassificationUIExtensionHostViewControllerDelegate, OS_dispatch_queue;

@interface ILClassificationUIExtensionHostViewController : UIViewController

{
    id <ILClassificationUIExtensionHostViewControllerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    ILClassificationRequest *_classificationRequest;
    ILClassificationResponse *_classificationResponse;
    NSString *_sender;
    NSString *_isoCountryCode;
    NSExtension *_extension;
    NSUUID *_extensionRequestIdentifier;
    UINavigationController *_navigationController;
    ILClassificationExtensionShellViewController *_shellViewController;
    ILClassificationUIExtensionHostContext *_extensionHostContext;
    ILClassificationReportingController *_reportingController;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) ILClassificationRequest *classificationRequest;
@property (retain, nonatomic) ILClassificationResponse *classificationResponse;
@property (copy, nonatomic) NSString *sender;
@property (copy, nonatomic) NSString *isoCountryCode;
@property (retain, nonatomic) NSExtension *extension;
@property (retain, nonatomic) NSUUID *extensionRequestIdentifier;
@property (retain, nonatomic) UINavigationController *navigationController;
@property (retain, nonatomic) ILClassificationExtensionShellViewController *shellViewController;
@property (retain, nonatomic) ILClassificationUIExtensionHostContext *extensionHostContext;
@property (nonatomic, readonly) ILClassificationReportingController *reportingController;
@property (weak, nonatomic) id <ILClassificationUIExtensionHostViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)finish;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)initUnactivatedVCWithRequest:(id)arg1 sender:(id)arg2 isoCountryCode:(id)arg3;
- (void)activateExtensionWithCompletion:(CDUnknownBlockType)arg1;
- (void)launchSettings;
- (id)logErrorWithMessage:(id)arg1;
- (void)didCompleteClassificationRequestWithResponse:(id)arg1;
- (void)blockNumber:(id)arg1 withCountryCode:(id)arg2;
- (void)presentBlockAlertWithCompletion:(CDUnknownBlockType)arg1;
- (void)context:(id)arg1 didBecomeReadyForClassificationResponse:(_Bool)arg2;
- (void)userDidCancelForExtensionShellViewController:(id)arg1;
- (void)userDidFinishForExtensionShellViewController:(id)arg1;
- (id)initWithClassificationRequest:(id)arg1 sender:(id)arg2 isoCountryCode:(id)arg3;

@end
