/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <UIKit/UIControl.h>

@class NSString, UIColor, UIImage, UIImageView, UILabel, UIView;

@interface SBUIStarkBannerViewButton : UIControl

{
    NSString *_text;
    UILabel *_textLabel;
    UIColor *_unselectedTextColor;
    UIColor *_selectedTextColor;
    UIImage *_unselectedImage;
    UIImage *_selectedImage;
    UIView *_highlightView;
    UIImageView *_imageView;
    UIColor *_highlightColor;
}

@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIColor *unselectedTextColor;
@property (retain, nonatomic) UIColor *selectedTextColor;
@property (retain, nonatomic) UIImage *unselectedImage;
@property (retain, nonatomic) UIImage *selectedImage;
@property (retain, nonatomic) UIColor *highlightColor;

+ (id)buttonWithOK;
+ (id)buttonWithText:(id)arg1;
+ (id)buttonWithChevronImageForTraitCollection:(id)arg1;
+ (id)_chevronImageForTraitCollection:(id)arg1 selected:(_Bool)arg2;
+ (id)_chevronImageForTraitCollection:(id)arg1;
+ (id)buttonWithOKAndHighlightColor:(id)arg1;
+ (id)buttonWithText:(id)arg1 highlightColor:(id)arg2;
+ (id)buttonWithChevronImageForTraitCollection:(id)arg1 highlightColor:(id)arg2;
+ (id)highlightColorForNightTime:(_Bool)arg1;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;

@end
