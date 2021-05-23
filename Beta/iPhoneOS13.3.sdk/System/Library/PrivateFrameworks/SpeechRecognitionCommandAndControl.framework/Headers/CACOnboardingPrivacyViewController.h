/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <OnBoardingKit/OBWelcomeController.h>

@class OBBoldTrayButton;

@interface CACOnboardingPrivacyViewController : OBWelcomeController

{
    OBBoldTrayButton *_acceptButton;
}

@property (retain, nonatomic) OBBoldTrayButton *acceptButton;

+ (id)defaultController;

- (void)dismiss;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (_Bool)isModalInPresentation;
- (id)_defaultController;
- (void)allowDataCollection;
- (void)disallowDataCollection;
- (void)showPrivacy;

@end
