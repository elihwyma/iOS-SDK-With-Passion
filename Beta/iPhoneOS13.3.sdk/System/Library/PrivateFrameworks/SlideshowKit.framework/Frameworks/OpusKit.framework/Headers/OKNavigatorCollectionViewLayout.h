/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <UIKit/UICollectionViewFlowLayout.h>

@class NSIndexPath, NSString, OKNavigatorCollectionViewController, UIPanGestureRecognizer;

@interface OKNavigatorCollectionViewLayout : UICollectionViewFlowLayout

{
    OKNavigatorCollectionViewController *_collectionViewController;
    unsigned long long _transitionStyle;
    NSIndexPath *_sourceItemIndexPath;
    UIPanGestureRecognizer *_panGestureRecognizer;
    struct CGRect _oldBounds;
}

@property (nonatomic) OKNavigatorCollectionViewController *collectionViewController;
@property (nonatomic) unsigned long long transitionStyle;
@property (retain, nonatomic) NSIndexPath *sourceItemIndexPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (void)prepareForAnimatedBoundsChange:(struct CGRect)arg1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (void)finalizeAnimatedBoundsChange;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;
- (void)handlePanGesture:(id)arg1;
- (id)itemClosestToCenter;

@end
