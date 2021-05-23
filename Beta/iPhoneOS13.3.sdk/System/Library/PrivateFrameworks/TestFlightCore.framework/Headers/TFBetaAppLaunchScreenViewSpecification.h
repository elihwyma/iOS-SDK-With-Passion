/*
 Image: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
 */

#import <Foundation/NSObject.h>

@class UIColor, UIFont, UIFontMetrics;

__attribute__((visibility("hidden")))
@interface TFBetaAppLaunchScreenViewSpecification : NSObject

{
    double _viewTopMarginAdditionalPaddingAsFractionOfTotalHeight;
    double _bottommostLabelLastBaselineToLockupTopEdge;
    double _bottommostLabelLastBaselineToImageTopEdge;
    double _buttonBackgroundTopEdgeToPrimaryButtonTopEdge;
    double _buttonHeight;
    double _interButtonPadding;
    double _viewTopMarginToTitleLabelFirstBaseline;
    double _titleLabelLastBaselineToSubtitleLabelFirstBaseline;
    double _lockupBottomEdgeToBodyTitleLabelFirstBaseline;
    double _bodyTitleLabelLastBaselineToBodyTextLabelFirstBaseline;
    UIFont *_titleFont;
    UIFont *_subtitleFont;
    UIFont *_bodyTitleFont;
    UIFont *_bodyTextFont;
    UIFontMetrics *_titleFontMetrics;
    UIFontMetrics *_subtitleFontMetrics;
    UIFontMetrics *_bodyTitleFontMetrics;
    UIFontMetrics *_bodyTextFontMetrics;
    struct UIEdgeInsets _scrollViewContentLayoutInsets;
    struct UIEdgeInsets _buttonModuleContentLayoutInsets;
}

@property (nonatomic, readonly) UIFontMetrics *titleFontMetrics;
@property (nonatomic, readonly) UIFontMetrics *subtitleFontMetrics;
@property (nonatomic, readonly) UIFontMetrics *bodyTitleFontMetrics;
@property (nonatomic, readonly) UIFontMetrics *bodyTextFontMetrics;
@property (nonatomic, readonly) struct UIEdgeInsets scrollViewContentLayoutInsets;
@property (nonatomic, readonly) double viewTopMarginAdditionalPaddingAsFractionOfTotalHeight;
@property (nonatomic, readonly) double bottommostLabelLastBaselineToLockupTopEdge;
@property (nonatomic, readonly) double bottommostLabelLastBaselineToImageTopEdge;
@property (nonatomic, readonly) struct UIEdgeInsets buttonModuleContentLayoutInsets;
@property (nonatomic, readonly) double buttonBackgroundTopEdgeToPrimaryButtonTopEdge;
@property (nonatomic, readonly) double buttonHeight;
@property (nonatomic, readonly) double interButtonPadding;
@property (nonatomic, readonly) double viewTopMarginToTitleLabelFirstBaseline;
@property (nonatomic, readonly) double titleLabelLastBaselineToSubtitleLabelFirstBaseline;
@property (nonatomic, readonly) double lockupBottomEdgeToBodyTitleLabelFirstBaseline;
@property (nonatomic, readonly) double bodyTitleLabelLastBaselineToBodyTextLabelFirstBaseline;
@property (nonatomic, readonly) double primaryButtonCornerRadius;
@property (nonatomic, readonly) UIFont *titleFont;
@property (nonatomic, readonly) UIFont *subtitleFont;
@property (nonatomic, readonly) UIFont *bodyTitleFont;
@property (nonatomic, readonly) UIFont *bodyTextFont;
@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) UIColor *buttonTintColor;
@property (nonatomic, readonly) UIColor *overButtonTintTextColor;
@property (nonatomic, readonly) UIColor *textColor;

- (id)initWithTraitCollection:(id)arg1;
- (id)_titleFontStyle;
- (id)_subtitleFontStyle;
- (id)_bodyTitleFontStyle;
- (id)_bodyTextFontStyle;
- (id)_createTitleFontForTraitCollection:(id)arg1;
- (id)_createSubtitleFontForTraitCollection:(id)arg1;
- (id)_createBodyTitleFontForTraitCollection:(id)arg1;
- (id)_createBodyTextFontForTraitCollection:(id)arg1;

@end
