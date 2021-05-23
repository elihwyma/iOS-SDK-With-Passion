/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <UIKit/UIView.h>

@class UIColor;

@interface CACDictationRecognizerModeOverlayView : UIView

{
    struct CGRect _imageRect;
    int _dictationRecognizerMode;
    _Bool _didUpdateItems;
    UIColor *_tintColor;
    struct CGRect _boundsForLastReload;
}

@property (nonatomic) struct CGRect boundsForLastReload;
@property (nonatomic) _Bool didUpdateItems;
@property (retain, nonatomic) UIColor *tintColor;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)setImageRect:(struct CGRect)arg1;
- (id)imageBundle;
- (void)_updateOverlayImage;
- (void)setDictationRecognizerMode:(int)arg1;
- (void)setImageRect:(struct CGRect)arg1 withColor:(id)arg2;
- (id)_imageForCurrentDictiationRecognizerMode;

@end
