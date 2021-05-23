/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UICollectionViewCell.h>

@class IKImageElement, IKViewElement, NSShadow, TVImageLayout, VUILabel, VUITextLayout, _TVImageView;

__attribute__((visibility("hidden")))
@interface VUITabItemCollectionViewCell : UICollectionViewCell

{
    IKViewElement *_viewElement;
    IKImageElement *_imageElement;
    VUILabel *_titleLabel;
    VUITextLayout *_titleLayout;
    _TVImageView *_imageView;
    TVImageLayout *_imageLayout;
    NSShadow *_shadow;
}

@property (retain, nonatomic) IKViewElement *viewElement;
@property (retain, nonatomic) IKImageElement *imageElement;
@property (retain, nonatomic) VUILabel *titleLabel;
@property (retain, nonatomic) VUITextLayout *titleLayout;
@property (retain, nonatomic) _TVImageView *imageView;
@property (retain, nonatomic) TVImageLayout *imageLayout;
@property (retain, nonatomic) NSShadow *shadow;

+ (id)configureViewWithElement:(id)arg1 existingCell:(id)arg2;
+ (struct CGSize)tabItemSizeForElement:(id)arg1;
+ (id)tabItemTextLayout;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)largeContentTitle;
- (id)largeContentImage;
- (_Bool)scalesLargeContentImage;
- (void)layoutSubviews;
- (id)_imageLayout;
- (id)_titleLayout;

@end
