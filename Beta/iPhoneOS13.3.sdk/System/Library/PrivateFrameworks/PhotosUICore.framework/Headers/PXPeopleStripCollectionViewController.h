/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UICollectionViewController.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString, PXPeopleDataSource, PXPeopleStripCollectionViewCell;

@protocol PXPeopleStripCollectionViewControllerDelegate;

@interface PXPeopleStripCollectionViewController : UICollectionViewController <Swift>

{
    id <PXPeopleStripCollectionViewControllerDelegate> _delegate;
    PXPeopleDataSource *_dataSource;
    PXPeopleStripCollectionViewCell *_preloadedCell;
}

@property (weak, nonatomic) id <PXPeopleStripCollectionViewControllerDelegate> delegate;
@property (weak, nonatomic) PXPeopleDataSource *dataSource;
@property (retain, nonatomic) PXPeopleStripCollectionViewCell *preloadedCell;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGPoint)collectionView:(id)arg1 targetContentOffsetForProposedContentOffset:(struct CGPoint)arg2;
- (void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2;
- (id)initWithDataSource:(id)arg1 delegate:(id)arg2;
- (void)contentWidthChanged;

@end
