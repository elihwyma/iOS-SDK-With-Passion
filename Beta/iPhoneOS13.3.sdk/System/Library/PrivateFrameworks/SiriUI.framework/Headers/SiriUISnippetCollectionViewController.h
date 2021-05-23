/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <SiriUI/SiriUISnippetViewController.h>

@class NSString, UICollectionView, UICollectionViewLayout;

@interface SiriUISnippetCollectionViewController : SiriUISnippetViewController

{
    struct CGRect _previousBounds;
    _Bool _needsToInvalidateCollectionViewLayoutOnViewWillLayoutSubviews;
    UICollectionViewLayout *_collectionViewLayout;
    UICollectionView *_collectionView;
}

@property (nonatomic, readonly) UICollectionView *collectionView;
@property (nonatomic, readonly) UICollectionViewLayout *collectionViewLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (id)initWithCollectionViewLayout:(id)arg1;
- (void)viewWillLayoutSubviews;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (id)collectionView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;

@end
