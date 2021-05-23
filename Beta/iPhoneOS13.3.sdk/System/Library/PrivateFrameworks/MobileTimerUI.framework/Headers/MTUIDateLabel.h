/*
 Image: /System/Library/PrivateFrameworks/MobileTimerUI.framework/MobileTimerUI
 */

#import <UIKit/UIView.h>

@class NSDate, NSString, NSTimeZone, UIColor, UIFont, UILabel;

@interface MTUIDateLabel : UIView

{
    NSTimeZone *_timeZone;
    NSDate *_date;
    UILabel *_dateLabel;
    NSString *_dateLabelText;
    UIColor *_textColor;
    UIFont *_font;
    UIFont *_timeDesignatorFont;
}

@property (copy, nonatomic) NSDate *date;
@property (retain, nonatomic) NSTimeZone *timeZone;
@property (nonatomic, readonly) UILabel *dateLabel;
@property (copy, nonatomic) NSString *dateLabelText;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIFont *timeDesignatorFont;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (void)_updateLabel;
- (_Bool)_hasFontInfoForVerticalBaselineSpacing;
- (id)_fontInfoForBaselineSpacing;
- (void)_updateDateString;
- (void)_updateTextString;

@end
