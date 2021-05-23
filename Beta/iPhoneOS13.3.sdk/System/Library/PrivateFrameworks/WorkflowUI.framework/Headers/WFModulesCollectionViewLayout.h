/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UICollectionViewLayout.h>

@class NSArray, NSDictionary, NSMutableDictionary, UIColor;

@interface WFModulesCollectionViewLayout : UICollectionViewLayout

{
    NSArray *_collectionViewIndexPaths;
    NSMutableDictionary *_itemSizes;
    NSMutableDictionary *_itemHidden;
    NSMutableDictionary *_itemOffsets;
    NSMutableDictionary *_itemConnections;
    NSMutableDictionary *_supplementaryViewSizes;
    NSMutableDictionary *_itemAttributes;
    NSMutableDictionary *_supplementaryViewAttributes;
    NSMutableDictionary *_decorationViewAttributes;
    NSMutableDictionary *_decorationViewAttributesToDisappear;
    NSMutableDictionary *_deletedSupplementaryIndexPaths;
    NSMutableDictionary *_insertedSupplementaryIndexPaths;
    NSMutableDictionary *_deletedDecorationIndexPaths;
    NSMutableDictionary *_insertedDecorationIndexPaths;
    NSDictionary *_previousItemAttributes;
    _Bool _invalidatedAndWaitingForPrepareLayout;
    _Bool _disableItemAnimations;
    _Bool _showsFooterConnector;
    UIColor *_connectorColor;
    double _connectorWidth;
    struct UIEdgeInsets _sectionInset;
}

@property (nonatomic) struct UIEdgeInsets sectionInset;
@property (nonatomic) _Bool disableItemAnimations;
@property (nonatomic, readonly) UIColor *connectorColor;
@property (nonatomic, readonly) double connectorWidth;
@property (nonatomic) _Bool showsFooterConnector;

+ (Class)invalidationContextClass;
+ (Class)layoutAttributesClass;

- (void)invalidateLayoutWithContext:(id)arg1;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (void)finalizeCollectionViewUpdates;
- (id)indexPathsToInsertForSupplementaryViewOfKind:(id)arg1;
- (id)indexPathsToInsertForDecorationViewOfKind:(id)arg1;
- (id)indexPathsToDeleteForSupplementaryViewOfKind:(id)arg1;
- (id)indexPathsToDeleteForDecorationViewOfKind:(id)arg1;
- (struct CGSize)collectionViewContentSize;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)initWithConnectorColor:(id)arg1 connectorWidth:(double)arg2;
- (id)proposedLayoutAttributesForItemAtIndexPath:(id)arg1 movedFromIndexPath:(id)arg2;
- (id)proposedLayoutAttributesForNewItemAtIndexPath:(id)arg1 withSize:(struct CGSize)arg2;
- (id)proposedLayoutAttributesForItemAtIndexPath:(id)arg1 withSize:(struct CGSize)arg2 fromAbove:(_Bool)arg3;
- (void)updateIndexPaths;
- (void)calculateAttributes;
- (void)populateInvalidatedDelegateCache;
- (void)populateUpdatedDelegateCache;

@end
