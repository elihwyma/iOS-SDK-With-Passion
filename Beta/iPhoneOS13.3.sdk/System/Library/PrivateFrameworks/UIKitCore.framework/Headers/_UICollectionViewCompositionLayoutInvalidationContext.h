/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UICollectionViewLayoutInvalidationContext.h>

@class NSMapTable;

@interface _UICollectionViewCompositionLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext

{
    NSMapTable *_invalidationContextTable;
}

@property (retain, nonatomic, getter=_invalidationContextTable, setter=_setInvalidationContextTable:) NSMapTable *invalidationContextTable;

@end
