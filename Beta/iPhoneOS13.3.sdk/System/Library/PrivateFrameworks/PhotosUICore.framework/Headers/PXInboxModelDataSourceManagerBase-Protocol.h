/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/Swift-Protocol.h>

@class PXSectionedDataSource;

@protocol PXInboxModelDataSourceBase, PXInboxProviderSource;

@protocol PXInboxModelDataSourceManagerBase <Swift>

@property (nonatomic, readonly) PXSectionedDataSource<PXInboxModelDataSourceBase> *dataSource;
@property (nonatomic, readonly) id <PXInboxProviderSource> providerSource;

@end
