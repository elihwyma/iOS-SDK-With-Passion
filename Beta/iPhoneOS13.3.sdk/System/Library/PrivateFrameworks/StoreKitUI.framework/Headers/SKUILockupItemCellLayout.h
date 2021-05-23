/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIItemCellLayout.h>

@class NSString, SKUIEmbeddedMediaView, SKUILockupMetadataView, UIImage, UILabel;

__attribute__((visibility("hidden")))
@interface SKUILockupItemCellLayout : SKUIItemCellLayout

{
    struct UIEdgeInsets _contentInsets;
    struct CGSize _imageBoundingSize;
    long long _itemOfferStyle;
    UILabel *_itemOfferTextLabel;
    long long _layoutStyle;
    long long _lockupSize;
    SKUILockupMetadataView *_metadataView;
    _Bool _playsInlineVideo;
    long long _verticalAlignment;
    SKUIEmbeddedMediaView *_videoThumbnailView;
    struct CGSize _videoThumbnailSize;
}

@property (nonatomic) struct UIEdgeInsets contentInsets;
@property (nonatomic) struct CGSize imageBoundingSize;
@property (nonatomic) long long itemOfferStyle;
@property (nonatomic) long long layoutStyle;
@property (nonatomic) long long lockupSize;
@property (nonatomic) long long verticalAlignment;
@property (nonatomic) unsigned long long visibleFields;
@property (copy, nonatomic) NSString *artistName;
@property (copy, nonatomic) NSString *categoryString;
@property (copy, nonatomic) NSString *editorialBadgeString;
@property (copy, nonatomic) NSString *itemCountString;
@property (copy, nonatomic) NSString *releaseDateString;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long numberOfUserRatings;
@property (nonatomic) float userRating;
@property (retain, nonatomic) UIImage *videoThumbnailImage;
@property (nonatomic) struct CGSize videoThumbnailSize;
@property (nonatomic) _Bool playsInlineVideo;

+ (double)heightForLockupStyle:(struct SKUILockupStyle)arg1 item:(id)arg2 editorial:(id)arg3 clientContext:(id)arg4;
+ (struct CGSize)videoThumbnailSizeForVideo:(id)arg1 clientContext:(id)arg2;
+ (double)heightForLockupComponent:(id)arg1 clientContext:(id)arg2;

- (void)dealloc;
- (void)prepareForReuse;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (id)initWithParentView:(id)arg1;
- (id)initWithTableViewCell:(id)arg1;
- (void)setIconImage:(id)arg1;
- (void)setClientContext:(id)arg1;
- (void)setColoringWithColorScheme:(id)arg1;
- (id)initWithCollectionViewCell:(id)arg1;
- (void)layoutForItemOfferChange;
- (void)_initSKUILockupItemCellLayout;
- (void)_beginVideoPlaybackAction:(id)arg1;
- (void)_layoutHorizontal;
- (void)_layoutVertical;
- (struct CGRect)_layoutIconImageView;
- (_Bool)_isItemOfferHidden;
- (id)_itemOfferTextLabel;
- (void)endVideoPlaybackAnimated:(_Bool)arg1;
- (void)playInlineVideoWithURL:(id)arg1;

@end
