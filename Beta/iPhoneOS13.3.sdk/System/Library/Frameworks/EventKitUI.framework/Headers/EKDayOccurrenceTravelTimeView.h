/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UIView.h>

@class NSArray, NSAttributedString, NSLayoutConstraint, UIColor, UIImageView, UILabel;

@protocol EKDayOccurrenceTravelTimeViewMetricsDelegate;

@interface EKDayOccurrenceTravelTimeView : UIView

{
    _Bool _selected;
    _Bool _animatingAlpha;
    id <EKDayOccurrenceTravelTimeViewMetricsDelegate> _delegate;
    UIColor *_elementColor;
    UIColor *_lineColor;
    long long _occurrenceBackgroundStyle;
    long long _routingMode;
    double _hairlineYPosition;
    UIImageView *_travelTimeIcon;
    UILabel *_travelTimeLabel;
    UIView *_horizontalLineView;
    NSLayoutConstraint *_iconWidth;
    NSLayoutConstraint *_iconHeight;
    NSLayoutConstraint *_leadingHorizontalPad;
    NSLayoutConstraint *_trailingHorizontalPad;
    NSArray *_constraints;
}

@property (retain) UIImageView *travelTimeIcon;
@property (retain) UILabel *travelTimeLabel;
@property (retain) UIView *horizontalLineView;
@property (retain) NSLayoutConstraint *iconWidth;
@property (retain) NSLayoutConstraint *iconHeight;
@property (retain) NSLayoutConstraint *leadingHorizontalPad;
@property (retain) NSLayoutConstraint *trailingHorizontalPad;
@property (retain) NSArray *constraints;
@property _Bool animatingAlpha;
@property (weak, nonatomic) id <EKDayOccurrenceTravelTimeViewMetricsDelegate> delegate;
@property (retain, nonatomic) UIColor *elementColor;
@property (retain, nonatomic) UIColor *lineColor;
@property (nonatomic) _Bool selected;
@property (nonatomic) long long occurrenceBackgroundStyle;
@property (nonatomic) long long routingMode;
@property (copy, nonatomic) NSAttributedString *travelTimeString;
@property (nonatomic) double hairlineYPosition;

+ (void)initialize;
+ (double)minimumNaturalHeightForPrimaryTextUsingSmallText:(_Bool)arg1 sizeClass:(long long)arg2;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (double)_iconScale;
- (id)_textFont;
- (id)_travelTimeIconForTravelModeWithColor:(id)arg1;
- (struct UIEdgeInsets)_parentPadding;
- (void)_updateStringsColorsAndConstraintConstants;
- (double)alphaForElements;
- (id)initWithReusableTravelTimeView:(id)arg1;

@end
