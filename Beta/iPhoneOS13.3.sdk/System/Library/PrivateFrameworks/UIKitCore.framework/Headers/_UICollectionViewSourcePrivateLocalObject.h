/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSIndexPath, UICollectionView;

__attribute__((visibility("hidden")))
@interface _UICollectionViewSourcePrivateLocalObject : NSObject

{
    NSIndexPath *_indexPath;
    UICollectionView *_collectionView;
}

@property (retain, nonatomic) NSIndexPath *indexPath;
@property (weak, nonatomic) UICollectionView *collectionView;

- (id)initWithIndexPath:(id)arg1 collectionView:(id)arg2;

@end
