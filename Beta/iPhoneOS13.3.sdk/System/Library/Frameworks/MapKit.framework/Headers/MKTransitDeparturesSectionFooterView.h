/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class MKButtonWithTargetArgument, NSLayoutConstraint;

__attribute__((visibility("hidden")))
@interface MKTransitDeparturesSectionFooterView

{
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_bottomConstraint;
    MKButtonWithTargetArgument *_button;
}

@property (nonatomic, readonly) MKButtonWithTargetArgument *button;

+ (id)_font;
+ (double)defaultHeight;

- (void)tintColorDidChange;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)_contentSizeCategoryDidChange;
- (void)_updateConstraintValues;

@end
