/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <UIView.h>

@class NSString, SiriUIContentLabel, UIColor, UIFont;

@interface SiriUITextContainerView : UIView

{
    SiriUIContentLabel *_label;
    UIView *_containerView;
    CDStruct_c3b3c0f9 _textContainerStyle;
}

@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) long long textAlignment;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) CDStruct_c3b3c0f9 textContainerStyle;

+ (struct CGSize)sizeThatFits:(struct CGSize)arg1 text:(id)arg2 font:(id)arg3 textContainerStyle:(CDStruct_c3b3c0f9)arg4;
+ (struct CGRect)_textBoundingRectWithSize:(struct CGSize)arg1 text:(id)arg2 font:(id)arg3 textContainerStyle:(CDStruct_c3b3c0f9)arg4;
+ (double)_distanceFromBaselineToBottomWithFont:(id)arg1 textContainerStyle:(CDStruct_c3b3c0f9)arg2;
+ (double)_distanceFromTopToBaselineWithFont:(id)arg1 textContainerStyle:(CDStruct_c3b3c0f9)arg2;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithText:(id)arg1;
- (id)initWithText:(id)arg1 visualEffect:(id)arg2;

@end
