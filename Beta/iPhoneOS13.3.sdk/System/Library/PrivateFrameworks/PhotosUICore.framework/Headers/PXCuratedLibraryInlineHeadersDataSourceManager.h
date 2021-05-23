/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSectionedDataSourceManager.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSObject, NSString, PXAssetsDataSource, PXAssetsDataSourceManager, PXCuratedLibraryInlineHeadersDataSource, PXUpdater;

@protocol OS_dispatch_queue;

@interface PXCuratedLibraryInlineHeadersDataSourceManager : PXSectionedDataSourceManager <Swift>

{
    PXAssetsDataSourceManager *_assetsDataSourceManager;
    PXAssetsDataSource *_previousAssetsDataSource;
    CDStruct_183601bc *_sectionInfosByLevel[2];
    long long _sectionsCountByLevel[2];
    long long _sectionsCapacityByLevel[2];
    _Bool _startedPreparingInitialMetadata;
    _Bool _finishedPreparingInitialMetadata;
    NSObject<OS_dispatch_queue> *_prepareQueue;
    PXCuratedLibraryInlineHeadersDataSource *_monthsDataSource;
    PXCuratedLibraryInlineHeadersDataSource *_yearsDataSource;
    PXUpdater *_updater;
}

@property (nonatomic, readonly) PXUpdater *updater;
@property (nonatomic, readonly) PXCuratedLibraryInlineHeadersDataSource *monthsDataSource;
@property (nonatomic, readonly) PXCuratedLibraryInlineHeadersDataSource *yearsDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)setNeedsUpdate;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)didPerformChanges;
- (void)_updateDataSource;
- (void)_invalidateDataSource;
- (id)initWithAssetsDataSourceManager:(id)arg1;
- (id)dataSourceForLevel:(unsigned long long)arg1;
- (void)_prepareInitialMetadataWithDataSource:(id)arg1;
- (void)_prepareQueue_prepareInitialMetadataWithDataSource:(id)arg1;
- (void)_didFinishPreparingInitialMetadata;
- (void)_updateLevel:(unsigned long long)arg1 withDataSourceBeforeChanges:(id)arg2 afterChanges:(id)arg3 changeDetails:(id)arg4;
- (id)_createDataSourceForLevel:(unsigned long long)arg1;
- (void)_resetSectionInfos;
- (CDStruct_68723fc0 *)_addSectionInfoForLevel:(unsigned long long)arg1;
- (void)_resizeStorageIfNeededForNumberOfSections:(long long)arg1 level:(unsigned long long)arg2;

@end
