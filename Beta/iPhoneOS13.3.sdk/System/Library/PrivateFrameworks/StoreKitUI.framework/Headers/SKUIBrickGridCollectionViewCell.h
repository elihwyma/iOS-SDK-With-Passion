/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UICollectionViewCell.h>

@class NSString, SKUIEditorialCellLayout, UIImage, UIImageView, UIView;

__attribute__((visibility("hidden")))
@interface SKUIBrickGridCollectionViewCell : UICollectionViewCell

{
    NSString *_accessibilityLabel;
    UIImageView *_brickImageView;
    struct UIEdgeInsets _contentInsets;
    SKUIEditorialCellLayout *_editorialCellLayout;
    UIView *_editorialContainerView;
}

@property (nonatomic) struct UIEdgeInsets contentInsets;
@property (copy, nonatomic) NSString *accessibilityLabel;
@property (retain, nonatomic) UIImage *brickImage;

- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (void)setColoringWithColorScheme:(id)arg1;
- (void)applyEditorialLayout:(id)arg1 orientation:(long long)arg2;

@end
