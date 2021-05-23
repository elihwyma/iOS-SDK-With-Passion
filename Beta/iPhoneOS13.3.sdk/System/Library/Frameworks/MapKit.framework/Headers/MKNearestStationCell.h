/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <UIKit/UITableViewCell.h>

@class MKTransitInfoLabelView, NSLayoutConstraint, UIImageView, _MKUILabel;

__attribute__((visibility("hidden")))
@interface MKNearestStationCell : UITableViewCell

{
    _MKUILabel *_stationTitleLabel;
    MKTransitInfoLabelView *_stationInfoLabel;
    UIImageView *_stationImageView;
    NSLayoutConstraint *_stationLabelToImageViewConstraint;
    NSLayoutConstraint *_stationLabelToLeadingEdgeConstraint;
    NSLayoutConstraint *_stationLabelToTopConstraint;
}

- (void)didMoveToWindow;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)_contentSizeCategoryDidChange;
- (void)_updateConstraintValues;
- (void)configureWithNearestStation:(id)arg1;

@end
