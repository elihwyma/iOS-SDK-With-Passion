/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <SpeechRecognitionCommandAndControl/CACCommandRecognizer.h>

@interface CACCommandRecognizerCustom : CACCommandRecognizer

+ (id)customCommandRecognizers;

- (void)_buildLanguageModelUsingCommands;

@end
