/*
 Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

#import <OnBoardingKit/OBWelcomeController.h>

@class OBBoldTrayButton, PSListController;

__attribute__((visibility("hidden")))
@interface PSUICarrierSpaceOptInSplashScreen : OBWelcomeController

{
    CDUnknownBlockType _continueButtonAction;
    PSListController *_listController;
    OBBoldTrayButton *_continueButton;
}

@property (weak, nonatomic) PSListController *listController;
@property (retain, nonatomic) OBBoldTrayButton *continueButton;
@property (copy, nonatomic) CDUnknownBlockType continueButtonAction;

- (id)initWithParent:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)continueButtonPressed;

@end
