/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUIListCollectionViewCell.h>

@class IKViewElement, VUIFavoriteView;

__attribute__((visibility("hidden")))
@interface VUIFavoriteCollectionViewCell : VUIListCollectionViewCell

{
    VUIFavoriteView *_favoriteView;
    IKViewElement *_viewElement;
}

@property (retain, nonatomic) IKViewElement *viewElement;
@property (retain, nonatomic) VUIFavoriteView *favoriteView;

+ (id)configureWithElement:(id)arg1 existingView:(id)arg2;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;

@end
