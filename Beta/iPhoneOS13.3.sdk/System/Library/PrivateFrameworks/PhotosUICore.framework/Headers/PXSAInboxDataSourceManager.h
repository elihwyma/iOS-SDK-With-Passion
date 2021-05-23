/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXInboxModelDataSourceManager.h>

@class NSString, PXFeedSectionInfosManager, PXSAInboxDataSource, PXSAInboxDetailViewControllerProvider, PXSAInboxTitleProvider;

@protocol PXInboxModelDetailViewControllerProvider, PXInboxModelMediaProvider, PXInboxModelTitleProvider;

@interface PXSAInboxDataSourceManager : PXInboxModelDataSourceManager

{
    PXFeedSectionInfosManager *_feedSectionInfosManager;
    PXSAInboxTitleProvider *_sharedAlbumTitleProvider;
    PXSAInboxDetailViewControllerProvider *_sharedAlbumDetailViewControllerProvider;
}

@property (retain, nonatomic) PXFeedSectionInfosManager *feedSectionInfosManager;
@property (retain, nonatomic) PXSAInboxTitleProvider *sharedAlbumTitleProvider;
@property (retain, nonatomic) PXSAInboxDetailViewControllerProvider *sharedAlbumDetailViewControllerProvider;
@property (nonatomic, readonly) PXSAInboxDataSource *dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <PXInboxModelDetailViewControllerProvider> detailViewControllerProvider;
@property (nonatomic, readonly) id <PXInboxModelMediaProvider> mediaProvider;
@property (nonatomic, readonly) id <PXInboxModelTitleProvider> titleProvider;

- (id)init;
- (id)_dataSourceSnapshot;
- (id)createInitialDataSource;
- (void)_updateDataSource;
- (id)providerSource;
- (int)requestImageForPreviewItem:(id)arg1 targetSize:(struct CGSize)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (void)feedSectionInfosManager:(id)arg1 sectionInfosDidChange:(id)arg2;
- (id)_sectionInfosForDataSource;

@end
