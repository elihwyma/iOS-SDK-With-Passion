/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSectionedDataSourceManager.h>

@class NSString, PXSectionedDataSource;

@protocol PXInboxModelDataSourceBase, PXInboxProviderSource;

@interface PXInboxModelDataSourceManager : PXSectionedDataSourceManager

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) PXSectionedDataSource<PXInboxModelDataSourceBase> *dataSource;
@property (nonatomic, readonly) id <PXInboxProviderSource> providerSource;

@end
