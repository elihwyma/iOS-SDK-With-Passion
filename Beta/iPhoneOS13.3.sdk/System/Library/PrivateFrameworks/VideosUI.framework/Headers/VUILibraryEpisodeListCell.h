/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUIListCollectionViewCell.h>

@class NSObject, NSString, UIStackView, VUIDownloadButton, VUILabel, VUILibraryEpisodeFrameView, VUISeparatorView;

@protocol VUIMediaEntityAssetController;

__attribute__((visibility("hidden")))
@interface VUILibraryEpisodeListCell : VUIListCollectionViewCell

{
    NSString *_title;
    NSString *_releaseDate;
    NSString *_duration;
    VUILibraryEpisodeFrameView *_imageFrameView;
    VUISeparatorView *_separatorView;
    UIStackView *_episodeInfoStackView;
    VUILabel *_titleLabel;
    VUILabel *_releaseDateLabel;
    VUILabel *_durationLabel;
    VUIDownloadButton *_downloadButton;
    VUILabel *_dotSeparatorLabel;
    NSObject<VUIMediaEntityAssetController> *_assetController;
}

@property (retain, nonatomic) VUILibraryEpisodeFrameView *imageFrameView;
@property (retain, nonatomic) VUISeparatorView *separatorView;
@property (retain, nonatomic) UIStackView *episodeInfoStackView;
@property (retain, nonatomic) VUILabel *titleLabel;
@property (retain, nonatomic) VUILabel *releaseDateLabel;
@property (retain, nonatomic) VUILabel *durationLabel;
@property (retain, nonatomic) VUIDownloadButton *downloadButton;
@property (retain, nonatomic) VUILabel *dotSeparatorLabel;
@property (retain, nonatomic) NSObject<VUIMediaEntityAssetController> *assetController;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *releaseDate;
@property (copy, nonatomic) NSString *duration;

+ (void)configureVUILibraryEpisodeListCell:(id)arg1 withMedia:(id)arg2 andAssetController:(id)arg3;
+ (id)_metadataLabelWithString:(id)arg1 existingLabel:(id)arg2;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_addDownloadButtonIfRequired:(id)arg1;
- (void)_configureDotSeparator;
- (_Bool)_contentSizeCategoryIsAccessibility;
- (double)_metadataHeightToBaselineNonAXContentSizeCategory;
- (double)_metadataScaledTopMarginForNonAXContentSizeCategory;

@end
