/*
 Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

#import <UIKit/UIView.h>

@class NSString, UIColor, UIFont, UILabel;

@interface TKLabelContainerView : UIView

{
    UILabel *_label;
    struct UIEdgeInsets _labelPaddingInsets;
}

@property (copy, nonatomic) NSString *labelText;
@property (retain, nonatomic) UIFont *labelFont;
@property (retain, nonatomic) UIColor *labelTextColor;
@property (retain, nonatomic) UIColor *labelShadowColor;
@property (nonatomic) struct UIOffset labelShadowOffset;
@property (nonatomic) struct UIEdgeInsets labelPaddingInsets;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;

@end
