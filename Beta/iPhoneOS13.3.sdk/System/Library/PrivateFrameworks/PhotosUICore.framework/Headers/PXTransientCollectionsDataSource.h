/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXCollectionsDataSource.h>

@class NSString, PHFetchResult;

@interface PXTransientCollectionsDataSource : PXCollectionsDataSource

{
    PHFetchResult *_fetchResult;
    NSString *_navigationRootIdentifier;
}

@property (nonatomic, readonly) PHFetchResult *fetchResult;
@property (nonatomic, readonly) NSString *navigationRootIdentifier;

- (id)init;
- (long long)numberOfSections;
- (long long)numberOfItemsInSection:(long long)arg1;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2;
- (id)initWithFetchResult:(id)arg1;
- (id)objectsInIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)indexPathForCollection:(id)arg1;
- (id)collectionAtIndexPath:(id)arg1;
- (id)collectionListForSection:(long long)arg1;
- (id)initWithNavigationRootTitle:(id)arg1 identifier:(id)arg2 photoLibrary:(id)arg3;

@end
