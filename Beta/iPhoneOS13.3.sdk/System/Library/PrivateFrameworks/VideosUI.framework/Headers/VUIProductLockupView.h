/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIView.h>

@class NSArray, NSNumber, NSString, TVFocusableTextView, TVImageProxy, UIImage, VUILabel, VUIMediaTagsView, VUIRentalExpirationLabel, VUIRoundButton, VUISeparatorView, _TVImageView;

@protocol VUILibraryProductLockupViewLayout, VUIProductLockupViewDelegate;

__attribute__((visibility("hidden")))
@interface VUIProductLockupView : UIView

{
    _Bool _contentDescriptionExpanded;
    _Bool _didSetUpViews;
    id <VUILibraryProductLockupViewLayout> _layout;
    TVImageProxy *_coverArtImageProxy;
    UIImage *_coverArtPlaceholderImage;
    VUIRoundButton *_leftButton;
    UIView *_downloadView;
    NSString *_subtitle;
    NSString *_contentDescription;
    NSString *_genre;
    NSNumber *_duration;
    NSNumber *_releaseYear;
    NSString *_availabilityText;
    NSArray *_badgeResources;
    id <VUIProductLockupViewDelegate> _delegate;
    VUISeparatorView *_topSeparatorView;
    VUISeparatorView *_bottomSeparatorView;
    _TVImageView *_coverArtImageView;
    VUILabel *_subtitleLabel;
    TVFocusableTextView *_descriptionTextView;
    VUIRentalExpirationLabel *_expirationLabel;
    UIImage *_contentRatingImage;
    VUIMediaTagsView *_mediaInfoTagsView;
    VUIMediaTagsView *_mediaBadgeTagsView;
}

@property (retain, nonatomic) VUISeparatorView *topSeparatorView;
@property (retain, nonatomic) VUISeparatorView *bottomSeparatorView;
@property (retain, nonatomic) _TVImageView *coverArtImageView;
@property (retain, nonatomic) VUILabel *subtitleLabel;
@property (retain, nonatomic) TVFocusableTextView *descriptionTextView;
@property (nonatomic) _Bool contentDescriptionExpanded;
@property (nonatomic) _Bool didSetUpViews;
@property (retain, nonatomic) VUIRentalExpirationLabel *expirationLabel;
@property (retain, nonatomic) UIImage *contentRatingImage;
@property (retain, nonatomic) VUIMediaTagsView *mediaInfoTagsView;
@property (retain, nonatomic) VUIMediaTagsView *mediaBadgeTagsView;
@property (retain, nonatomic) id <VUILibraryProductLockupViewLayout> layout;
@property (nonatomic, readonly) TVImageProxy *coverArtImageProxy;
@property (nonatomic, readonly) UIImage *coverArtPlaceholderImage;
@property (retain, nonatomic) VUIRoundButton *leftButton;
@property (retain, nonatomic) UIView *downloadView;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *contentDescription;
@property (copy, nonatomic) NSString *genre;
@property (retain, nonatomic) NSNumber *duration;
@property (copy, nonatomic) NSNumber *releaseYear;
@property (copy, nonatomic) NSString *availabilityText;
@property (copy, nonatomic) NSArray *badgeResources;
@property (weak, nonatomic) id <VUIProductLockupViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)productLockupViewWithMedia:(id)arg1;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)rentalExpirationLabelNeedsRelayout:(id)arg1;
- (struct CGSize)_layoutWithSize:(struct CGSize)arg1 metricsOnly:(_Bool)arg2;
- (struct CGSize)_layoutForCategoryAccessibility:(struct CGSize)arg1 metricsOnly:(_Bool)arg2;
- (struct CGSize)_layoutForCompact:(struct CGSize)arg1 metricsOnly:(_Bool)arg2;
- (void)updateWithMediaEntity:(id)arg1;
- (id)_contentDescriptionAttributedString;
- (struct CGSize)_layoutForStacked:(struct CGSize)arg1 metricsOnly:(_Bool)arg2;
- (struct CGSize)_sizeOfDescriptionLabel:(double)arg1;
- (double)_descriptionTopMarginWithBaselineMargin:(double)arg1 otherFont:(id)arg2;
- (double)_descriptionBottomMarginWithBaselineMargin:(double)arg1;
- (void)setCoverArtImageProxy:(id)arg1 placeholderImage:(id)arg2;

@end
