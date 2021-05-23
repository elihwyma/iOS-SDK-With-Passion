/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <UIKit/UIButton.h>

@class UIImageView, UILabel;

@interface NUArticleNextButton : UIButton

{
    UILabel *_nextTitleLabel;
    UIImageView *_nextArrowImageView;
}

@property (nonatomic, readonly) UILabel *nextTitleLabel;
@property (nonatomic, readonly) UIImageView *nextArrowImageView;

+ (id)titleLabelFont;
+ (id)nextArrowImage;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (void)setNextLabelTitle:(id)arg1 animated:(_Bool)arg2;

@end
