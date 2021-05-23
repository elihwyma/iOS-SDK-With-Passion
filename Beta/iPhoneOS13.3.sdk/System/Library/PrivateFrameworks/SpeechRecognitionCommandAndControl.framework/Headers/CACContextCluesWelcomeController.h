/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <OnBoardingKit/OBTextWelcomeController.h>

@protocol CACContextCluesWelcomeControllerDelegate;

@interface CACContextCluesWelcomeController : OBTextWelcomeController

{
    id <CACContextCluesWelcomeControllerDelegate> _delegate;
}

@property (weak, nonatomic) id <CACContextCluesWelcomeControllerDelegate> delegate;

- (_Bool)_canShowWhileLocked;

@end
