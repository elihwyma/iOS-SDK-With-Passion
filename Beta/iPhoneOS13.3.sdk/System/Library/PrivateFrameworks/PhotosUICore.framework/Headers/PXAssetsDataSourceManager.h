/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSectionedDataSourceManager.h>

@class NSString, PXAssetsDataSource;

@interface PXAssetsDataSourceManager : PXSectionedDataSourceManager

@property (nonatomic, readonly) PXAssetsDataSource *dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) long long backgroundFetchOriginSection;

- (void)registerChangeObserver:(id)arg1 context:(void *)arg2;
- (id)mutableChangeObject;
- (void)unregisterChangeObserver:(id)arg1 context:(void *)arg2;
- (void)setCurationEnabled:(_Bool)arg1 forAssetCollection:(id)arg2;
- (_Bool)forceAccurateAllSectionsIfNeeded;
- (_Bool)forceAccurateSectionsIfNeeded:(id)arg1;
- (_Bool)forceAccurateSection:(long long)arg1 andSectionsBeforeAndAfter:(long long)arg2;
- (id)pauseChangeDeliveryWithTimeout:(double)arg1;
- (void)resumeChangeDeliveryAndBackgroundLoading:(id)arg1;
- (void)startBackgroundFetchIfNeeded;

@end
