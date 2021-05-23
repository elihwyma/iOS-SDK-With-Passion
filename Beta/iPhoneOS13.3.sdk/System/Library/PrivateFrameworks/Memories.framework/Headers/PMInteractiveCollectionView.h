/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <UIKit/UICollectionView.h>

@protocol MiroCollectionViewDelegate;

@interface PMInteractiveCollectionView : UICollectionView

{
    _Bool _supportsReordering;
    _Bool _checkedSupportsReordering;
}

@property (nonatomic, readonly) _Bool supportsReordering;
@property (nonatomic) _Bool checkedSupportsReordering;
@property (weak, nonatomic) id <MiroCollectionViewDelegate> delegate;

- (_Bool)beginInteractiveMovementForItemAtIndexPath:(id)arg1;
- (void)cancelInteractiveMovement;
- (void)endInteractiveMovement;

@end
