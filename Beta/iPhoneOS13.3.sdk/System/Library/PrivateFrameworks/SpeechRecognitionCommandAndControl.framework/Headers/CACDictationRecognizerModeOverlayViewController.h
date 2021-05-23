/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <UIKit/UIViewController.h>

@interface CACDictationRecognizerModeOverlayViewController : UIViewController

@property (nonatomic, readonly) long long zOrder;
@property (nonatomic, readonly) _Bool isOverlay;

- (void)loadView;
- (_Bool)_canShowWhileLocked;
- (void)setImageRect:(struct CGRect)arg1;
- (void)setDictationRecognizerMode:(int)arg1;

@end
