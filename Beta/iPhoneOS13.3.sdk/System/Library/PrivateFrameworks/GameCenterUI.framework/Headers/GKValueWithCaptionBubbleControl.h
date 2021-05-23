/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKBaseBubbleWithTextControl.h>

@class GKLabel, GKTextStyle, NSString;

@interface GKValueWithCaptionBubbleControl : GKBaseBubbleWithTextControl

{
    NSString *_valueText;
    NSString *_captionText;
    GKTextStyle *_overrideValueStyle;
    GKTextStyle *_overrideCaptionStyle;
    GKTextStyle *_smallValueStyle;
    GKTextStyle *_normalValueStyle;
    GKTextStyle *_normalCaptionStyle;
    GKLabel *_captionLabel;
    GKLabel *_valueLabel;
}

@property (retain, nonatomic) GKTextStyle *smallValueStyle;
@property (retain, nonatomic) GKTextStyle *normalValueStyle;
@property (retain, nonatomic) GKTextStyle *normalCaptionStyle;
@property (retain, nonatomic) GKLabel *captionLabel;
@property (retain, nonatomic) GKLabel *valueLabel;
@property (retain, nonatomic) NSString *captionText;
@property (retain, nonatomic) NSString *valueText;
@property (nonatomic) _Bool oneLineOnly;
@property (retain, nonatomic) GKTextStyle *overrideValueStyle;
@property (retain, nonatomic) GKTextStyle *overrideCaptionStyle;

+ (void)initialize;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)updateTextFieldsFor3DScaling;
- (id)attributedCaptionText;
- (void)setAttributedCaptionText:(id)arg1;
- (id)attributedValueText;
- (void)setAttributedValueText:(id)arg1;
- (void)_updateCaptionTextLabel;
- (id)captionTextStyle;
- (void)_updateValueTextLabel;
- (id)valueTextStyle;
- (void)setValueTextForInteger:(long long)arg1;
- (void)blinkOutThenInWithValueText:(id)arg1 captionText:(id)arg2 afterDelay:(double)arg3;

@end
