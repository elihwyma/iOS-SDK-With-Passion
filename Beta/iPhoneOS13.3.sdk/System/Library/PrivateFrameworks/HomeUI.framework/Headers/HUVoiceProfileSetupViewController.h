/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUImageOBWelcomeController.h>

#import <HomeUI/Swift-Protocol.h>

@class HMHome, HUPersonalRequestsEditorItemManager, NSString, OBLinkTrayButton, OBTrayButton, VTUIEnrollTrainingViewController;

@protocol HUConfigurationViewControllerDelegate;

@interface HUVoiceProfileSetupViewController : HUImageOBWelcomeController <Swift>

{
    id <HUConfigurationViewControllerDelegate> _delegate;
    HMHome *_home;
    OBTrayButton *_setupButton;
    OBLinkTrayButton *_notNowButton;
    HUPersonalRequestsEditorItemManager *_prEditorItemManager;
    VTUIEnrollTrainingViewController *_voiceProfileVC;
}

@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) OBTrayButton *setupButton;
@property (retain, nonatomic) OBLinkTrayButton *notNowButton;
@property (retain, nonatomic) HUPersonalRequestsEditorItemManager *prEditorItemManager;
@property (retain, nonatomic) VTUIEnrollTrainingViewController *voiceProfileVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <HUConfigurationViewControllerDelegate> delegate;
@property (nonatomic) _Bool isFinalStep;

- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithHome:(id)arg1;
- (void)continueSetup;
- (void)skipSetup;
- (void)showLearnMore;
- (void)dismissSetup;
- (id)hu_preloadContent;
- (void)_setupPersonalRequestsItemInfrastructure;
- (void)_turnOffPersonalRequests;
- (void)userTappedContinueFromWarning;
- (void)userTappedCancelFromWarning;
- (void)_setupVoiceProfile:(id)arg1;
- (void)_dontSetupVoiceProfileWithWarning:(id)arg1;
- (void)_dontSetupVoiceProfile;
- (void)_turnOffVoiceRecognition;
- (void)_resetVoiceProfileSetup;

@end
