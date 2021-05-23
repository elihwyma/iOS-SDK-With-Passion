/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXObservable.h>

@class NSMutableArray, NSObject, NSString, PXImportAssetsDataSource, PXImportAssetsDataSourceManager, PXImportController;

@protocol OS_dispatch_queue;

@interface PXImportMediaLoadingCoordinator : PXObservable

{
    NSObject<OS_dispatch_queue> *_modelQueue;
    NSObject<OS_dispatch_queue> *_workerQueue;
    _Bool _paused;
    PXImportController *_importController;
    PXImportAssetsDataSourceManager *_dataSourceManager;
    NSMutableArray *_thumbnailWorkItemUuids;
    PXImportAssetsDataSource *_dataSource;
    unsigned long long _completedDataSourceIdentifier;
}

@property (weak, nonatomic, readonly) PXImportController *importController;
@property (nonatomic, readonly) PXImportAssetsDataSourceManager *dataSourceManager;
@property (retain, nonatomic) NSMutableArray *thumbnailWorkItemUuids;
@property (retain, nonatomic) PXImportAssetsDataSource *dataSource;
@property (nonatomic) unsigned long long completedDataSourceIdentifier;
@property (nonatomic, setter=setPaused:) _Bool paused;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)shutdown;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)mediaProviderThumbnailingBecameIdle;
- (id)initWithImportController:(id)arg1;
- (void)handleNewDataSource:(id)arg1;
- (id)dequeueNextThumbnailWorkItem;
- (void)_processItemIfPossible;

@end
