/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUFeedCell.h>

@class PXFeedSectionInfo, PXUIButton, UIImage, UILabel;

__attribute__((visibility("hidden")))
@interface PUFeedCaptionCell : PUFeedCell

{
    _Bool _hideCaption;
    PXFeedSectionInfo *_sectionInfo;
    unsigned long long _captionItemIndex;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    PXUIButton *_likeButton;
    struct UIEdgeInsets _contentInsets;
}

@property (nonatomic, readonly) UIImage *likedImage;
@property (nonatomic, readonly) UIImage *notLikedImage;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) PXUIButton *likeButton;
@property (nonatomic) struct UIEdgeInsets contentInsets;
@property (retain, nonatomic) PXFeedSectionInfo *sectionInfo;
@property (nonatomic) unsigned long long captionItemIndex;
@property (nonatomic) _Bool hideCaption;
@property (nonatomic) _Bool isLiked;

- (void)dealloc;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_updateTitle;
- (void)_updateUI;
- (void)_updateSubtitle;
- (struct CGSize)_performLayoutInRect:(struct CGRect)arg1 updateSubviewFrames:(_Bool)arg2;
- (void)_setLikeButtonLiked:(_Bool)arg1;
- (_Bool)_shouldHideLikeButton;
- (void)_updateLikeButton;
- (void)_handleLikeButtonTap:(id)arg1;

@end
