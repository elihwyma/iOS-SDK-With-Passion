/*
 Image: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
 */

#import <OnBoardingKit/OBTextWelcomeController.h>

@protocol VTUISiriDataSharingOptInViewControllerDelegate;

@interface VTUISiriDataSharingOptInViewController : OBTextWelcomeController

{
    id <VTUISiriDataSharingOptInViewControllerDelegate> _delegate;
}

@property (weak, nonatomic) id <VTUISiriDataSharingOptInViewControllerDelegate> delegate;

- (_Bool)_canShowWhileLocked;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)shouldInlineButtonTray;
- (id)initWithViewStyle:(long long)arg1;

@end
