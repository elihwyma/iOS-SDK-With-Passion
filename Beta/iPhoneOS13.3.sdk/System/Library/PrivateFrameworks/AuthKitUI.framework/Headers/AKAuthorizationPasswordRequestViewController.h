/*
 Image: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
 */

@class AKAuthorizationPresentationContext, AKAuthorizationScopeChoices, AKAuthorizationSubPaneConfirmButton, AKAuthorizationViewController, AKTiburonPasswordUIReport, NSString;

@interface AKAuthorizationPasswordRequestViewController

{
    AKTiburonPasswordUIReport *_analyticsReport;
    _Bool _editableScopeChoicesChanged;
    AKAuthorizationScopeChoices *_editableScopeChoices;
    AKAuthorizationPresentationContext *_presentationContext;
    AKAuthorizationViewController *_authorizationViewController;
    AKAuthorizationSubPaneConfirmButton *_confirmButton;
}

@property (retain, nonatomic) AKAuthorizationSubPaneConfirmButton *confirmButton;
@property (nonatomic, readonly) AKAuthorizationPresentationContext *presentationContext;
@property (weak, nonatomic) AKAuthorizationViewController *authorizationViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) AKAuthorizationScopeChoices *editableScopeChoices;
@property (nonatomic) _Bool editableScopeChoicesChanged;

- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)_buttonText;
- (id)_infoLabelText;
- (void)_addAuthorizationButtonToPaneContext:(id)arg1;
- (void)_paneDelegate_authorizationPaneViewControllerDismissWithAuthorization:(id)arg1 error:(id)arg2;
- (void)_handleAuthorizationError:(id)arg1;
- (void)_paneDelegate_authorizationPaneViewControllerDidRequestAuthorizationWithUserProvidedInformation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_setCancelButtonEnabled:(_Bool)arg1;
- (void)subPaneConfirmButtonDidEnterProcessingState:(id)arg1;
- (void)subpaneConfirmButtonDidFailBiometry:(id)arg1;
- (void)performPasswordAuthentication;
- (void)performAuthorization;
- (_Bool)validateReadyForAuthorization;
- (void)passwordAuthenticationCompletedWithResults:(id)arg1 error:(id)arg2;
- (id)initWithAuthorizationContext:(id)arg1 scopeChoices:(id)arg2;
- (_Bool)_hasOneLoginChoice;
- (id)_firstLoginChoice;
- (id)_tableViewIconForContext:(id)arg1;
- (_Bool)_canPerformAuthorization;
- (void)_performAuthorizationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_performAuthorization;
- (void)_performAppleIDPasswordAuthenticationIfNeeded;
- (void)_setupKeychainCell:(id)arg1 forLoginChoice:(id)arg2;
- (void)_setupAppleIDCell:(id)arg1 forLoginChoice:(id)arg2;

@end
