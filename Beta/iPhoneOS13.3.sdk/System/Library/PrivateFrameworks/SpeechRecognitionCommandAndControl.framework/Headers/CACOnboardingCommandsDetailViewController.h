/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <OnBoardingKit/OBTextWelcomeController.h>

@class NSArray, OBTrayButton;

@interface CACOnboardingCommandsDetailViewController : OBTextWelcomeController

{
    _Bool _hideTrayButtons;
    _Bool _skipAnalytics;
    OBTrayButton *_mainButton;
    OBTrayButton *_secondaryButton;
    CACOnboardingCommandsDetailViewController *_nextCommandGroupVC;
    NSArray *_commandGroups;
}

@property (retain, nonatomic) NSArray *commandGroups;
@property (nonatomic) _Bool hideTrayButtons;
@property (nonatomic) _Bool skipAnalytics;
@property (nonatomic, readonly) OBTrayButton *mainButton;
@property (nonatomic, readonly) OBTrayButton *secondaryButton;
@property (retain, nonatomic) CACOnboardingCommandsDetailViewController *nextCommandGroupVC;

- (void)dismiss;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (_Bool)shouldInlineButtonTray;
- (_Bool)_shouldShowAnalytics;
- (void)showPrivacyIfPossible;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 commandGroups:(id)arg3;
- (_Bool)_isDataCollectionAvailable;

@end
