/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/MKPlaceSectionViewController.h>

@class MKMaskContentView, MKPlaceSectionRowView, NSArray, NSLayoutConstraint, NSString, NSURL, UIImageView, UILayoutGuide, UIView, _MKDataHeaderModel, _MKLocalizedHoursBuilder, _MKTokenAttributedString, _MKUILabel;

@protocol GEOTransitLineItem, MKPlaceCardHeaderViewControllerDelegate, _MKPlaceItem;

@interface MKPlaceCardHeaderViewController : MKPlaceSectionViewController

{
    unsigned long long _layout;
    MKPlaceSectionRowView *_titleSectionView;
    MKPlaceSectionRowView *_labelsSectionView;
    UIImageView *_logoImageView;
    _MKUILabel *_titleOnlyLabel;
    _MKUILabel *_firstLabel;
    _MKUILabel *_secondLabel;
    _MKUILabel *_secondaryNameLabel;
    MKMaskContentView *_contentMaskView;
    _MKUILabel *_thirdLabel;
    UIView *_thirdDisplayedLabel;
    NSArray *_constraints;
    UILayoutGuide *_leadingGuide;
    NSURL *_logoURL;
    _MKDataHeaderModel *_dataModel;
    _MKTokenAttributedString *_titleToken;
    _MKTokenAttributedString *_secondaryNameToken;
    _MKTokenAttributedString *_distanceToken;
    _MKTokenAttributedString *_ratingsToken;
    _MKTokenAttributedString *_priceToken;
    _MKTokenAttributedString *_categoryToken;
    _MKTokenAttributedString *_openStateToken;
    _MKTokenAttributedString *_userLocationToken;
    _MKTokenAttributedString *_venueToken;
    _MKTokenAttributedString *_verifiedToken;
    NSLayoutConstraint *_titleTrailingConstraint;
    NSLayoutConstraint *_secondLabelToFirstLabelConstraint;
    double _secondLabelToFirstLabelConstraintConstantMax;
    double _secondLabelToFirstLabelConstraintConstantMin;
    _Bool _isUserLocation;
    _Bool _optionSmallScreen;
    _Bool _constraintsCreated;
    _Bool _notVerified;
    id <_MKPlaceItem> _placeItem;
    id <GEOTransitLineItem> _lineItem;
    id <MKPlaceCardHeaderViewControllerDelegate> _delegate;
    _MKLocalizedHoursBuilder *_localizedHoursBuilder;
}

@property (retain, nonatomic) _MKLocalizedHoursBuilder *localizedHoursBuilder;
@property (nonatomic, readonly) id <_MKPlaceItem> placeItem;
@property (nonatomic, readonly) id <GEOTransitLineItem> lineItem;
@property (weak, nonatomic) id <MKPlaceCardHeaderViewControllerDelegate> delegate;
@property (nonatomic) double contentAlpha;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (double)minimalModeHeight;

- (void)_commonInit;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (void)viewDidLayoutSubviews;
- (void)updateContent;
- (id)titleFont;
- (void)_contentSizeDidChange;
- (void)updateViews;
- (void)infoCardThemeChanged;
- (id)initWithPlaceItem:(id)arg1 layout:(unsigned long long)arg2;
- (void)updateHeaderTitle;
- (double)secondaryNameLabelPadding;
- (void)hideTitle:(_Bool)arg1;
- (void)updateMaskAlpha:(double)arg1 onHeight:(double)arg2 withOffset:(double)arg3;
- (void)ETAProviderUpdated:(id)arg1;
- (id)initWithLineItem:(id)arg1 layout:(unsigned long long)arg2;
- (void)_contentSizeDidChangeNotificationHandler;
- (id)newLabel;
- (void)_createViews;
- (void)_setupDatas;
- (void)animateSecondLabelWithPercentage:(double)arg1;
- (id)secondaryNameTimingFunction;
- (id)_secondaryNameTitle;
- (id)_currentTitle;
- (id)_reviewLabelText;
- (id)_openStateString;
- (id)_verifiedText;
- (_Bool)_isLikelyToShowDistance;
- (_Bool)_hasSecondaryName;
- (_Bool)_mapItemShouldDisplayDistance:(id)arg1;
- (void)_loadLogo;
- (void)setConstraints;

@end
