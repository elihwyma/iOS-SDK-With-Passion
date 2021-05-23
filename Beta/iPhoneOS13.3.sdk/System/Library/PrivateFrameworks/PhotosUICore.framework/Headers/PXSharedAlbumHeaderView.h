/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIView.h>

@class PXFeedSectionInfo, UIImage, UIImageView, UILabel;

@interface PXSharedAlbumHeaderView : UIView

{
    _Bool _useInPopover;
    _Bool _isNew;
    _Bool _isObservingLastExitedForYou;
    unsigned long long _textColorStyle;
    unsigned long long _tappableArea;
    unsigned long long _layoutStyle;
    PXFeedSectionInfo *_sectionInfo;
    UIImage *_headerImage;
    unsigned long long _headerImageTag;
    UIImageView *_headerImageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_chevronView;
}

@property (nonatomic) unsigned long long headerImageTag;
@property (retain, nonatomic) UIImageView *headerImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIImageView *chevronView;
@property (nonatomic) _Bool isNew;
@property (nonatomic) _Bool isObservingLastExitedForYou;
@property (nonatomic) _Bool useInPopover;
@property (nonatomic) unsigned long long textColorStyle;
@property (nonatomic) unsigned long long tappableArea;
@property (nonatomic) unsigned long long layoutStyle;
@property (retain, nonatomic) PXFeedSectionInfo *sectionInfo;
@property (retain, nonatomic) UIImage *headerImage;

+ (void)preloadResources;

- (id)init;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_updateBackgroundColor;
- (void)_updateTitle;
- (void)_updateUI;
- (_Bool)_showSubtitle;
- (void)_updateSubtitle;
- (void)_lastExitedForYouDateDidChange:(id)arg1;
- (struct CGSize)_performLayoutInRect:(struct CGRect)arg1 updateSubviewFrames:(_Bool)arg2;
- (void)_updateHeaderImage;
- (void)_updateAvatar:(unsigned long long)arg1;
- (void)_updateIsNew;
- (_Bool)_showChevron;

@end
