/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <SpeechRecognitionCommandAndControl/CACSimpleContentViewManager.h>

@interface CACDisambiguationPresentationManager : CACSimpleContentViewManager

- (_Bool)isOverlay;
- (void)showWithDisambiguationItems:(id)arg1 alertTitle:(id)arg2;
- (void)showWithDisambiguationItems:(id)arg1 alertTitle:(id)arg2 alertMessage:(id)arg3;
- (void)dialDiambiguationPresentationViewController:(id)arg1 hideWithCompletion:(CDUnknownBlockType)arg2;
- (void)showWithDisambiguationItems:(id)arg1;

@end
