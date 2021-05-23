/*
 Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

#import <CommunicationsSetupUI/CNFRegListController.h>

@class IMAccount, NSString, NSTimer, UIBarButtonItem;

@protocol CNFRegFirstRunDelegate;

@interface CNFRegFirstRunController : CNFRegListController

{
    Class _completionControllerClass;
    _Bool _showingActivityIndicator;
    _Bool _previousHidesBackButton;
    UIBarButtonItem *_previousLeftButton;
    UIBarButtonItem *_previousRightButton;
    id <CNFRegFirstRunDelegate> _delegate;
    UIBarButtonItem *_customRightButton;
    UIBarButtonItem *_customLeftButton;
    NSTimer *_timeoutTimer;
    _Bool _timedOut;
    _Bool _cancelled;
    IMAccount *_account;
}

@property (retain, nonatomic) UIBarButtonItem *previousLeftButton;
@property (retain, nonatomic) UIBarButtonItem *previousRightButton;
@property (nonatomic) _Bool previousHidesBackButton;
@property (nonatomic) _Bool timedOut;
@property (retain, nonatomic) IMAccount *account;
@property (nonatomic) Class completionControllerClass;
@property (retain, nonatomic) UIBarButtonItem *customLeftButton;
@property (retain, nonatomic) UIBarButtonItem *customRightButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) id <CNFRegFirstRunDelegate> delegate;
@property (nonatomic, readonly) long long currentAppearanceStyle;

- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)_hidesBackButton;
- (id)titleString;
- (void)systemApplicationDidEnterBackground;
- (void)systemApplicationWillEnterForeground;
- (void)setSpecifier:(id)arg1;
- (void)_updateUI;
- (void)_handleTimeout;
- (void)setCellsChecked:(_Bool)arg1;
- (id)customTitle;
- (id)initWithRegController:(id)arg1;
- (void)_setupEventHandlers;
- (void)_stopValidationModeAnimated:(_Bool)arg1;
- (id)initWithRegController:(id)arg1 account:(id)arg2;
- (void)_stopTimeout;
- (void)_timeoutFired:(id)arg1;
- (void)_startTimeoutWithDuration:(double)arg1;
- (_Bool)dismissWithState:(unsigned long long)arg1;
- (void)_refreshNavBarAnimated:(_Bool)arg1;
- (void)_handleReturnKeyTapped:(id)arg1;
- (void)_returnKeyPressed;
- (void)_refreshCurrentState;
- (void)_startListeningForReturnKey;
- (void)_stopListeningForReturnKey;
- (id)_leftButtonItem;
- (id)_rightButtonItem;
- (void)_rightButtonTapped;
- (void)_handleValidationModeCancelled;
- (void)_leftButtonTapped;
- (void)_cancelValidationMode;
- (id)_validationModeCancelButton;
- (void)_startActivityIndicatorWithTitle:(id)arg1 animated:(_Bool)arg2 allowCancel:(_Bool)arg3;
- (void)_stopActivityIndicatorWithTitle:(id)arg1 animated:(_Bool)arg2;
- (id)validationString;
- (void)_startValidationModeAnimated:(_Bool)arg1 allowCancel:(_Bool)arg2;
- (void)_stopActivityIndicatorAnimated:(_Bool)arg1;
- (_Bool)pushCompletionControllerIfPossible;
- (void)_updateControllerState;
- (id)initWithParentController:(id)arg1 account:(id)arg2;
- (void)_startActivityIndicatorWithTitle:(id)arg1 animated:(_Bool)arg2;
- (void)_startValidationModeAnimated:(_Bool)arg1;
- (void)_executeDismissBlock:(CDUnknownBlockType)arg1;

@end
