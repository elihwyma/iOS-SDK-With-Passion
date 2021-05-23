/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIView.h>

@class NSAttributedString, NSString, UIColor, UIImage;

__attribute__((visibility("hidden")))
@interface VUITextBadge : UIView

{
    int _textBlendMode;
    NSString *_title;
    NSAttributedString *_attributedTitle;
    double _strokeSize;
    double _cornerRadius;
    UIImage *_backgroundImage;
    unsigned long long _badgeStyle;
    UIColor *_tintColor;
    double _fontSize;
    struct UIEdgeInsets _badgeInsets;
}

@property (retain, nonatomic) UIColor *tintColor;
@property (nonatomic) double fontSize;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSAttributedString *attributedTitle;
@property (nonatomic) int textBlendMode;
@property (nonatomic) double strokeSize;
@property (nonatomic) struct UIEdgeInsets badgeInsets;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) UIImage *backgroundImage;
@property (nonatomic) unsigned long long badgeStyle;

+ (id)attributedTextFromString:(id)arg1 fontColor:(id)arg2 fontSize:(double)arg3;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGSize)_textSize;
- (id)initWithTitle:(id)arg1 tintColor:(id)arg2 fontSize:(double)arg3 cornerRadius:(double)arg4;
- (id)initWithAttributedString:(id)arg1 tintColor:(id)arg2 cornerRadius:(double)arg3;

@end
