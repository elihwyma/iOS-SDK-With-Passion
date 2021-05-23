/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UITableViewCell.h>

@class SKUIDownloadsCellView;

__attribute__((visibility("hidden")))
@interface SKUIDownloadsTableViewCell : UITableViewCell

{
    SKUIDownloadsCellView *_cellView;
}

@property (nonatomic, readonly) SKUIDownloadsCellView *cellView;

- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
