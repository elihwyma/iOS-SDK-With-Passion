/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <TVMLKit/_TVMLCollectionViewController.h>

#import <TVMLKit/Swift-Protocol.h>

@class NSIndexPath, NSString;

@protocol __TVShelfViewControllerDelegate;

@interface _TVShelfViewController : _TVMLCollectionViewController <Swift>

{
    NSIndexPath *_pendingPreviewedIndexPath;
    NSIndexPath *_lastPreviewedIndexPath;
    double _lastPreviewDelay;
    unsigned long long _autohighlightScrollPosition;
    _Bool _configureForListTemplate;
    long long _listTemplateAlignment;
    struct {
        _Bool hasUpdateRelatedView;
        _Bool hasDidSelectItemAtIndexPath;
        _Bool hasDidPlayItemAtIndexPath;
        _Bool hasDidSettleOnItemAtIndexPath;
        _Bool hasDidSnapToItemAtIndexPath;
        _Bool hasFocusDependentMethods;
    } _delegateFlags;
    _Bool _centered;
    id <__TVShelfViewControllerDelegate> _delegate;
    unsigned long long _speedBumpEdges;
    long long _prominentSectionIndex;
}

@property (nonatomic) long long prominentSectionIndex;
@property (weak, nonatomic) id <__TVShelfViewControllerDelegate> delegate;
@property (nonatomic) unsigned long long speedBumpEdges;
@property (nonatomic, getter=isCentered) _Bool centered;
@property (nonatomic) _Bool hideHeader;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)_contentForCell:(id)arg1 shouldHide:(_Bool)arg2;

- (id)preferredFocusEnvironments;
- (void)viewDidLoad;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewDidLayoutSubviews;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)updateWithViewElement:(id)arg1;
- (void)updateWithViewElement:(id)arg1 cellMetrics:(struct TVCellMetrics)arg2;
- (void)_delayedUpdatePreview;
- (void)_didSettleOnItemAtIndexPath:(id)arg1;
- (void)dispatchEvent:(id)arg1 forItemAtIndexPath:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (struct CGSize)expectedCellSizeForElement:(id)arg1 atIndexPath:(id)arg2;
- (void)updateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)makeCollectionViewWithFrame:(struct CGRect)arg1;
- (_Bool)contentFlowsVertically;
- (unsigned long long)preferredScrollPosition;
- (void)updateViewLayoutAnimated:(_Bool)arg1 relayout:(_Bool)arg2;

@end
