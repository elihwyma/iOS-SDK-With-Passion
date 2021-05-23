/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UIViewController.h>

#import <SafariServices/Swift-Protocol.h>

@class NSString, WKWebView, WKWebViewConfiguration, _SFAuthenticationContext, _SFDialog, _SFDialogController, _SFFormAutoFillController;

@protocol SFWebViewControllerDelegate, _SFAuthenticatorDialog;

__attribute__((visibility("hidden")))
@interface SFWebViewController : UIViewController <Swift>

{
    _SFFormAutoFillController *_autoFillController;
    _Bool _didFirstLayout;
    _Bool _didFinishDocumentLoad;
    _Bool _shouldSuppressDialogsThatBlockWebProcess;
    NSString *_domainWhereUserDeclinedAutomaticStrongPassword;
    _SFDialog<_SFAuthenticatorDialog> *_authenticatorDialog;
    _Bool _loading;
    _Bool _didFirstVisuallyNonEmptyLayout;
    _Bool _hasFocusedInputFieldOnCurrentPage;
    _Bool _hasFormControlInteraction;
    id <SFWebViewControllerDelegate> _delegate;
    WKWebViewConfiguration *_webViewConfiguration;
    _SFDialogController *_dialogController;
}

@property (nonatomic, readonly) WKWebView *webView;
@property (weak, nonatomic) id <SFWebViewControllerDelegate> delegate;
@property (nonatomic, getter=isLoading) _Bool loading;
@property (nonatomic, readonly) _Bool didFirstVisuallyNonEmptyLayout;
@property (nonatomic, readonly) WKWebViewConfiguration *webViewConfiguration;
@property (nonatomic, readonly) _SFDialogController *dialogController;
@property (nonatomic, readonly) _SFAuthenticationContext *autoFillAuthenticationContext;
@property (nonatomic, readonly) _Bool hasFocusedInputFieldOnCurrentPage;
@property (nonatomic, readonly) _Bool hasFormControlInteraction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)loadView;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (long long)_webView:(id)arg1 dataOwnerForDragSession:(id)arg2;
- (long long)_webView:(id)arg1 dataOwnerForDropSession:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 preferences:(id)arg3 decisionHandler:(CDUnknownBlockType)arg4;
- (void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 didReceiveServerRedirectForProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didCommitNavigation:(id)arg2;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_webView:(id)arg1 didChangeSafeAreaShouldAffectObscuredInsets:(_Bool)arg2;
- (void)_webView:(id)arg1 willSubmitFormValues:(id)arg2 userObject:(id)arg3 submissionHandler:(CDUnknownBlockType)arg4;
- (void)_webView:(id)arg1 willPerformClientRedirectToURL:(id)arg2 delay:(double)arg3;
- (void)_webViewDidCancelClientRedirect:(id)arg1;
- (void)_webView:(id)arg1 navigationDidFinishDocumentLoad:(id)arg2;
- (void)_webView:(id)arg1 navigation:(id)arg2 didSameDocumentNavigation:(long long)arg3;
- (void)_webView:(id)arg1 renderingProgressDidChange:(unsigned long long)arg2;
- (void)_webViewWebProcessDidCrash:(id)arg1;
- (void)_webViewDidEndNavigationGesture:(id)arg1 withNavigationToBackForwardListItem:(id)arg2;
- (void)_webView:(id)arg1 didStartLoadForQuickLookDocumentInMainFrameWithFileName:(id)arg2 uti:(id)arg3;
- (void)_webView:(id)arg1 didFinishLoadForQuickLookDocumentInMainFrame:(id)arg2;
- (void)_webView:(id)arg1 decidePolicyForSOAuthorizationLoadWithCurrentPolicy:(long long)arg2 forExtension:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_webView:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 windowFeatures:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_webView:(id)arg1 requestStorageAccessPanelForDomain:(id)arg2 underCurrentDomain:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_webView:(id)arg1 didResignInputElementStrongPasswordAppearanceWithUserInfo:(id)arg2;
- (void)_webView:(id)arg1 printFrame:(id)arg2;
- (void)webViewDidClose:(id)arg1;
- (void)_webViewDidEnterFullscreen:(id)arg1;
- (void)_webViewDidExitFullscreen:(id)arg1;
- (_Bool)_webView:(id)arg1 shouldIncludeAppLinkActionsForElement:(id)arg2;
- (id)_webView:(id)arg1 actionsForElement:(id)arg2 defaultActions:(id)arg3;
- (id)_presentingViewControllerForWebView:(id)arg1;
- (void)_webView:(id)arg1 requestUserMediaAuthorizationForDevices:(unsigned long long)arg2 url:(id)arg3 mainFrameURL:(id)arg4 decisionHandler:(CDUnknownBlockType)arg5;
- (void)_webView:(id)arg1 checkUserMediaPermissionForURL:(id)arg2 mainFrameURL:(id)arg3 frameIdentifier:(unsigned long long)arg4 decisionHandler:(CDUnknownBlockType)arg5;
- (void)_webView:(id)arg1 mediaCaptureStateDidChange:(unsigned long long)arg2;
- (void)_webView:(id)arg1 runWebAuthenticationPanel:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)panel:(id)arg1 updateWebAuthenticationPanel:(long long)arg2;
- (void)panel:(id)arg1 dismissWebAuthenticationPanelWithResult:(long long)arg2;
- (void)_webView:(id)arg1 requestGeolocationAuthorizationForURL:(id)arg2 frame:(id)arg3 decisionHandler:(CDUnknownBlockType)arg4;
- (void)_webView:(id)arg1 accessoryViewCustomButtonTappedInFormInputSession:(id)arg2;
- (void)_webView:(id)arg1 insertTextSuggestion:(id)arg2 inInputSession:(id)arg3;
- (long long)_webView:(id)arg1 decidePolicyForFocusedElement:(id)arg2;
- (_Bool)_webView:(id)arg1 focusRequiresStrongPasswordAssistance:(id)arg2;
- (void)_webView:(id)arg1 willStartInputSession:(id)arg2;
- (void)_webView:(id)arg1 didStartInputSession:(id)arg2;
- (id)_webView:(id)arg1 previewViewControllerForURL:(id)arg2 defaultActions:(id)arg3 elementInfo:(id)arg4;
- (void)_webView:(id)arg1 commitPreviewedViewController:(id)arg2;
- (void)presentDialog:(id)arg1 sender:(id)arg2;
- (id)formAutoFillControllerURLForFormAutoFill:(id)arg1;
- (_Bool)formAutoFillControllerCanPrefillForm:(id)arg1;
- (_Bool)formAutoFillControllerShouldShowIconsInPasswordPicker:(id)arg1;
- (void)formAutoFillControllerGetAuthenticationForAutoFill:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)formAutoFillControllerShouldDisableStreamlinedLogin:(id)arg1;
- (void)formAutoFillControllerUserChoseToUseGeneratedPassword:(id)arg1;
- (_Bool)formAutoFillControllerDidUserDeclineAutomaticStrongPasswordForCurrentDomain:(id)arg1;
- (void)formAutoFillControllerDidFocusSensitiveFormField:(id)arg1;
- (void)willActivateWebViewController;
- (void)_automaticPasswordInputViewNotification:(id)arg1;
- (int)_analyticsClient;
- (void)_userDeclinedAutomaticStrongPasswordForCurrentDomain;
- (id)_actionsForElement:(id)arg1 defaultActions:(id)arg2 isPreviewing:(_Bool)arg3;
- (long long)dialogController:(id)arg1 presentationPolicyForDialog:(id)arg2;
- (void)dialogController:(id)arg1 willPresentDialog:(id)arg2;
- (void)dialogController:(id)arg1 presentViewController:(id)arg2 withAdditionalAnimations:(CDUnknownBlockType)arg3;
- (void)dialogController:(id)arg1 dismissViewController:(id)arg2 withAdditionalAnimations:(CDUnknownBlockType)arg3;
- (void)sfWebViewDidChangeSafeAreaInsets:(id)arg1;
- (void)sfWebViewDidBecomeFirstResponder:(id)arg1;
- (void)sfWebViewDidStartFormControlInteraction:(id)arg1;
- (void)sfWebViewDidEndFormControlInteraction:(id)arg1;
- (id)sfWebView:(id)arg1 didStartDownload:(id)arg2;
- (id)initWithWebViewConfiguration:(id)arg1;
- (void)willBeginUserInitiatedNavigation;

@end
