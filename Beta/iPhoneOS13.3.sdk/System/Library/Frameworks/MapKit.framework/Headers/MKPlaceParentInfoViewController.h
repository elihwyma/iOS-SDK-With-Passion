/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/MKPlaceSectionViewController.h>

@class MKMapItem, MKPlaceSectionRowView, NSLayoutConstraint, NSString, UIButton, UILabel, UIStackView;

@protocol MKPlaceParentInfoViewControllerDelegate, _MKInfoCardAnalyticsDelegate;

__attribute__((visibility("hidden")))
@interface MKPlaceParentInfoViewController : MKPlaceSectionViewController

{
    MKPlaceSectionRowView *_sectionRow;
    UILabel *_titleLabel;
    UIButton *_nameButton;
    UIStackView *_stackView;
    _Bool _resizableViewsDisabled;
    id <MKPlaceParentInfoViewControllerDelegate> _delegate;
    id <_MKInfoCardAnalyticsDelegate> _analyticsDelegate;
    NSLayoutConstraint *_topToBaselineConstraint;
    NSLayoutConstraint *_baselineToBottomConstraint;
    MKMapItem *_childMapItem;
    MKMapItem *_parentMapItem;
}

@property (retain, nonatomic) NSLayoutConstraint *topToBaselineConstraint;
@property (retain, nonatomic) NSLayoutConstraint *baselineToBottomConstraint;
@property (retain, nonatomic) MKMapItem *childMapItem;
@property (retain, nonatomic) MKMapItem *parentMapItem;
@property (weak, nonatomic) id <MKPlaceParentInfoViewControllerDelegate> delegate;
@property (weak, nonatomic) id <_MKInfoCardAnalyticsDelegate> analyticsDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool resizableViewsDisabled;

+ (id)parentInfoWithPlaceItem:(id)arg1;

- (id)parentIdentifiers;
- (void)setupData;
- (id)font;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (void)_contentSizeDidChange;
- (void)_buttonTapped:(id)arg1;
- (void)_updateFont;
- (void)infoCardThemeChanged;
- (id)infoCardChildPossibleActions;
- (id)infoCardChildUnactionableUIElements;
- (id)initWithChild:(id)arg1;
- (void)fetchParentItem;
- (void)showData;
- (void)updateLabelsColor;
- (id)venueTitleForMapItem:(id)arg1;

@end
