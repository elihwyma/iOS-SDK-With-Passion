/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <UIKit/UIView.h>

@class CLLocation, MKLocationManager, MKMapItem, NSArray, NSMutableArray, NSString, NSTimer, UIColor, UIImageView, _MKUILabel;

@protocol _MKResultViewDelegate;

@interface _MKResultView : UIView

{
    NSArray *_mapItems;
    CLLocation *_referenceLocation;
    _Bool _alwaysUsesBusinessLayout;
    int _layoutType;
    id <_MKResultViewDelegate> delegate;
    _Bool _selected;
    _Bool _showsDistance;
    NSMutableArray *_resultConstraints;
    MKLocationManager *_locManager;
    NSString *_primaryLabelText;
    NSString *_secondaryLabelText;
    NSTimer *_refLocationTimer;
    _Bool _useSpotlightVibrancy;
    int _iconFormat;
    _MKUILabel *_nameLabel;
    _MKUILabel *_secondaryLabel;
    _MKUILabel *_tertiaryLabel;
    id <_MKResultViewDelegate> _delegate;
    double _fallbackDistance;
    UIColor *_primaryTextColor;
    UIColor *_secondaryTextColor;
    UIImageView *_imageView;
}

@property (retain, nonatomic) _MKUILabel *nameLabel;
@property (retain, nonatomic) _MKUILabel *secondaryLabel;
@property (retain, nonatomic) _MKUILabel *tertiaryLabel;
@property (nonatomic) _Bool useSpotlightVibrancy;
@property (nonatomic) double fallbackDistance;
@property (nonatomic) _Bool alwaysUsesBusinessLayout;
@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic) int iconFormat;
@property (weak, nonatomic) id <_MKResultViewDelegate> delegate;
@property (nonatomic, readonly) double preferredHeight;
@property (retain, nonatomic) UIColor *primaryTextColor;
@property (retain, nonatomic) UIColor *secondaryTextColor;
@property (retain, nonatomic) MKMapItem *mapItem;
@property (retain, nonatomic) NSString *primaryLabelText;
@property (retain, nonatomic) NSString *secondaryLabelText;
@property (retain, nonatomic) NSArray *mapItems;
@property (retain, nonatomic) CLLocation *referenceLocation;
@property (nonatomic) _Bool selected;
@property (nonatomic) _Bool showsDistance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)requiresConstraintBasedLayout;

- (id)init;
- (void)dealloc;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (void)_commonInit;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setNeedsUpdateConstraints;
- (void)updateConstraints;
- (void)updateLayout;
- (void)_updateColors;
- (struct CGSize)_imageSize;
- (void)handleTap:(id)arg1;
- (id)initWithMapItem:(id)arg1;
- (void)_contentSizeCategoryDidChange;
- (void)locationManagerUpdatedLocation:(id)arg1;
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
- (void)locationManagerDidReset:(id)arg1;
- (_Bool)locationManagerShouldPauseLocationUpdates:(id)arg1;
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)_locationApprovalDidChange;
- (id)initWithFrame:(struct CGRect)arg1 highlightsOnTouch:(_Bool)arg2;
- (void)_updateFontSizing;
- (id)_labelWithFontSize:(double)arg1;
- (void)_updatePrimaryColors;
- (void)_updateSecondaryColors;
- (void)updateSubviews;
- (double)_expectedHeightForLabels;
- (void)addLabelIfNecessary:(id)arg1;
- (unsigned long long)_maxSecondaryStringLengthForEndingString:(id)arg1;
- (unsigned long long)_maxNameLengthForEndingString:(id)arg1;
- (id)_defaultPrimaryLabel;
- (id)_defaultSecondaryCategoryLabel;
- (void)_updateLayoutForAddress;
- (void)_updateLayoutForBusinessOrCategory;
- (void)updateImageView;
- (void)_cancelReferenceLocationTimer;
- (void)_fireReferenceLocationTimer;
- (id)initWithMapItems:(id)arg1 primaryLabelText:(id)arg2;

@end
