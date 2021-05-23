/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/MKTableViewCell.h>

@class NSDate, NSLayoutConstraint, NSString, UIImage, UIImageView, _MKUILabel;

__attribute__((visibility("hidden")))
@interface MKTransitIncidentSummaryCell : MKTableViewCell

{
    _MKUILabel *_titleLabel;
    _MKUILabel *_summaryLabel;
    _MKUILabel *_startedLabel;
    UIImageView *_iconImageView;
    NSLayoutConstraint *_titleToTopConstraint;
    NSLayoutConstraint *_summaryToTitleConstraint;
    NSLayoutConstraint *_startedToSummaryConstraint;
    NSDate *_startDate;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *summary;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) UIImage *icon;

- (void)dealloc;
- (void)didMoveToWindow;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)_contentSizeCategoryDidChange;
- (void)_updateConstraintValues;
- (void)setConstraints;
- (void)_updateStartLabel;

@end
