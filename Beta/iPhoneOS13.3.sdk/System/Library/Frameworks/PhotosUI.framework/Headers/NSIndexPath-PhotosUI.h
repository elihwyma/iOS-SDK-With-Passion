/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSIndexPath.h>

@interface NSIndexPath (PhotosUI)

@property (nonatomic, readonly, getter=pu_isValid) _Bool pu_valid;

+ (id)pu_indexPathsForItems:(id)arg1 inSection:(long long)arg2;
+ (id)pu_indexPathForItem:(long long)arg1 inSubSection:(long long)arg2 section:(long long)arg3;
+ (id)pu_rootIndexPath;

- (id)pu_alteredIndexPathAfterInsertingItemAtIndexPath:(id)arg1;
- (id)pu_alteredIndexPathAfterDeletingItemAtIndexPath:(id)arg1;
- (id)pu_indexPathByChangingIndexAtPosition:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (_Bool)pu_isParentOfIndexPath:(id)arg1;
- (id)pu_indexPathAfterDeletingItemAtIndexPath:(id)arg1;
- (id)pu_indexPathAfterInsertingItemAtIndexPath:(id)arg1;
- (id)pu_indexPathByAppendingIndexPath:(id)arg1;
- (id)pu_alteredIndexPathAfterInsertingItemsAtIndexPaths:(id)arg1;
- (id)pu_alteredIndexPathAfterDeletingItemsAtIndexPaths:(id)arg1;
- (id)pu_alteredIndexPathAfterMovingItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (id)pu_indexPathAfterMovingItemFromIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (id)pu_indexPathAfterReloadingItemAtIndexPath:(id)arg1;
- (id)pu_shortDescription;

@end
