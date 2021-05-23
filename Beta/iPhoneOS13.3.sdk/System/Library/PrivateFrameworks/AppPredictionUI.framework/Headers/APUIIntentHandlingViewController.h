/*
 Image: /System/Library/PrivateFrameworks/AppPredictionUI.framework/AppPredictionUI
 */

#import <UIKit/UIViewController.h>

@class APUIWFLIntentController, ATXAction, CRKCardPresentation, INIntent, NSString, UIActivityIndicatorView;

@protocol APUIIntentHandlingViewControllerDelegate, CRKCardViewControllerDelegate, CRKCardViewControlling;

@interface APUIIntentHandlingViewController : UIViewController

{
    _Bool _intentIsDirty;
    _Bool _suppressSpinner;
    INIntent *_intent;
    long long _executionContext;
    id <APUIIntentHandlingViewControllerDelegate> _delegate;
    APUIWFLIntentController *_wfIntentController;
    CRKCardPresentation *_cardPresentation;
    UIViewController<CRKCardViewControlling> *_currentCardViewController;
    double _preferredPlatterContentHeight;
    UIActivityIndicatorView *_activityIndicatorView;
    ATXAction *_atxAction;
}

@property (retain, nonatomic) INIntent *intent;
@property (retain, nonatomic) APUIWFLIntentController *wfIntentController;
@property (nonatomic) _Bool intentIsDirty;
@property (retain, nonatomic) CRKCardPresentation *cardPresentation;
@property (retain, nonatomic) UIViewController<CRKCardViewControlling> *currentCardViewController;
@property (nonatomic) double preferredPlatterContentHeight;
@property (nonatomic) _Bool suppressSpinner;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicatorView;
@property (retain, nonatomic) ATXAction *atxAction;
@property (nonatomic) long long executionContext;
@property (weak, nonatomic) id <APUIIntentHandlingViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <CRKCardViewControllerDelegate> cardViewControllerDelegate;

- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (id)initWithIntent:(id)arg1;
- (void)launchAppWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)cardViewControllerDidLoad:(id)arg1;
- (void)cardViewControllerBoundsDidChange:(id)arg1;
- (void)confirmationGranted:(_Bool)arg1;
- (_Bool)intentController:(id)arg1 shouldRequireConfirmationForIntent:(id)arg2 intentResponse:(id)arg3;
- (void)intentController:(id)arg1 requiresConfirmationForIntent:(id)arg2 intentResponse:(id)arg3;
- (void)intentController:(id)arg1 requiresContinuingInAppForIntent:(id)arg2 proceedHandler:(CDUnknownBlockType)arg3;
- (void)intentController:(id)arg1 didHandleInteraction:(id)arg2;
- (void)intentController:(id)arg1 didFailWithError:(id)arg2 forInteraction:(id)arg3;
- (void)intentControllerDidFailAuthorizationCheck:(id)arg1;
- (void)_setupProgressIndicator;
- (void)setPreferredPlatterContentHeight:(double)arg1 notifyDelegate:(_Bool)arg2;
- (void)beginRunningIntent;
- (id)titleForConfirmAction;
- (void)_installChildViewController:(id)arg1;
- (void)_createOrUpdateCardViewControllerForInteraction:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_contentForCardRequestWithInteraction:(id)arg1;
- (unsigned long long)_cardFormatForContentRequest:(id)arg1;
- (void)_constructCardViewControllerForInteraction:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_updateCardViewControllerForInteraction:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
