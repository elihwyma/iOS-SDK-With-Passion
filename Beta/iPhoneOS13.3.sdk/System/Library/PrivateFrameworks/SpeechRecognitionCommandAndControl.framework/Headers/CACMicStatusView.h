/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <UIKit/UIView.h>

@class NSTimer, UIImageView;

@interface CACMicStatusView : UIView

{
    _Bool _swapPalette;
    long long _micStatus;
    double _micPowerLevel;
    UIImageView *_statusIndicatorImageView;
    NSTimer *_statusIndicatorAnimationTimer;
}

@property (retain, nonatomic) UIImageView *statusIndicatorImageView;
@property (retain, nonatomic) NSTimer *statusIndicatorAnimationTimer;
@property (nonatomic) long long micStatus;
@property (nonatomic) double micPowerLevel;
@property (nonatomic) _Bool swapPalette;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)imageBundle;
- (void)drawBase;
- (void)transitionToIdle;
- (void)transitionToListening;
- (void)transitionToRecording;
- (void)stopRecordingAnimation;

@end
