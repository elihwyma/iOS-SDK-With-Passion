/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UITableViewCell.h>

@class NSString, VUIDownloadButton, VUIDownloadEntity, VUIImageView, VUILabel, VUISeparatorView, _TVImageView;

@protocol VUIDownloadEntityTableViewCellDelegate;

__attribute__((visibility("hidden")))
@interface VUIDownloadEntityTableViewCell : UITableViewCell

{
    id <VUIDownloadEntityTableViewCellDelegate> _delegate;
    VUISeparatorView *_topSeparatorView;
    VUISeparatorView *_bottomSeparatorView;
    VUILabel *_titleLabel;
    _TVImageView *_posterImageView;
    VUILabel *_metaDataHeaderFirstLabel;
    VUILabel *_metaDataHeaderSecondLabel;
    VUILabel *_dotSeparatorLabel;
    VUIImageView *_rightImageView;
    VUIDownloadButton *_downloadButton;
    _TVImageView *_episodeImageView;
    VUIDownloadEntity *_downloadEntity;
}

@property (retain, nonatomic) VUILabel *titleLabel;
@property (retain, nonatomic) _TVImageView *posterImageView;
@property (retain, nonatomic) VUILabel *metaDataHeaderFirstLabel;
@property (retain, nonatomic) VUILabel *metaDataHeaderSecondLabel;
@property (retain, nonatomic) VUILabel *dotSeparatorLabel;
@property (retain, nonatomic) VUIImageView *rightImageView;
@property (retain, nonatomic) VUIDownloadButton *downloadButton;
@property (retain, nonatomic) _TVImageView *episodeImageView;
@property (retain, nonatomic) VUIDownloadEntity *downloadEntity;
@property (weak, nonatomic) id <VUIDownloadEntityTableViewCellDelegate> delegate;
@property (retain, nonatomic) VUISeparatorView *topSeparatorView;
@property (retain, nonatomic) VUISeparatorView *bottomSeparatorView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)configureVUIDownloadEntityTableViewCell:(id)arg1 withDownloadEntity:(id)arg2;
+ (id)_generateMetaDataHeaderFirstLabelForDownloadEntity:(id)arg1;
+ (id)_entityPlaceholderImageForDownloadEntity:(id)arg1;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)willTransitionToState:(unsigned long long)arg1;
- (void)rentalExpirationLabelNeedsRelayout:(id)arg1;
- (void)_addDownloadButtonIfRequired:(id)arg1;
- (double)_imageHeightForCurrentSizeClass;
- (id)_episodePlaceholderImage;
- (id)_expirationLabelWithMediaEntity:(id)arg1;
- (void)_removeDownloadButtonIfRequired;
- (struct CGSize)_layoutWithSize:(struct CGSize)arg1 metricsOnly:(_Bool)arg2;
- (void)_configureViewElementsForAX;
- (struct CGSize)_layoutForCategoryAccessibility:(struct CGSize)arg1 metricsOnly:(_Bool)arg2;
- (struct CGSize)_layoutForCompact:(struct CGSize)arg1 metricsOnly:(_Bool)arg2;
- (double)_verticalPaddingForCurrentSizeClass;
- (void)downloadEntity:(id)arg1 numberOfItemsDidChange:(unsigned long long)arg2;
- (void)downloadEntity:(id)arg1 numberOfItemsDownloadingDidChange:(id)arg2;

@end
