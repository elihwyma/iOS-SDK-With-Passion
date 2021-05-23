/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UITextView.h>

@class NSString, UIColor, UIFont;

@interface EKTextViewWithLabelTextMetrics : UITextView

{
    long long lineBreakMode;
}

@property (nonatomic) long long numberOfLines;
@property (nonatomic) long long lineBreakMode;
@property (nonatomic) long long textAlignment;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (copy, nonatomic) NSString *text;

- (void)setURL:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1 limitedToNumberOfLines:(long long)arg2;

@end
