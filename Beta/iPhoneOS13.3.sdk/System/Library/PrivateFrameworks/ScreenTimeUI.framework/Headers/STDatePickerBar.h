/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <UIKit/UIView.h>

@class UIButton, UIImage, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface STDatePickerBar : UIView

{
    UILabel *_dateLabel;
    UIButton *_leftArrowButton;
    UIButton *_rightArrowButton;
    UIImageView *_bottomBorderLine;
}

@property (readonly) UILabel *dateLabel;
@property (readonly) UIButton *leftArrowButton;
@property (readonly) UIButton *rightArrowButton;
@property (readonly) UIImageView *bottomBorderLine;
@property (readonly) UIImage *horizontalLineImage;

- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_stDatePickerBarCommonInit;

@end
