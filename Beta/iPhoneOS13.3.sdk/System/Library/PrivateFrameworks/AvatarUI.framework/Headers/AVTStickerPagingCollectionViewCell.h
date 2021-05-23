/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <UIKit/UICollectionViewCell.h>

@class UIView;

@interface AVTStickerPagingCollectionViewCell : UICollectionViewCell

{
    UIView *_pageContentView;
    struct UIEdgeInsets _additionnalContentInsets;
}

@property (retain, nonatomic) UIView *pageContentView;
@property (nonatomic) struct UIEdgeInsets additionnalContentInsets;

+ (id)cellIdentifier;

- (void)prepareForReuse;
- (void)layoutSubviews;

@end
