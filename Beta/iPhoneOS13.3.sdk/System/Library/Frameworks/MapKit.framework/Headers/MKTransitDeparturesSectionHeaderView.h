/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class MKButtonWithTargetArgument, NSLayoutConstraint, NSString, NSTimer, UIActivityIndicatorView, UIStackView, _MKUILabel;

__attribute__((visibility("hidden")))
@interface MKTransitDeparturesSectionHeaderView

{
    unsigned long long _type;
    _Bool _extraSpacing;
    _MKUILabel *_label;
    UIStackView *_updatingView;
    _MKUILabel *_updatingLabel;
    NSTimer *_updatingLabelTimestampRefreshTimer;
    NSTimer *_updatingViewRefreshTimer;
    UIActivityIndicatorView *_updatingSpinner;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_bottomConstraint;
    MKButtonWithTargetArgument *_button;
}

@property (copy, nonatomic) NSString *text;
@property (nonatomic, readonly) MKButtonWithTargetArgument *button;

+ (id)_font:(unsigned long long)arg1;
+ (id)_buttonFont:(unsigned long long)arg1;

- (void)dealloc;
- (void)tintColorDidChange;
- (void)_contentSizeCategoryDidChange;
- (void)_updateConstraintValues;
- (id)initWithType:(unsigned long long)arg1 extraSpacing:(_Bool)arg2;
- (id)initWithType:(unsigned long long)arg1 extraSpacing:(_Bool)arg2 reuseIdentifier:(id)arg3;

@end
