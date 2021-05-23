/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <OnBoardingKit/OBWelcomeController.h>

#import <HomeUI/Swift-Protocol.h>

@class HMHome, NSArray, NSDictionary, NSString, OBLinkTrayButton, OBTrayButton;

@protocol HUConfigurationViewControllerDelegate;

@interface HUHomePersonalIdentityDeviceLanguageSetupViewController : OBWelcomeController <Swift>

{
    id <HUConfigurationViewControllerDelegate> _delegate;
    NSString *_overrideTargetLanguage;
    HMHome *_home;
    NSString *_targetLanguage;
    OBTrayButton *_continueButton;
    OBLinkTrayButton *_customizeButton;
    NSArray *_supportedMultiUserLanguages;
    NSDictionary *_languageToHomePodsMapping;
}

@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) NSString *targetLanguage;
@property (retain, nonatomic) OBTrayButton *continueButton;
@property (retain, nonatomic) OBLinkTrayButton *customizeButton;
@property (retain, nonatomic) NSArray *supportedMultiUserLanguages;
@property (retain, nonatomic) NSDictionary *languageToHomePodsMapping;
@property (retain, nonatomic) NSString *overrideTargetLanguage;
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
- (void)_cancelLanguageSetup;
- (void)_completeLanguageSetup;
- (void)_changeSiriLanguage;

@end
