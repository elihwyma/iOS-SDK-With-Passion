/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <UIKit/UIView.h>

@class NSString, SBUILegibilityLabel, UIFont, _UILegibilitySettings;

@interface SBFLockScreenDateSubtitleView : UIView

{
    SBUILegibilityLabel *_label;
    UIView *_accessoryView;
    _UILegibilitySettings *_legibilitySettings;
    double _strength;
}

@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) double strength;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic, readonly) double baselineOffsetFromOrigin;
@property (nonatomic, readonly) double baselineOffsetFromBottom;
@property (retain, nonatomic) NSString *string;
@property (retain, nonatomic) UIView *accessoryView;

+ (id)labelFont;
+ (double)scaledFontSize:(double)arg1 withMaximumFontSizeCategory:(id)arg2;
+ (CDStruct_91d2e2b9)labelFontMetrics;

- (id)init;
- (void)dealloc;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (double)interItemSpacing;
- (void)_updateForCurrentSizeCategory;
- (id)initWithString:(id)arg1 accessoryView:(id)arg2;
- (struct CGRect)subtitleLabelFrame;
- (struct CGRect)accessoryViewFrame;

@end
