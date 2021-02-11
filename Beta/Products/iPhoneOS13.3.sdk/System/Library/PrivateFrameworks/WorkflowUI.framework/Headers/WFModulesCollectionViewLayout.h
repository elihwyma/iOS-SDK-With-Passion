/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface WFModulesCollectionViewLayout : UICollectionViewLayout {
    NSArray * _collectionViewIndexPaths;
    UIColor * _connectorColor;
    double  _connectorWidth;
    NSMutableDictionary * _decorationViewAttributes;
    NSMutableDictionary * _decorationViewAttributesToDisappear;
    NSMutableDictionary * _deletedDecorationIndexPaths;
    NSMutableDictionary * _deletedSupplementaryIndexPaths;
    bool  _disableItemAnimations;
    NSMutableDictionary * _insertedDecorationIndexPaths;
    NSMutableDictionary * _insertedSupplementaryIndexPaths;
    bool  _invalidatedAndWaitingForPrepareLayout;
    NSMutableDictionary * _itemAttributes;
    NSMutableDictionary * _itemConnections;
    NSMutableDictionary * _itemHidden;
    NSMutableDictionary * _itemOffsets;
    NSMutableDictionary * _itemSizes;
    NSDictionary * _previousItemAttributes;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _sectionInset;
    bool  _showsFooterConnector;
    NSMutableDictionary * _supplementaryViewAttributes;
    NSMutableDictionary * _supplementaryViewSizes;
}

@property (nonatomic, readonly) UIColor *connectorColor;
@property (nonatomic, readonly) double connectorWidth;
@property (nonatomic) bool disableItemAnimations;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } sectionInset;
@property (nonatomic) bool showsFooterConnector;

+ (Class)invalidationContextClass;
+ (Class)layoutAttributesClass;

- (void).cxx_destruct;
- (void)calculateAttributes;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (id)connectorColor;
- (double)connectorWidth;
- (bool)disableItemAnimations;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)finalizeCollectionViewUpdates;
- (id)indexPathsToDeleteForDecorationViewOfKind:(id)arg1;
- (id)indexPathsToDeleteForSupplementaryViewOfKind:(id)arg1;
- (id)indexPathsToInsertForDecorationViewOfKind:(id)arg1;
- (id)indexPathsToInsertForSupplementaryViewOfKind:(id)arg1;
- (id)initWithConnectorColor:(id)arg1 connectorWidth:(double)arg2;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)invalidateLayoutWithContext:(id)arg1;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)populateInvalidatedDelegateCache;
- (void)populateUpdatedDelegateCache;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (void)prepareLayout;
- (id)proposedLayoutAttributesForItemAtIndexPath:(id)arg1 movedFromIndexPath:(id)arg2;
- (id)proposedLayoutAttributesForItemAtIndexPath:(id)arg1 withSize:(struct CGSize { double x1; double x2; })arg2 fromAbove:(bool)arg3;
- (id)proposedLayoutAttributesForNewItemAtIndexPath:(id)arg1 withSize:(struct CGSize { double x1; double x2; })arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })sectionInset;
- (void)setDisableItemAnimations:(bool)arg1;
- (void)setSectionInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setShowsFooterConnector:(bool)arg1;
- (bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)showsFooterConnector;
- (void)updateIndexPaths;

@end