/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UICollectionViewCell.h>

@class NSString, UIColor, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface SKUIGallerySwooshCollectionViewCell : UICollectionViewCell

{
    UIView *_contentChildView;
    UIColor *_titleColor;
    UILabel *_titleLabel;
}

@property (retain, nonatomic) UIView *contentChildView;
@property (copy, nonatomic) NSString *title;

- (void)layoutSubviews;
- (void)setColoringWithColorScheme:(id)arg1;

@end
