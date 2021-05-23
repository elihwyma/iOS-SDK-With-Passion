/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSectionedDataSource.h>

@interface PXCollectionsDataSource : PXSectionedDataSource

{
    id _content;
}

@property (nonatomic, readonly) id content;

- (long long)countForCollection:(id)arg1;
- (id)indexPathForCollection:(id)arg1;
- (id)collectionAtIndexPath:(id)arg1;
- (id)collectionListForSection:(long long)arg1;

@end
