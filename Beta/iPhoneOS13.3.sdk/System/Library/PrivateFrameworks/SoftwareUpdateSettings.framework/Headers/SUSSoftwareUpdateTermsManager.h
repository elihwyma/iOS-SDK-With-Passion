/*
 Image: /System/Library/PrivateFrameworks/SoftwareUpdateSettings.framework/SoftwareUpdateSettings
 */

#import <Foundation/NSObject.h>

@class NSString, RUIStyle, RemoteUIController, SUDescriptor, UINavigationController, UIViewController;

@interface SUSSoftwareUpdateTermsManager : NSObject

{
    RemoteUIController *_termsRemoteUI;
    CDUnknownBlockType _termsCompletion;
    SUDescriptor *_update;
    _Bool _overrideNextRUIAction;
    _Bool _agreeToCombinedTOSInProgress;
    UINavigationController *_showProgressViewController;
    UIViewController *_hostController;
    UIViewController *_presentedViewController;
    RUIStyle *_serverFlowStyle;
}

@property (retain, nonatomic) RUIStyle *serverFlowStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)remoteUIController:(id)arg1 didFinishLoadWithError:(id)arg2;
- (void)remoteUIController:(id)arg1 willPresentObjectModel:(id)arg2 modally:(_Bool)arg3;
- (void)remoteUIControllerDidDismiss:(id)arg1;
- (void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(unsigned long long *)arg3;
- (void)cancelLoadingTerms:(id)arg1;
- (void)_presentModalController:(id)arg1;
- (void)showLoadingSpinnerViewController;
- (void)_loadRemoteUITermsWithCloudAtURL:(id)arg1;
- (void)_loadTermsRemoteUIFailureWithError:(id)arg1;
- (void)_loadTermsFromUpdateAsset;
- (void)_finishTermsWithAcceptance:(_Bool)arg1 error:(id)arg2;
- (void)_termsDisagree;
- (void)_acceptedTermsFromAsset;
- (void)_handleAgreeFromObjectModel:(id)arg1;
- (void)_acceptedTermsVersion:(id)arg1;
- (void)presentTermsIfNecessaryForUpdate:(id)arg1 overController:(id)arg2 showLoadSpinner:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;

@end
