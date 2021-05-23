/*
 Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

#import <CommunicationsSetupUI/CNFRegServerWebViewController.h>

@class NSTimer;

@interface CNFRegAccountWebViewController : CNFRegServerWebViewController

{
    _Bool _failedBagLoad;
    _Bool _listeningForBagLoad;
    NSTimer *_bagLoadTimer;
}

@property (nonatomic) _Bool failedBagLoad;

- (void)dealloc;
- (void)loadView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (id)bagKey;
- (void)_reload;
- (id)logName;
- (id)initWithRegController:(id)arg1;
- (_Bool)shouldSetHeadersForRequest:(id)arg1;
- (void)setHeadersForRequest:(id)arg1;
- (_Bool)canSendURLRequest:(id)arg1;
- (void)receivedStatus:(int)arg1 appleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4;
- (void)cancelTapped;
- (_Bool)_loadURLFromBag;
- (void)_startListeningForBagLoad;
- (void)_startBagLoadTimer;
- (void)_showURLDidNotLoadAlert;
- (void)_stopCurrentReload;
- (void)doHandoffWithStatus:(int)arg1 appleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4;
- (id)clientInfoHeaderValue;
- (id)viewPortHeaderValue;
- (id)securityHeaderValue;
- (id)serviceHeaderValue;
- (id)interfaceLayoutHeaderValue;
- (void)_stopBagLoadTimer;
- (void)_stopListeningForBagLoad;
- (void)_bagLoadTimeout:(id)arg1;
- (void)_handleFTServerBagFinishedLoading;
- (id)_viewPortStringForSize:(struct CGSize)arg1;
- (id)_nonModalParentController;
- (id)_viewPortForFormSheetPresentation;
- (id)_viewPortForNormalPresentation;
- (void)completeHandoffWithStatus:(int)arg1 appleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4;
- (void)_reloadDelayed;
- (void)_showGenericErrorWithHandler;
- (id)pushTokenHeaderValue;
- (id)authIdHeaderValue;
- (id)authTokenHeaderValue;

@end
