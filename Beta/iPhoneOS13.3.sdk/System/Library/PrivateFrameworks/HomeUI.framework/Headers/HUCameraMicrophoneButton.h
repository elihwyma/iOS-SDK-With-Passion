/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIControl.h>

@class UIImage;

@interface HUCameraMicrophoneButton : UIControl

{
    _Bool _on;
    UIImage *_microphoneImage;
}

@property (retain, nonatomic) UIImage *microphoneImage;
@property (nonatomic, getter=isOn) _Bool on;

- (void)setEnabled:(_Bool)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)_updateImage;
- (void)_updateAlpha;
- (id)_circleColor;

@end
