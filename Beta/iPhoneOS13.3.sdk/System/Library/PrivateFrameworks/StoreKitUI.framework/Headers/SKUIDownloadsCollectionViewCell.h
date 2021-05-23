/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UICollectionViewCell.h>

@class SKUIDownloadsCellView, UIImageView;

__attribute__((visibility("hidden")))
@interface SKUIDownloadsCollectionViewCell : UICollectionViewCell

{
    SKUIDownloadsCellView *_cellView;
    UIImageView *_editIndicator;
    long long _cellState;
}

@property (nonatomic, readonly) SKUIDownloadsCellView *cellView;
@property (nonatomic) long long cellState;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1;
- (void)_reloadEditState;

@end
