/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSLayoutConstraint, NSString, _MKUILabel;

__attribute__((visibility("hidden")))
@interface MKTransitAttributionSummaryCell

{
    _MKUILabel *_attributionLabel;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_bottomConstraint;
}

@property (copy, nonatomic) NSString *attributionSummary;

- (void)tintColorDidChange;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)_contentSizeCategoryDidChange;
- (void)_updateConstraintValues;
- (id)_moreString;

@end
