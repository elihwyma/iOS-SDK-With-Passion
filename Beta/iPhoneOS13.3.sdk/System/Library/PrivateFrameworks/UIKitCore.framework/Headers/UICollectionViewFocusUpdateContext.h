/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIFocusUpdateContext.h>

@class NSIndexPath, UICollectionView;

@interface UICollectionViewFocusUpdateContext : UIFocusUpdateContext

{
    _Bool _didSetPreviouslyFocusedIndexPath;
    _Bool _didSetNextFocusedIndexPath;
    NSIndexPath *_previouslyFocusedIndexPath;
    NSIndexPath *_nextFocusedIndexPath;
    UICollectionView *_collectionView;
}

@property (weak, nonatomic, readonly) UICollectionView *collectionView;
@property (nonatomic, readonly) NSIndexPath *previouslyFocusedIndexPath;
@property (nonatomic, readonly) NSIndexPath *nextFocusedIndexPath;

+ (id)_contextWithContext:(id)arg1 collectionView:(id)arg2;
+ (id)_contextWithContext:(id)arg1 collectionView:(id)arg2 cachedPreviouslyFocusedIndexPath:(id)arg3;

- (id)_initWithContext:(id)arg1 collectionView:(id)arg2 cachedPreviouslyFocusedIndexPath:(id)arg3;

@end
