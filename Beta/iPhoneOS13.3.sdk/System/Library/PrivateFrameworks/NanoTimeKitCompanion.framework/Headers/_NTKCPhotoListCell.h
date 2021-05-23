/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UICollectionViewCell.h>

@class UIImage, UIImageView, UIView;

@interface _NTKCPhotoListCell : UICollectionViewCell

{
    UIView *_selectionOverlayView;
    UIImageView *_selectionBadge;
    UIView *_highlightOverlayView;
    UIView *_content;
    UIImageView *_contentImageView;
    struct CGRect _crop;
}

@property (retain, nonatomic) UIImage *photo;
@property (nonatomic) struct CGRect crop;

+ (id)reuseIdentifier;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;

@end
