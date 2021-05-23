/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <TVMLKit/_TVMLCollectionViewController.h>

__attribute__((visibility("hidden")))
@interface _TVGridViewController : _TVMLCollectionViewController

{
    _Bool _configureForListTemplate;
}

- (void)viewDidLoad;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)updateWithViewElement:(id)arg1 cellMetrics:(struct TVCellMetrics)arg2;
- (id)makeCollectionViewWithFrame:(struct CGRect)arg1;
- (_Bool)contentFlowsVertically;
- (void)updateViewLayoutAnimated:(_Bool)arg1 relayout:(_Bool)arg2;
- (_Bool)shouldHeaderFloatByDefault;

@end
