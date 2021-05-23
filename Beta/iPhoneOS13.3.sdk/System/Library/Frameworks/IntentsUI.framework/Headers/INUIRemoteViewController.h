/*
 Image: /System/Library/Frameworks/IntentsUI.framework/IntentsUI
 */

#import <UIKit/_UIRemoteViewController.h>

@class INUIExtensionRequestInfo, INUIExtensionViewControllerConfiguration, NSExtension, NSString, _INUIExtensionHostContext;

@protocol INUIRemoteViewControllerDelegate, NSCopying;

@interface INUIRemoteViewController : _UIRemoteViewController

{
    _Bool _needsStateUpdate;
    INUIExtensionRequestInfo *_requestInfo;
    id <INUIRemoteViewControllerDelegate> _delegate;
    INUIExtensionViewControllerConfiguration *_configuration;
    _INUIExtensionHostContext *_extensionHostContext;
    NSExtension *_activeExtension;
    id <NSCopying> _currentRequestIdentifier;
    struct CGSize _preferredContentSize;
}

@property (retain, nonatomic) _INUIExtensionHostContext *extensionHostContext;
@property (retain, nonatomic) NSExtension *activeExtension;
@property (retain, nonatomic) id <NSCopying> currentRequestIdentifier;
@property (copy, nonatomic, setter=_setRequestInfo:) INUIExtensionRequestInfo *requestInfo;
@property (nonatomic) struct CGSize preferredContentSize;
@property (copy, nonatomic) INUIExtensionViewControllerConfiguration *configuration;
@property (weak, nonatomic) id <INUIRemoteViewControllerDelegate> delegate;
@property (nonatomic) _Bool needsStateUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (void)requestRemoteViewControllerWithRequestInfo:(id)arg1 reply:(CDUnknownBlockType)arg2;
+ (void)_requestRemoteViewControllerForSnippetExtensionInteraction:(id)arg1 delegate:(id)arg2 connectionHandler:(CDUnknownBlockType)arg3;
+ (void)_requestRemoteViewControllerWithRequestInfo:(id)arg1 delegate:(id)arg2 reply:(CDUnknownBlockType)arg3;
+ (void)_attemptToConnectToRemoteViewControllerForRemainingExtensions:(id)arg1 delegate:(id)arg2 connectionHandler:(CDUnknownBlockType)arg3;
+ (void)requestRemoteViewControllerForInteraction:(id)arg1 delegate:(id)arg2 connectionHandler:(CDUnknownBlockType)arg3;
+ (void)attemptToConnectToRemoteViewControllerForRemainingExtensions:(id)arg1 delegate:(id)arg2 connectionHandler:(CDUnknownBlockType)arg3;

- (id)disconnect;
- (_Bool)_canShowWhileLocked;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)serviceViewControllerDesiresConstrainedSize:(struct CGSize)arg1;
- (void)configureForParameters:(id)arg1 ofInteraction:(id)arg2 interactiveBehavior:(unsigned long long)arg3 context:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)desiresInteractivity:(CDUnknownBlockType)arg1;
- (void)configureWithInteraction:(id)arg1 context:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)extensionHostContext:(id)arg1 wantsToHandleIntent:(id)arg2;
- (void)extensionHostContextWillBeginEditing:(id)arg1;
- (void)setDelegate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setIdealConfiguration:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestCancellation;
- (void)_queryRepresentedPropertiesWithCompletion:(CDUnknownBlockType)arg1;
- (id)_errorHandlingServiceViewControllerProxy;
- (void)_updateExtensionContextStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)configureWithInteraction:(id)arg1 context:(unsigned long long)arg2 errorHandlingCompletion:(CDUnknownBlockType)arg3;

@end
