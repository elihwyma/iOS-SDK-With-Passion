/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIDynamicBehavior.h>

@class NSCollectionLayoutVisibleItem;

@protocol _NSCollectionLayoutVisibleItem;

__attribute__((visibility("hidden")))
@interface _UICollectionCompositionalLayoutDynamicBehavior : UIDynamicBehavior

{
    id <_NSCollectionLayoutVisibleItem> _visibleItem;
}

@property (nonatomic, readonly) NSCollectionLayoutVisibleItem *visibleItem;

- (id)item;
- (id)initWithVisibleItem:(id)arg1;

@end
