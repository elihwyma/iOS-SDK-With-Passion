/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSectionedDataSourceManager.h>

@class PXCollectionsDataSource;

@interface PXCollectionsDataSourceManager : PXSectionedDataSourceManager

@property (nonatomic, readonly) PXCollectionsDataSource *dataSource;

- (void)registerChangeObserver:(id)arg1 context:(void *)arg2;
- (void)unregisterChangeObserver:(id)arg1 context:(void *)arg2;

@end
