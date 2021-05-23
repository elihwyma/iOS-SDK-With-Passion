/*
 Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

#import <UIKit/UIViewController.h>

@class CNFRegController, CNFRegLoadingView, NSMutableArray, NSString, NSTimer, RUILoader, UIWebView;

@interface CNFRegServerWebViewController : UIViewController

{
    CNFRegController *_regController;
    CNFRegLoadingView *_loadingView;
    NSTimer *_timeoutTimer;
    RUILoader *_loader;
    NSMutableArray *_objectModels;
    struct {
        unsigned int isLoading:1;
        unsigned int isLoaded:1;
        unsigned int wantsWifi:1;
        unsigned int modifiedWiFi:1;
        unsigned int automaticKeyboardWasDisabled:1;
        unsigned int checkedLogState:1;
        unsigned int shouldLog:1;
        unsigned int timedOut;
    } _webControllerFlags;
    UIWebView *_webView;
}

@property (retain, nonatomic) UIWebView *webView;
@property (retain, nonatomic) CNFRegController *regController;
@property (nonatomic, readonly) _Bool isLoaded;
@property (nonatomic, readonly) _Bool isLoading;
@property (nonatomic, readonly) _Bool timedOut;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)applicationWillSuspend;
- (void)viewDidUnload;
- (void)cancelButtonPressed:(id)arg1;
- (_Bool)_shouldLog;
- (void)_handleTimeout;
- (void)showSpinner;
- (void)objectModelDidChange:(id)arg1;
- (id)parentViewControllerForObjectModel:(id)arg1;
- (void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(unsigned long long)arg3;
- (void)loader:(id)arg1 didFailWithError:(id)arg2;
- (void)objectModelPressedBack:(id)arg1;
- (void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3;
- (void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3;
- (void)loadURL:(id)arg1;
- (void)hideSpinner;
- (id)logName;
- (void)_popObjectModelAnimated:(_Bool)arg1;
- (id)initWithRegController:(id)arg1;
- (void)startRequiringWifi;
- (void)stopRequiringWifi;
- (void)_stopTimeout;
- (id)overrideURLForURL:(id)arg1;
- (_Bool)shouldSetHeadersForRequest:(id)arg1;
- (void)setHeadersForRequest:(id)arg1;
- (_Bool)canSendURLRequest:(id)arg1;
- (void)_cleanupLoader;
- (void)receivedStatus:(int)arg1 appleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4;
- (void)_timeoutFired:(id)arg1;
- (void)setWantsWifi:(_Bool)arg1;
- (void)_startTimeoutWithDuration:(double)arg1;

@end
