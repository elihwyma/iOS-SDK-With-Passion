/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <UIKit/UIView.h>

@class UIButton, UIImage;

@interface AKMarkupButtonContainerView : UIView

{
    _Bool _selected;
    UIButton *_button;
    UIImage *_templateImage;
    UIImage *_colorizedImage;
}

@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) UIImage *templateImage;
@property (retain, nonatomic) UIImage *colorizedImage;
@property (nonatomic) _Bool selected;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)updateForMiniBarState:(_Bool)arg1;
- (struct CGSize)_buttonSize;

@end
