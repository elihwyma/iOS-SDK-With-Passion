/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIUpdateItem.h>

@class NSIndexPath;

__attribute__((visibility("hidden")))
@interface UIRowMoveUpdateItem : UIUpdateItem

{
    NSIndexPath *_newIndexPath;
}

- (id)initWithOldIndexPath:(id)arg1 newIndexPath:(id)arg2;
- (id)newIndexPath;
- (id)collectionViewUpdateItem;

@end
