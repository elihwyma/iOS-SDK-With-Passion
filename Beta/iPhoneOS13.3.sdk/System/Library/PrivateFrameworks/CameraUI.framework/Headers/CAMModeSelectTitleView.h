/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <UIKit/UIView.h>

@class NSString, UIColor, UILabel;

@interface CAMModeSelectTitleView : UIView

{
    UIColor *_textColor;
    UILabel *__titleLabel;
}

@property (nonatomic, readonly) UILabel *_titleLabel;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) NSString *text;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end
