/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <UIKit/UIControl.h>

@class UIButton;

@interface PKPaletteButton : UIControl

{
    long long _buttonType;
    UIButton *_button;
}

@property (retain, nonatomic) UIButton *button;
@property (nonatomic) long long buttonType;

- (void)setEnabled:(_Bool)arg1;
- (id)initWithType:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;

@end
