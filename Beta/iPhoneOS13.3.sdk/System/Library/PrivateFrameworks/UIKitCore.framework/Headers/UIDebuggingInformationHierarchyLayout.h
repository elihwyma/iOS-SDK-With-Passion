/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UICollectionViewLayout.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary;

@protocol UIDebuggingInformationHierarchyLayoutDelegate;

__attribute__((visibility("hidden")))
@interface UIDebuggingInformationHierarchyLayout : UICollectionViewLayout

{
    NSMutableArray *_indexPathsToDelete;
    id <UIDebuggingInformationHierarchyLayoutDelegate> _delegate;
    NSDictionary *_allAttributes;
    NSMutableDictionary *_allLineAttributes;
}

@property (retain, nonatomic) NSDictionary *allAttributes;
@property (retain, nonatomic) NSMutableDictionary *allLineAttributes;
@property (weak, nonatomic) id <UIDebuggingInformationHierarchyLayoutDelegate> delegate;

+ (Class)layoutAttributesClass;

- (void)invalidateLayout;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)indexPathsToDeleteForSupplementaryViewOfKind:(id)arg1;
- (struct CGSize)collectionViewContentSize;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (void)_recomputeAttributes;

@end
