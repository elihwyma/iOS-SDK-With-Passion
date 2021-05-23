/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUGridCell.h>

@class HFItem, HUGridServiceCellLayoutOptions, HUGridServiceCellTextView, HUIconView, HUVisualEffectContainerView, NSString, UIActivityIndicatorView, UIColor, UILabel, UIView, UIVisualEffectView;

@protocol NACancelable;

@interface HUGridServiceCell : HUGridCell

{
    _Bool _shouldColorDescription;
    _Bool _shouldShowLoadingState;
    _Bool _shouldShowRoomName;
    _Bool _hasUpdatedUISinceLastReuse;
    _Bool _showingUpdatingState;
    _Bool _showingProgressIndicator;
    HFItem *_serviceItem;
    UIView *_accessoryView;
    UIColor *_defaultDescriptionColor;
    HUIconView *_iconView;
    HUGridServiceCellTextView *_serviceTextView;
    UILabel *_coloredDescriptionLabel;
    UIVisualEffectView *_descriptionLabelEffectView;
    id <NACancelable> _showUpdatingStateAfterDelayToken;
    id <NACancelable> _showProgressIndicatorAfterDelayToken;
    UIView *_overrideAccessoryView;
    UIActivityIndicatorView *_activityIndicator;
    HUVisualEffectContainerView *_exclamationView;
}

@property (retain, nonatomic) HUIconView *iconView;
@property (retain, nonatomic) HUGridServiceCellTextView *serviceTextView;
@property (retain, nonatomic) UILabel *coloredDescriptionLabel;
@property (retain, nonatomic) UIVisualEffectView *descriptionLabelEffectView;
@property (nonatomic) _Bool hasUpdatedUISinceLastReuse;
@property (nonatomic) _Bool showingUpdatingState;
@property (nonatomic) _Bool showUpdatingStateAfterDelay;
@property (retain, nonatomic) id <NACancelable> showUpdatingStateAfterDelayToken;
@property (nonatomic) _Bool showingProgressIndicator;
@property (nonatomic) _Bool showProgressIndicatorAfterDelay;
@property (retain, nonatomic) id <NACancelable> showProgressIndicatorAfterDelayToken;
@property (retain, nonatomic) UIView *overrideAccessoryView;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (retain, nonatomic) HUVisualEffectContainerView *exclamationView;
@property (retain, nonatomic) HFItem *serviceItem;
@property (retain, nonatomic) HUGridServiceCellLayoutOptions *layoutOptions;
@property (retain, nonatomic) UIView *accessoryView;
@property (nonatomic) _Bool shouldColorDescription;
@property (retain, nonatomic) UIColor *defaultDescriptionColor;
@property (nonatomic) _Bool disableContinuousIconAnimation;
@property (nonatomic) _Bool shouldShowLoadingState;
@property (nonatomic) _Bool shouldShowRoomName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)layoutOptionsClass;
+ (id)_iconTintColor;

- (id)initWithCoder:(id)arg1;
- (id)item;
- (void)setItem:(id)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_updateAccessoryView;
- (void)_updateText;
- (void)updateUIWithAnimation:(_Bool)arg1;
- (id)_textConfiguration;
- (void)layoutOptionsDidChange;
- (void)displayStyleDidChange;
- (void)_setupServiceCell;
- (void)_updateIconAnimated:(_Bool)arg1;
- (void)_updateSecondaryContentDisplayStyle;
- (id)_descriptionTextAttributesWithColor:(id)arg1;
- (void)_createExclamationViewIfNecessary;
- (void)_updateExclamationViewColor;

@end
