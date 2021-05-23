/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <UIKit/UIView.h>

@class UICollectionView;

@interface PKPaletteShapesView : UIView

{
    UICollectionView *_collectionView;
}

@property (nonatomic, readonly) UICollectionView *collectionView;

- (id)initWithFrame:(struct CGRect)arg1;

@end
