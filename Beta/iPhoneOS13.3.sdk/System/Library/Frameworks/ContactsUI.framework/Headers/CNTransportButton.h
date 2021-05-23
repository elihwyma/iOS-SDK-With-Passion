/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UIButton.h>

@class UIColor, UIImage;

@interface CNTransportButton : UIButton

{
    _Bool _showBackgroundPlatter;
    long long _transportType;
    UIColor *_glyphColor;
    UIImage *_image;
}

@property (retain, nonatomic) UIImage *image;
@property (nonatomic) long long transportType;
@property (nonatomic) _Bool showBackgroundPlatter;
@property (retain, nonatomic) UIColor *glyphColor;

+ (id)transportButton;
+ (id)transportButtonWithType:(long long)arg1;

- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)tintColorDidChange;
- (void)_updateImageWithType:(long long)arg1;
- (void)_updateTouchInsetsToFillContainerWithSize:(struct CGSize)arg1;

@end
