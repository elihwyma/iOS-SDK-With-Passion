/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUImageOBWelcomeController.h>

#import <HomeUI/Swift-Protocol.h>

@class HMHome, HUPersonalRequestsEditorItemManager, NSArray, NSString, OBLinkTrayButton, OBTrayButton;

@protocol HUConfigurationViewControllerDelegate;

@interface HUHomeAssistantDeviceLanguageSetupViewController : HUImageOBWelcomeController <Swift>

{
    _Bool _maxNumberOfVoicesReached;
    _Bool _shouldSetMultiUserIsEnabled;
    id <HUConfigurationViewControllerDelegate> _delegate;
    OBTrayButton *_continueButton;
    OBLinkTrayButton *_customizeButton;
    HUPersonalRequestsEditorItemManager *_prEditorItemManager;
    NSArray *_supportedMultiUserLanguages;
    NSArray *_homeAssistantDevicesHavingLanguageMismatch;
    HMHome *_home;
}

@property (retain, nonatomic) OBTrayButton *continueButton;
@property (retain, nonatomic) OBLinkTrayButton *customizeButton;
@property (retain, nonatomic) HUPersonalRequestsEditorItemManager *prEditorItemManager;
@property (retain, nonatomic) NSArray *supportedMultiUserLanguages;
@property (retain, nonatomic) NSArray *homeAssistantDevicesHavingLanguageMismatch;
@property (retain, nonatomic) HMHome *home;
@property (nonatomic) _Bool maxNumberOfVoicesReached;
@property (nonatomic) _Bool shouldSetMultiUserIsEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <HUConfigurationViewControllerDelegate> delegate;
@property (nonatomic) _Bool isFinalStep;

- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithHome:(id)arg1;
- (id)hu_preloadContent;
- (void)_setupPersonalRequestsItemInfrastructure;
- (void)_cancelLanguageSetup;
- (void)_changeLanguage;
- (void)_completeLanguageSetup;
- (void)_cancelLanguageSetupWithoutWarningUser;
- (void)_turnOffPersonalRequests;
- (void)userTappedContinueFromWarning;
- (void)userTappedCancelFromWarning;

@end
