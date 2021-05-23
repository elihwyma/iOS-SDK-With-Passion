/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UICollectionViewTransitionLayout.h>

@class PUCollectionViewLayoutCache;

__attribute__((visibility("hidden")))
@interface PUStackedAlbumTransitionLayout : UICollectionViewTransitionLayout

{
    struct CGPoint _expandedStackDelta;
    _Bool _didPrepareLayout;
    PUCollectionViewLayoutCache *_currentLayoutCache;
    PUCollectionViewLayoutCache *_nextLayoutCache;
    _Bool _isExpanding;
    struct CGPoint _expandedStackFinalDelta;
    struct CGPoint _interactionOffset;
    struct CGPoint _initialCollapsedStackCenter;
    struct CGPoint _finalCollapsedStackCenter;
    struct CGPoint _currentCollapsedStackCenter;
}

@property (nonatomic, readonly) _Bool isExpanding;
@property (nonatomic, readonly) struct CGPoint expandedStackFinalDelta;
@property (nonatomic) struct CGPoint interactionOffset;
@property (nonatomic) struct CGPoint initialCollapsedStackCenter;
@property (nonatomic) struct CGPoint finalCollapsedStackCenter;
@property (nonatomic) struct CGPoint currentCollapsedStackCenter;

- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)initWithCurrentLayout:(id)arg1 nextLayout:(id)arg2 isExpanding:(_Bool)arg3;
- (struct CGPoint)_newCenterForLayoutAttributes:(id)arg1 transitionProgress:(double)arg2;
- (struct CGPoint)_centerOfLayoutAttributes:(id)arg1;

@end
