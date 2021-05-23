/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <UIKit/UIButton.h>

@class UIColor, UIImage;

@interface AKToggleButton : UIButton

{
    _Bool _showsBackgroundColor;
    _Bool _shouldTintNormalImage;
    UIColor *_selectedColor;
    UIImage *_templateImage;
}

@property (nonatomic) _Bool showsBackgroundColor;
@property (nonatomic) _Bool shouldTintNormalImage;
@property (retain, nonatomic) UIColor *selectedColor;
@property (retain, nonatomic) UIImage *templateImage;

+ (id)colorImage:(id)arg1 withColor:(id)arg2;

- (void)traitCollectionDidChange:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)tintColorDidChange;
- (void)setSelected:(_Bool)arg1;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)_touchCommitted:(id)arg1;
- (void)_updateSelectionColorsAnimated:(_Bool)arg1;
- (void)_setSelectedStateColorImage;
- (void)_setDeselectedStateColorImage;
- (void)_updateStateColors;
- (id)initWithFrame:(struct CGRect)arg1 templateImage:(id)arg2 autoUpdatesColor:(_Bool)arg3;

@end
