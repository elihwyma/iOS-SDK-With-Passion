/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <SpeechRecognitionCommandAndControl/CACSimpleContentViewManager.h>

@protocol CACDictationRecognizerModeOverlayManagerDelegate;

@interface CACDictationRecognizerModeOverlayManager : CACSimpleContentViewManager

{
    id <CACDictationRecognizerModeOverlayManagerDelegate> _delegate;
}

@property (weak, nonatomic) id <CACDictationRecognizerModeOverlayManagerDelegate> delegate;

- (_Bool)isOverlay;
- (void)showOverlayForDictiationRecognizerMode;

@end
