/*
 Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

#import <AirPortAssistant/AUUITableViewController.h>

@class AUPasswordUIAlert, AUUIAlert, AssistantCallbackController, AssistantSubUIViewController, AssistantUIController, NSArray, NSDictionary, NSString, NetTopoMiniStaticLayout, UIActivityIndicatorView, UIBarButtonItem, UILabel, UITableView, UITextField, UIView;

@protocol AssistantViewControllerDelegate;

@interface AssistantUIViewController : AUUITableViewController

{
    UIView *spinnerWithStatusBelowView;
    UILabel *spinnerWithStatusBelowLabel;
    UIActivityIndicatorView *spinnerWithStatusBelowSpinner;
    UIView *justTextContainerView;
    UILabel *justTextLabel;
    UIView *topoView;
    NetTopoMiniStaticLayout *topoLayout;
    UIBarButtonItem *nextButton;
    UIBarButtonItem *cancelButton;
    UIView *tableHeaderContainerView;
    id _assistantDelegate;
    NSString *_macAddress;
    NSString *_settingUpStatusText;
    NSDictionary *_scanInfoRecord;
    NSArray *_paramScanResults;
    NSDictionary *_recommendationParamDict;
    NSDictionary *_callerParamDict;
    AssistantUIController *_assistantUIController;
    AssistantCallbackController *_controllerContext;
    AUPasswordUIAlert *passwordAlert;
    AUUIAlert *askUserQuestionAlert;
    AUUIAlert *connectionVerificationAlert;
    AUUIAlert *uiAlert;
    long long letMeChooseButtonIndex;
    long long restoreButtonIndex;
    long long recommendationButtonIndex;
    _Bool showingPasswordsAtEnd;
    int _currentUIConfigStep;
    NSDictionary *_mfiAccessoryResponseDict;
    AssistantSubUIViewController *_currentSubController;
    _Bool _goingBack;
    unsigned long long _selectedActionTag;
    UITextField *currentTextField;
    NSDictionary *recommendationParamDict;
    UITableView *_mainTableView;
    UIView *_spinnerWithStatusAdjacentView;
}

@property (nonatomic) id <AssistantViewControllerDelegate> assistantDelegate;
@property (retain, nonatomic) AssistantUIController *_assistantUIController;
@property (retain, nonatomic) AssistantCallbackController *_controllerContext;
@property (copy, nonatomic) NSDictionary *scanInfoRecord;
@property (copy, nonatomic) NSArray *paramScanResults;
@property (copy, nonatomic) NSDictionary *recommendationParamDict;
@property (copy, nonatomic) NSDictionary *callerParamDict;
@property (retain, nonatomic) AssistantSubUIViewController *currentSubController;
@property (retain, nonatomic) UIView *justTextContainerView;
@property (nonatomic) UILabel *justTextLabel;
@property (retain, nonatomic) UIView *topoView;
@property (retain, nonatomic) UIView *spinnerWithStatusAdjacentView;
@property (retain, nonatomic) UIView *spinnerWithStatusBelowView;
@property (retain, nonatomic) UIBarButtonItem *nextButton;
@property (retain, nonatomic) UIBarButtonItem *cancelButton;
@property (retain, nonatomic) UIView *tableHeaderContainerView;
@property (retain, nonatomic) UITableView *mainTableView;
@property (retain, nonatomic) AUPasswordUIAlert *passwordAlert;
@property (retain, nonatomic) AUUIAlert *askUserQuestionAlert;
@property (retain, nonatomic) AUUIAlert *connectionVerificationAlert;
@property (retain, nonatomic) AUUIAlert *uiAlert;
@property (nonatomic) long long letMeChooseButtonIndex;
@property (nonatomic) long long restoreButtonIndex;
@property (nonatomic) long long recommendationButtonIndex;
@property (retain, nonatomic) NetTopoMiniStaticLayout *topoLayout;
@property (copy, nonatomic) NSString *macAddress;
@property (retain, nonatomic) UITextField *currentTextField;
@property (retain) NSString *settingUpStatusText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)readjustSubviewsInContainer:(id)arg1;

- (void)dealloc;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (_Bool)disablesAutomaticKeyboardDismissal;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)popToRootViewControllerAnimated:(_Bool)arg1;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)callbackAskCancel;
- (int)callbackAskUserAQuestion:(int)arg1 paramDict:(id)arg2 forController:(id)arg3;
- (int)callbackAskUserForPassword:(int)arg1 param:(id)arg2 forController:(id)arg3;
- (void)handleCancelButton:(id)arg1;
- (void)handleNextButton:(id)arg1;
- (void)initializeServiesDone;
- (void)readyToGuess;
- (void)doneWithAssistantResult:(int)arg1;
- (void)skipWANPort;
- (id)newStepByStepControllerForStep:(int)arg1;
- (void)handleCancelRequest:(_Bool)arg1;
- (void)confirmSkipWANPort;
- (void)continueWithPPPoESettings;
- (void)continueWithSwapCabling;
- (void)skipPluginAudioCabling;
- (void)continueWithDiagsAndUsageStats;
- (void)continueWithGuestNetSettings;
- (void)startSetup:(id)arg1;
- (void)showUIForSetupStatus;
- (void)setupCompleteShowPasswords:(_Bool)arg1;
- (void)replaceSubviewsInView:(id)arg1 newSubviews:(id)arg2 withAnimation:(_Bool)arg3;
- (id)modifyTopoUIInLayer:(id)arg1 withLayout:(id)arg2 newLayout:(id)arg3;
- (void)baseStationConfigurationComplete:(id)arg1;
- (void)assistantUpdateProgress:(id)arg1 forState:(int)arg2;
- (void)assistantWaitingForResourcesStart;
- (void)assistantWaitingForResourcesComplete;
- (void)presentUIForRecommendationStatus;
- (void)presentUIForRecommmendationTargetInfo:(id)arg1;
- (void)presentUIForRecommendationResult:(int)arg1 paramDict:(id)arg2;
- (void)presentUIForStepByStepStart;
- (void)presentUIForStepByStepNextStep:(int)arg1 paramDict:(id)arg2;
- (void)presentUIForStepByStepResult:(int)arg1;
- (void)presentUIForSetupStatusWithRecommendationDict:(id)arg1;
- (void)presentUIForSetupResult:(int)arg1 baseStationInfo:(id)arg2 withPrompt:(id)arg3;
- (void)showTellUserToPlugInEthernetForStatus:(int)arg1 paramDict:(id)arg2;
- (void)showTellUserToResetBroadbandDeviceForStatus:(int)arg1 paramDict:(id)arg2;
- (void)showAskUserForPPPoECredentialsForStatus:(int)arg1 paramDict:(id)arg2;
- (void)showAskUserSwapCablingForStatus:(int)arg1 paramDict:(id)arg2;
- (void)connectionVerificationSucceededForSelector:(int)arg1;
- (void)showUIConfigPromptToSendDiagsUsageStatsWithParamDict:(id)arg1;
- (void)showUIConfigPromptForGuestNetConfigWithParamDict:(id)arg1;
- (int)callbackAskUserForSetupCode:(int)arg1 isRetry:(_Bool)arg2 forController:(id)arg3;
- (int)callbackAskUserForUncertifiedForController:(id)arg1;
- (void)touchInCellAtIndexPath:(id)arg1;
- (id)valueForItemOfType:(id)arg1 atTypeIndex:(unsigned long long)arg2 inCellWithTag:(long long)arg3;
- (_Bool)auUIAlertOKAction:(id)arg1;
- (_Bool)auUIAlertCancelAction:(id)arg1;
- (_Bool)auUIAlertAlternateAction:(id)arg1;
- (_Bool)auUIAlertDestructiveAction:(id)arg1;
- (void)playDoneSound;
- (void)showTellUserToFixTheirInternetConnection;
- (void)handeImmediateCancel;
- (void)presentWaitingForWANViewWithContinueText:(_Bool)arg1;
- (id)radioNameFromBaseStation:(id)arg1;
- (void)keyboardReturnKeySetEnabled:(_Bool)arg1;

@end
