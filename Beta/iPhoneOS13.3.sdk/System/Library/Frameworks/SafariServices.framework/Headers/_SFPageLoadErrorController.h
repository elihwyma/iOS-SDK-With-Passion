/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class NSString, NSTimer, NSURL, NSURLRequest, UINavigationController, WKWebView, _WKRemoteObjectInterface;

@protocol WBSCertificateWarningPagePresenter, _SFDialogPresenting, _SFPageLoadErrorControllerDelegate;

@interface _SFPageLoadErrorController : NSObject

{
    _Bool _reloadAfterResume;
    WKWebView *_webView;
    NSTimer *_crashCountResetTimer;
    id <WBSCertificateWarningPagePresenter> _certificateWarningPagePresenterProxy;
    _WKRemoteObjectInterface *_certificateWarningPageHandlerInterface;
    _Bool _certificateWarningPageHandlerInterfaceInvalidated;
    struct __SecTrust *_certificateTrust;
    CDUnknownBlockType _certificateRecoveryAttempter;
    NSURL *_certificateFailingURL;
    UINavigationController *_certificateNavigationViewController;
    _Bool _reloadingFailedRequest;
    id <_SFPageLoadErrorControllerDelegate> _delegate;
    NSURLRequest *_failedRequest;
    unsigned long long _crashesSinceLastSuccessfulLoad;
    id <_SFDialogPresenting> _dialogPresenter;
}

@property (weak, nonatomic) id <_SFPageLoadErrorControllerDelegate> delegate;
@property (nonatomic, readonly) _Bool reloadingFailedRequest;
@property (nonatomic, readonly) NSURLRequest *failedRequest;
@property (nonatomic, readonly) unsigned long long crashesSinceLastSuccessfulLoad;
@property (weak, nonatomic) id <_SFDialogPresenting> dialogPresenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (void)_reachabilityChanged:(id)arg1;
- (void)addAlert:(id)arg1;
- (id)initWithWebView:(id)arg1;
- (void)_setUpCertificateWarningPageHandlerInterface;
- (void)_clearCertificateWarningPageHandlerInterface;
- (void)goBackButtonClicked;
- (void)visitInsecureWebsite;
- (void)visitInsecureWebsiteWithTemporaryBypass;
- (void)showCertificateInformation;
- (void)openClockSettings;
- (void)performAction:(int)arg1 forAlert:(id)arg2;
- (void)addDialog:(id)arg1;
- (void)_continueWithoutCredentialsUsingAlertContext:(id)arg1;
- (void)showErrorPageWithTitle:(id)arg1 bodyText:(id)arg2 learnMoreLink:(id)arg3 forError:(id)arg4;
- (id)_certificateWarningPagePresenterProxy;
- (void)_continueAfterCertificateAlertWithURL:(id)arg1 trust:(struct __SecTrust *)arg2 recoveryAttempter:(CDUnknownBlockType)arg3;
- (void)_loadCertificateWarningPageForContext:(id)arg1;
- (void)reloadAfterError;
- (_Bool)_handleCertificateError:(id)arg1 forURL:(id)arg2 isMainFrame:(_Bool)arg3 recoveryAttempter:(CDUnknownBlockType)arg4;
- (void)clearFailedRequest;
- (id)_specializedMessageForError:(id)arg1 URL:(id)arg2;
- (id)_genericMessageForError:(id)arg1;
- (id)_titleForError:(id)arg1;
- (void)addAlertWithTitle:(id)arg1 bodyText:(id)arg2;
- (void)_setFailedRequest:(id)arg1;
- (void)_handleFrameLoadError:(id)arg1 forURL:(id)arg2 recoveryAttempter:(CDUnknownBlockType)arg3;
- (void)showErrorPageWithTitle:(id)arg1 bodyText:(id)arg2 forError:(id)arg3;
- (void)clearCrashCountResetTimer;
- (void)_resetCrashCount:(id)arg1;
- (void)_showRepeatedWebProcessCrashError:(id)arg1 URLString:(id)arg2;
- (void)_resetCrashCountSoon;
- (void)_dismissCertificateViewButtonTapped;
- (void)addFormAlertWithTitle:(id)arg1 decisionHandler:(CDUnknownBlockType)arg2;
- (void)addDisallowedUseOfJavaScriptAlert;
- (void)addDisallowedFileURLAlert;
- (void)handleFrameLoadError:(id)arg1;
- (void)handleSubframeCertificateError:(id)arg1;
- (void)handleClientCertificateAuthenticationChallenge:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addInvalidURLAlert;
- (void)addInvalidProfileAlert;
- (void)addDownloadFailedAlertWithDescription:(id)arg1;
- (_Bool)updateCrashesAndShowCrashError:(id)arg1 URLString:(id)arg2;
- (void)scheduleResetCrashCount;

@end
