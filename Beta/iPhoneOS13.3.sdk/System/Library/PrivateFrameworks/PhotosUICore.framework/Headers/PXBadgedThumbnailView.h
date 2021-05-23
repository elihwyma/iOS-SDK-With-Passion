/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIView.h>

@class PXCollageView, UIImage, UIImageView;

@interface PXBadgedThumbnailView : UIView

{
    _Bool _showBadge;
    UIImage *_badgeImage;
    UIImageView *_placeholderImageView;
    PXCollageView *_collageView;
    UIImageView *_badgeView;
}

@property (retain, nonatomic) UIImageView *placeholderImageView;
@property (retain, nonatomic) PXCollageView *collageView;
@property (retain, nonatomic) UIImageView *badgeView;
@property (retain, nonatomic) UIImage *badgeImage;
@property (nonatomic, getter=shouldShowLikeBadge) _Bool showBadge;
@property (nonatomic) long long numberOfItems;

- (void)layoutSubviews;
- (_Bool)shouldShowBadge;
- (void)setImage:(id)arg1 forItemAtIndex:(unsigned long long)arg2;
- (id)initWithplaceholderImageView:(id)arg1;
- (id)imageViewForItemAtIndex:(unsigned long long)arg1;
- (void)setImageHidden:(_Bool)arg1 forItemAtIndex:(unsigned long long)arg2;

@end
