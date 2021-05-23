/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUIFocusableCollectionViewCell.h>

@class IKViewElement, VUICardView, VUICardViewLayoutFactory;

__attribute__((visibility("hidden")))
@interface VUICardCollectionViewCell : VUIFocusableCollectionViewCell

{
    IKViewElement *_viewElement;
    VUICardView *_cardView;
    VUICardViewLayoutFactory *_layoutFactory;
}

@property (retain, nonatomic) IKViewElement *viewElement;
@property (retain, nonatomic) VUICardView *cardView;
@property (retain, nonatomic) VUICardViewLayoutFactory *layoutFactory;

+ (long long)_cardLayoutTypeForElement:(id)arg1;
+ (id)cardCellWithElement:(id)arg1 existingCell:(id)arg2;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setCardView:(id)arg1 force:(_Bool)arg2;

@end
