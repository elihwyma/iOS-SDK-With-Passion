/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UICollectionViewLayout.h>

@class NSArray, NSMutableDictionary;

@interface _UICollectionViewCompositionLayout : UICollectionViewLayout

{
    NSMutableDictionary *_sublayoutsDict;
}

@property (nonatomic, readonly) NSArray *sublayouts;

+ (Class)invalidationContextClass;

- (id)init;
- (void)invalidateLayoutWithContext:(struct _UICollectionViewCompositionLayoutInvalidationContext *)arg1;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)invalidationContextForBoundsChange:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (_Bool)shouldInvalidateLayoutForPreferredLayoutAttributes:(id)arg1 withOriginalAttributes:(id)arg2;
- (id)invalidationContextForPreferredLayoutAttributes:(id)arg1 withOriginalAttributes:(id)arg2;
- (id)_originConvertedSublayoutAttributesForAttributes:(id)arg1 inLayout:(id)arg2;
- (void)_prepareLayout:(id)arg1;
- (struct CGRect)_frameForLayout:(id)arg1 offset:(struct CGPoint)arg2 relativeToEdges:(unsigned long long)arg3 fromSiblingLayout:(id)arg4;
- (void)addSublayout:(id)arg1 forRect:(struct CGRect)arg2;
- (void)addSublayout:(id)arg1 forSections:(id)arg2 offset:(struct CGPoint)arg3 relativeToEdges:(unsigned long long)arg4 fromSiblingLayout:(id)arg5;
- (void)addSublayout:(id)arg1 forItems:(id)arg2 inSection:(long long)arg3 offset:(struct CGPoint)arg4 relativeToEdges:(unsigned long long)arg5 fromSiblingLayout:(id)arg6;
- (void)addSublayout:(id)arg1 forElementKinds:(id)arg2;
- (void)removeSublayout:(id)arg1;

@end
