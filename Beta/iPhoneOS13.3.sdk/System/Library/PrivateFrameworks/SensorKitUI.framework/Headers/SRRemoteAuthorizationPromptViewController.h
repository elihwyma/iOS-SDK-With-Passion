/*
 Image: /System/Library/PrivateFrameworks/SensorKitUI.framework/SensorKitUI
 */

#import <UIKit/_UIRemoteViewController.h>

#import <SensorKitUI/Swift-Protocol.h>

@class NSExtension, NSString;

@protocol NSCopying, SRRemoteAuthorizationPromptViewControllerDelegate;

@interface SRRemoteAuthorizationPromptViewController : _UIRemoteViewController <Swift>

{
    id <SRRemoteAuthorizationPromptViewControllerDelegate> _delegate;
    id <NSCopying> _request;
    NSExtension *_weakExtension;
}

@property (weak, nonatomic) id <SRRemoteAuthorizationPromptViewControllerDelegate> delegate;
@property (retain, nonatomic) id <NSCopying> request;
@property (weak, nonatomic) NSExtension *weakExtension;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (void)requestViewControllerWithCompletionHandler:(CDUnknownBlockType)arg1;

- (void)dealloc;
- (void)invalidate;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)serviceViewControllerProxy;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)requestAuthorizationForBundle:(id)arg1 services:(id)arg2;
- (void)showPendingAuthUIForBundlePath:(id)arg1 services:(id)arg2;
- (void)showAppsAndStudies;
- (void)showStudyAuthorizationForBundlePath:(id)arg1;
- (void)showResearchData;
- (void)deleteAllSamples;
- (void)authorizationRequestCompleted;
- (void)authorizationRequestFailedWithError:(id)arg1;
- (void)authorizationUIReadyForDisplayModally:(_Bool)arg1;
- (void)authorizationPresentDeleteAllAlertWithTitle:(id)arg1 actionTitle:(id)arg2 cancelTitle:(id)arg3;
- (void)authorizationPresentDownloadPath:(id)arg1 sandboxExtensionToken:(id)arg2;
- (void)authorizationRequestWillDisappear;
- (void)authorizationRequestDidDisappear;

@end
