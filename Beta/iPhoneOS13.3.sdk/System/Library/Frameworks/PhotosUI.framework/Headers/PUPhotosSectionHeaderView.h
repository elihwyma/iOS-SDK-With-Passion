/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UICollectionReusableView.h>

@class NSArray, NSDate, NSString, UIButton, UIImageView, UILabel, UIView, UIVisualEffectView;

@protocol PUPhotosSectionHeaderViewDelegate;

@interface PUPhotosSectionHeaderView : UICollectionReusableView

{
    UILabel *_titleLabel;
    UILabel *_locationsLabel;
    UILabel *_separatorLabel;
    UILabel *_dateLabel;
    UIImageView *_disclosureIconView;
    UIButton *_actionButton;
    struct CGSize _actionButtonInitialSize;
    double _actionButtonLabelInitialMaxY;
    struct UIEdgeInsets _actionButtonInitialContentInsets;
    _Bool _highlightViewVisible;
    _Bool _inLayoutTransition;
    _Bool _performingBatchDateDependentUpdate;
    UIVisualEffectView *_visualEffectView;
    _Bool _usingBackgroundBlur;
    UIView *_highlightView;
    _Bool _useYearOnlyForDefaultTitle;
    _Bool _showsActionButton;
    _Bool _allowsPhotosDetailsInteraction;
    NSString *_backdropViewGroupName;
    id <PUPhotosSectionHeaderViewDelegate> _delegate;
    long long _style;
    unsigned long long _backgroundStyle;
    long long _sectionIndex;
    NSString *_sectionTitle;
    NSArray *_sectionLocations;
    NSDate *_sectionStartDate;
    NSDate *_sectionEndDate;
    NSString *_actionButtonTitle;
    struct UIEdgeInsets _contentInsets;
    struct UIEdgeInsets _highlightInsets;
}

@property (weak, nonatomic) id <PUPhotosSectionHeaderViewDelegate> delegate;
@property (nonatomic) long long style;
@property (nonatomic) unsigned long long backgroundStyle;
@property (nonatomic) long long sectionIndex;
@property (nonatomic) struct UIEdgeInsets contentInsets;
@property (nonatomic) struct UIEdgeInsets highlightInsets;
@property (retain, nonatomic) NSString *sectionTitle;
@property (nonatomic, readonly) NSString *synthesizedSectionTitle;
@property (retain, nonatomic) NSArray *sectionLocations;
@property (nonatomic, readonly) NSDate *sectionStartDate;
@property (nonatomic, readonly) NSDate *sectionEndDate;
@property (nonatomic) _Bool showsActionButton;
@property (copy, nonatomic) NSString *actionButtonTitle;
@property (nonatomic) _Bool allowsPhotosDetailsInteraction;
@property (nonatomic) _Bool useYearOnlyForDefaultTitle;
@property (copy, nonatomic) NSString *backdropViewGroupName;

+ (_Bool)_hasAccessibilityLargeText;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_updateBackground;
- (void)applyLayoutAttributes:(id)arg1;
- (void)willTransitionFromLayout:(id)arg1 toLayout:(id)arg2;
- (void)didTransitionFromLayout:(id)arg1 toLayout:(id)arg2;
- (_Bool)_disableRasterizeInAnimations;
- (void)didEndDisplaying;
- (void)_updateTitleLabel;
- (void)_handleActionButton:(id)arg1;
- (void)_updateActionButton;
- (void)_updateHighlightView;
- (void)_updateBackdropViewGroupName;
- (void)_setUsingBackgroundBlur:(_Bool)arg1;
- (_Bool)_usingDateAsTitle;
- (void)performBatchUpdateOfDateDependentPropertiesWithBlock:(CDUnknownBlockType)arg1;
- (void)setSectionStartDate:(id)arg1 endDate:(id)arg2;
- (void)_updateLabelsForTextStyle;
- (void)_handleSignificantDateChange:(id)arg1;
- (void)_updateDateDependentLabels;
- (void)_updateDisclosureIconVisibility;
- (void)_updateLocationsLabelVisibility;
- (void)_updateDateLabel;
- (id)_dateRangeCompactFormatter;
- (id)_dateRangeLongFormatter;
- (id)_dateRangeYearFormatter;
- (void)_dateRangeFormatterChanged:(id)arg1;
- (void)_layoutSubviewsForCurentStyle;
- (struct CGSize)_preferredSizeForLabel:(id)arg1;
- (struct CGSize)_preferredSizeForText:(id)arg1 withFont:(id)arg2;
- (_Bool)allowLocationTapForTouch:(id)arg1;
- (void)_setHighlightViewVisible:(_Bool)arg1;
- (void)_hideHighlightView;

@end
