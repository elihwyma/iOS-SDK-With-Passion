/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UICollectionReusableView.h>

@class _UITableViewCellSeparatorView;

__attribute__((visibility("hidden")))
@interface _UICollectionViewListSeparatorView : UICollectionReusableView

{
    _UITableViewCellSeparatorView *_separatorView;
}

@property (retain, nonatomic) _UITableViewCellSeparatorView *separatorView;

- (void)layoutSubviews;
- (void)applyLayoutAttributes:(id)arg1;

@end
