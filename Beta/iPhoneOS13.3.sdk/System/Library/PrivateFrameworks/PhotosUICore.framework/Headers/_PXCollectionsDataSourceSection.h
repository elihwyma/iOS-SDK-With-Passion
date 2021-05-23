/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXCollectionsDataSection.h>

@class PXCollectionsDataSource;

@interface _PXCollectionsDataSourceSection : PXCollectionsDataSection

{
    long long _count;
    PXCollectionsDataSource *_collectionsDataSource;
}

@property (nonatomic, readonly) PXCollectionsDataSource *collectionsDataSource;

- (long long)count;
- (id)objectAtIndex:(long long)arg1;
- (id)content;
- (id)initWithCollectionsDataSource:(id)arg1;
- (long long)indexOfCollection:(id)arg1;
- (long long)countForCollection:(id)arg1;

@end
