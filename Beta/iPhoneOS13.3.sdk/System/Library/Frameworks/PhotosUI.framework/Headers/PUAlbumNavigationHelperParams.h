/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class PUAlbumListViewControllerSpec, PUSessionInfo, PXPhotoKitCollectionsDataSource, PXPhotoKitCollectionsDataSourceManager;

@protocol PXGridPresentation;

__attribute__((visibility("hidden")))
@interface PUAlbumNavigationHelperParams : NSObject

{
    PXPhotoKitCollectionsDataSourceManager *_dataSourceManager;
    PUSessionInfo *_sessionInfo;
    PUAlbumListViewControllerSpec *_spec;
    id <PXGridPresentation> _gridPresentation;
}

@property (retain, nonatomic) PXPhotoKitCollectionsDataSourceManager *dataSourceManager;
@property (retain, nonatomic) PUSessionInfo *sessionInfo;
@property (retain, nonatomic) PUAlbumListViewControllerSpec *spec;
@property (retain, nonatomic) id <PXGridPresentation> gridPresentation;
@property (nonatomic, readonly) PXPhotoKitCollectionsDataSource *dataSource;

@end
