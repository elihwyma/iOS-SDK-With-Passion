/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIScrollView.h>

@class NSString, UIFont, VUIFocusableTextView, VUILabel, VUILibraryEpisodeFrameView, VUIMediaItem, VUIMediaTagsView;

@protocol VUIEpisodeDetailViewDelegate;

__attribute__((visibility("hidden")))
@interface VUIEpisodeDetailView : UIScrollView

{
    id <VUIEpisodeDetailViewDelegate> _episodeViewDelegate;
    VUILibraryEpisodeFrameView *_imageFrameView;
    VUILabel *_episodeTitleLabel;
    VUILabel *_seasonNumberLabel;
    VUILabel *_episodeNumberLabel;
    VUILabel *_releaseDateLabel;
    VUILabel *_dotSeparatorLabel;
    VUIFocusableTextView *_contentDescriptionView;
    UIFont *_contentDescriptionFont;
    VUIMediaItem *_mediaItem;
    VUIMediaTagsView *_mediaBadgeTagsView;
}

@property (retain, nonatomic) VUILibraryEpisodeFrameView *imageFrameView;
@property (retain, nonatomic) VUILabel *episodeTitleLabel;
@property (retain, nonatomic) VUILabel *seasonNumberLabel;
@property (retain, nonatomic) VUILabel *episodeNumberLabel;
@property (retain, nonatomic) VUILabel *releaseDateLabel;
@property (retain, nonatomic) VUILabel *dotSeparatorLabel;
@property (retain, nonatomic) VUIFocusableTextView *contentDescriptionView;
@property (retain, nonatomic) UIFont *contentDescriptionFont;
@property (retain, nonatomic) VUIMediaItem *mediaItem;
@property (retain, nonatomic) VUIMediaTagsView *mediaBadgeTagsView;
@property (weak, nonatomic) id <VUIEpisodeDetailViewDelegate> episodeViewDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)configureEpisodeDetailView:(id)arg1 withMedia:(id)arg2 viewSize:(struct CGSize)arg3;
+ (struct CGSize)_episodeFrameImageSizeWithViewSize:(struct CGSize)arg1;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_configureDotSeparator;
- (void)didTapButtonForEpisodeFrameView:(id)arg1;
- (double)_descriptionTopMarginWithBaselineMargin:(double)arg1 otherFont:(id)arg2;
- (double)_descriptionBottomMarginWithBaselineMargin:(double)arg1;

@end
