/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UITableViewCell.h>

@class NSAttributedString, PXBadgedThumbnailView, PXInboxTableViewCellLayoutCoordinator, PXRoundedCornerOverlayView, UIImageView, UILabel;

@protocol PXInboxModel;

@interface PXInboxTableViewCell : UITableViewCell

{
    _Bool _unseen;
    id <PXInboxModel> _model;
    NSAttributedString *_title;
    PXInboxTableViewCellLayoutCoordinator *_layoutCoordinator;
    UIImageView *_placeholderImageView;
    PXRoundedCornerOverlayView *_cornerOverlayView;
    PXBadgedThumbnailView *_thumbnailView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}

@property (retain, nonatomic) UIImageView *placeholderImageView;
@property (retain, nonatomic) PXRoundedCornerOverlayView *cornerOverlayView;
@property (retain, nonatomic) PXBadgedThumbnailView *thumbnailView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (copy, nonatomic) id <PXInboxModel> model;
@property (retain, nonatomic) NSAttributedString *title;
@property (retain, nonatomic) NSAttributedString *subtitle;
@property (nonatomic, getter=isUnseen) _Bool unseen;
@property (retain, nonatomic) PXInboxTableViewCellLayoutCoordinator *layoutCoordinator;

+ (void)preloadResources;
+ (id)placeholderEmptyImage;
+ (id)thumbnailBadgeImageForTintColor:(id)arg1;
+ (id)unseenHighlightColor;

- (void)prepareForReuse;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)_updateTitle;
- (void)_updateTitleLabel;

@end
