/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UICollectionViewCell.h>

@class UIView;

@interface SKUISimpleCollectionViewCell : UICollectionViewCell

{
    UIView *_contentChildView;
    struct UIEdgeInsets _contentInsets;
}

@property (retain, nonatomic) UIView *contentChildView;
@property (nonatomic) struct UIEdgeInsets contentInsets;

- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (void)applyLayoutAttributes:(id)arg1;

@end
