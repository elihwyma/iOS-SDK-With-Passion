/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUICollectionViewCell.h>

@class NSString, SKUIGroupedHeaderView;

__attribute__((visibility("hidden")))
@interface SKUIBrowseHeaderCollectionViewCell : SKUICollectionViewCell

{
    SKUIGroupedHeaderView *_headerView;
}

@property (retain, nonatomic) NSString *title;

- (id)initWithFrame:(struct CGRect)arg1;

@end
