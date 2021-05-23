/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class MKTransitIncidentItemCellBackgroundView, NSArray, NSLayoutConstraint, UIImageView, _MKUILabel;

@interface MKTransitItemIncidentCell

{
    UIImageView *_incidentIconImageView;
    _Bool _needsConstraintsRebuild;
    NSArray *_constraints;
    _MKUILabel *_titleLabel;
    _MKUILabel *_lastUpdatedLabel;
    MKTransitIncidentItemCellBackgroundView *_backgroundView;
    _Bool _incidentIsBlocking;
    _Bool _useCondensedWidthLayout;
    NSLayoutConstraint *_titleLabelToTopConstraint;
    NSLayoutConstraint *_bottomToLabelConstraint;
    NSLayoutConstraint *_lastUpdatedToTitleBaselineConstraint;
    NSLayoutConstraint *_titleToLastUpdatedLabelConstraint;
    NSLayoutConstraint *_bottomToBackgroundConstraint;
    _Bool _padBottom;
}

@property (nonatomic) long long position;
@property (nonatomic) _Bool padBottom;

- (void)dealloc;
- (void)updateConstraints;
- (void)didMoveToWindow;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)infoCardThemeChanged;
- (void)_contentSizeCategoryDidChange;
- (void)_updateConstraintValues;
- (void)setSeparatorHidden:(_Bool)arg1;
- (void)configureViews;
- (void)_configureWithMessage:(id)arg1 referenceDate:(id)arg2 lastUpdated:(id)arg3 incidentIsBlocking:(_Bool)arg4 shouldShowImage:(_Bool)arg5 inSiri:(_Bool)arg6;
- (void)configureWithIncident:(id)arg1 referenceDate:(id)arg2 shouldShowImage:(_Bool)arg3 inSiri:(_Bool)arg4;
- (id)_blockingImage;
- (id)_nonBlockingImage;
- (double)_leadingMargin;
- (void)setLeadingSeparatorInset:(double)arg1;
- (void)setTrailingSeparatorInset:(double)arg1;
- (void)_updateBottomConstraints;
- (void)rebuildConstraints;
- (double)_trailingMargin;
- (void)configureWithIncidentMessage:(id)arg1 referenceDate:(id)arg2 shouldShowImage:(_Bool)arg3 inSiri:(_Bool)arg4;

@end
