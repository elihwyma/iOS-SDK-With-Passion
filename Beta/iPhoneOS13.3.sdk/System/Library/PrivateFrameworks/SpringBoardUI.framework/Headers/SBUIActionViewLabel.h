/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <UIKit/UIView.h>

@class NSString, UIColor, UIFont, UILabel;

@interface SBUIActionViewLabel : UIView

{
    NSString *_text;
    UIColor *_textColor;
    UILabel *_label;
    UILabel *_emojiLabel;
}

@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) long long textAlignment;
@property (nonatomic) long long lineBreakMode;
@property (nonatomic) long long numberOfLines;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct UIEdgeInsets)alignmentRectInsets;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (void)mt_removeAllVisualStyling;
- (void)_mt_applyVisualStyling:(id)arg1;

@end
