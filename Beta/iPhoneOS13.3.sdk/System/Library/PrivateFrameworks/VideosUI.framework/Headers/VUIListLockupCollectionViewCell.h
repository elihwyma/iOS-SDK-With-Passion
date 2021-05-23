/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUIListCollectionViewCell.h>

@class IKViewElement, VUIListLockupCollectionViewCellView;

__attribute__((visibility("hidden")))
@interface VUIListLockupCollectionViewCell : VUIListCollectionViewCell

{
    CDUnknownBlockType _buttonSelectionHandler;
    IKViewElement *_viewElement;
    IKViewElement *_primaryButtonElement;
    IKViewElement *_secondaryButtonElement;
    VUIListLockupCollectionViewCellView *_listCellView;
}

@property (retain, nonatomic) IKViewElement *viewElement;
@property (retain, nonatomic) IKViewElement *primaryButtonElement;
@property (retain, nonatomic) IKViewElement *secondaryButtonElement;
@property (retain, nonatomic) VUIListLockupCollectionViewCellView *listCellView;
@property (copy, nonatomic) CDUnknownBlockType buttonSelectionHandler;

+ (id)configureWithElement:(id)arg1 existingView:(id)arg2;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;

@end
