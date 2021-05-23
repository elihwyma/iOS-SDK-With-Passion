/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIView.h>

@class HFServiceNameComponents, NSString, UIColor, UIFont;

@interface HUGridServiceCellTextView : UIView

{
    _Bool _textColorFollowsTintColor;
    _Bool _shouldShowRoomName;
    double _lineHeight;
    HFServiceNameComponents *_serviceNameComponents;
    NSString *_descriptionText;
    UIColor *_textColor;
    double _descriptionTextColorDimmingFactor;
    UIFont *_font;
    unsigned long long _mode;
}

@property (nonatomic) unsigned long long mode;
@property (retain, nonatomic) HFServiceNameComponents *serviceNameComponents;
@property (retain, nonatomic) NSString *descriptionText;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) _Bool textColorFollowsTintColor;
@property (nonatomic) double descriptionTextColorDimmingFactor;
@property (nonatomic) double lineHeight;
@property (nonatomic) _Bool shouldShowRoomName;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic, readonly) double topToFirstBaselineDistance;
@property (nonatomic, readonly) double lastBaselineToBottomDistance;

+ (double)minimumDescriptionScaleFactor;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)tintColorDidChange;
- (void)drawRect:(struct CGRect)arg1;
- (void)_updateMode;
- (id)_commonTextAttributesWithLineBreakMode:(long long)arg1;
- (id)_combinedAttributedString;
- (void)_drawSeperateLabels;
- (void)_drawCombinedLabel;
- (void)_drawDescriptionLabel;
- (id)_effectiveTextColor;

@end
