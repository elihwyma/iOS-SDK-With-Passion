/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class UICollectionView;

__attribute__((visibility("hidden")))
@interface PUImportChangeDetailsCollectionViewHelper : NSObject

{
    UICollectionView *_collectionView;
}

@property (weak, nonatomic) UICollectionView *collectionView;

- (id)initWithCollectionView:(id)arg1;
- (void)transitionFromDataSource:(id)arg1 toDataSource:(id)arg2 changeHistory:(id)arg3 animated:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)applyChangeDetails:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end
