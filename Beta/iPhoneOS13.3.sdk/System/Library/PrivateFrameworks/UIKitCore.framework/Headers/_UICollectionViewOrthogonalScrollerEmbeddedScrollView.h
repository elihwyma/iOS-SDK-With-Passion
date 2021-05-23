/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIScrollView.h>

@class UICollectionView;

__attribute__((visibility("hidden")))
@interface _UICollectionViewOrthogonalScrollerEmbeddedScrollView : UIScrollView

{
    UICollectionView *_collectionView;
}

@property (weak, nonatomic) UICollectionView *collectionView;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;

@end
