/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class UIImage, UIImageView, UIInputSwitcherTableCellBackgroundView, UILabel;

__attribute__((visibility("hidden")))
@interface UIInputSwitcherTableCellSegmentView : UIView

{
    UIImage *_invertedImage;
    UIImage *_originalImage;
    _Bool _selected;
    _Bool _usesDarkTheme;
    UILabel *_label;
    UIImageView *_imageView;
    UIInputSwitcherTableCellBackgroundView *_backgroundView;
}

@property (nonatomic, getter=isSelected) _Bool selected;
@property (nonatomic) _Bool usesDarkTheme;
@property (nonatomic, readonly) UILabel *label;
@property (nonatomic, readonly) UIImageView *imageView;
@property (nonatomic, readonly) UIInputSwitcherTableCellBackgroundView *backgroundView;

+ (id)_fontForBiasLabel;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end
