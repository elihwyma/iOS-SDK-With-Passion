/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIFont;

__attribute__((visibility("hidden")))
@interface _UINavigationBarVisualStyle : NSObject

{
    long long _idiom;
    long long _metrics;
    _Bool _wantsLetterPress;
    _Bool _inPopover;
}

@property (nonatomic) long long metrics;
@property (nonatomic, readonly) _Bool metricsIsMini;
@property (nonatomic, readonly) _Bool metricsHasPrompt;
@property (nonatomic) _Bool wantsLetterPress;
@property (nonatomic) _Bool inPopover;
@property (nonatomic, readonly) long long idiom;
@property (nonatomic, readonly) double backButtonIndicatorSpacing;
@property (nonatomic, readonly) double buttonHeight;
@property (nonatomic, readonly) double barHeight;
@property (nonatomic, readonly) double barPromptHeight;
@property (nonatomic, readonly) double topMargin;
@property (nonatomic, readonly) double horizontalMarginAdjustment;
@property (nonatomic, readonly) double topTitleMargin;
@property (nonatomic, readonly) double topBackMargin;
@property (nonatomic, readonly) double headingFontSize;
@property (nonatomic, readonly) double buttonFontSize;
@property (nonatomic, readonly) double leftTitleMargin;
@property (nonatomic, readonly) double leftBackTitleMargin;
@property (nonatomic, readonly) double leftBackImageMargin;
@property (nonatomic, readonly) double rightTitleMargin;
@property (nonatomic, readonly) double rightImageMargin;
@property (nonatomic, readonly) double leftTextMargin;
@property (nonatomic, readonly) double topImageMargin;
@property (nonatomic, readonly) double bottomImageMargin;
@property (nonatomic, readonly) double bottomButtonMargin;
@property (nonatomic, readonly) double promptInset;
@property (nonatomic, readonly) double interItemSpace;
@property (nonatomic, readonly) double interBlockSpace;
@property (nonatomic, readonly) double maxBackButtonProportion;
@property (nonatomic, readonly) double minBackTextWidth;
@property (nonatomic, readonly) double minBackImageWidth;
@property (nonatomic, readonly) double minButtonWidth;
@property (nonatomic, readonly) double minTitleWidth;
@property (nonatomic, readonly) double buttonImagePadding;
@property (nonatomic, readonly) double promptFontSize;
@property (copy, nonatomic, readonly) UIFont *promptFont;
@property (nonatomic, readonly) double promptTextOffset;
@property (nonatomic, readonly) double navigationItemBaselineOffset;
@property (nonatomic, readonly) double backIndicatorBottomMargin;
@property (copy, nonatomic, readonly) UIFont *defaultTitleFont;
@property (nonatomic, readonly) struct UIEdgeInsets buttonContentEdgeInsets;
@property (nonatomic, readonly) double _legacyLeftTitleMargin;
@property (nonatomic, readonly) double _legacyRightTitleMargin;
@property (nonatomic, readonly) double _legacyButtonFontSize;
@property (nonatomic, readonly) double _legacyButtonImagePadding;

+ (id)visualStyleForIdiom:(long long)arg1;

- (id)initWithIdiom:(long long)arg1;
- (id)buttonFontForStyle:(long long)arg1;
- (id)_legacyButtonFontForStyle:(long long)arg1;
- (double)barHeightForMetrics:(long long)arg1;
- (long long)navigationBar:(id)arg1 metricsForOrientation:(long long)arg2 hasPrompt:(_Bool)arg3;
- (id)defaultTitleColorForUserInterfaceStyle:(long long)arg1 barStyle:(long long)arg2;
- (id)timingFunctionForAnimationInView:(id)arg1 withKeyPath:(id)arg2 isInteractive:(_Bool)arg3;
- (double)textButtonMarginInNavigationBar:(id)arg1;
- (double)imageButtonMarginInNavigationBar:(id)arg1;
- (double)leftBackTitleMarginForCustomBackButtonBackground:(id)arg1;
- (_Bool)shouldForceLegacyLeftBackTitleMarginForCustomBackButtonBackground:(id)arg1;
- (double)leftBackTitleMarginLetterpressPadding;
- (double)backButtonAnimationClippingPadding;

@end
