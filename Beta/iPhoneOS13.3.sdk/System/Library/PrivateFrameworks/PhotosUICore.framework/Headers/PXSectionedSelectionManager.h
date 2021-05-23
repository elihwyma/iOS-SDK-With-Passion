/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXObservable.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString, PXMutableIndexPathSet, PXSectionedDataSource, PXSectionedDataSourceManager, PXSelectionSnapshot;

@interface PXSectionedSelectionManager : PXObservable <Swift>

{
    struct {
        _Bool selectionSnapshot;
    } _needsUpdateFlags;
    PXSectionedDataSourceManager *_dataSourceManager;
    PXSelectionSnapshot *_selectionSnapshot;
    PXSectionedDataSource *_dataSource;
    PXMutableIndexPathSet *_selectedIndexPaths;
    struct PXSimpleIndexPath _cursorIndexPath;
}

@property (retain, nonatomic, setter=_setSelectionSnapshot:) PXSelectionSnapshot *selectionSnapshot;
@property (retain, nonatomic, setter=_setDataSource:) PXSectionedDataSource *dataSource;
@property (retain, nonatomic, setter=_setSelectedIndexPaths:) PXMutableIndexPathSet *selectedIndexPaths;
@property (nonatomic, setter=_setCursorIndexPath:) struct PXSimpleIndexPath cursorIndexPath;
@property (nonatomic, readonly) PXSectionedDataSourceManager *dataSourceManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)setSelectedIndexPath:(struct PXSimpleIndexPath)arg1;
- (void)deselectAll;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)mutableChangeObject;
- (void)didPerformChanges;
- (void)_updateIfNeeded;
- (id)initWithDataSourceManager:(id)arg1;
- (id)sectionedDataSourceManagerInterestingObjectReferences:(id)arg1;
- (void)_invalidateSelectionSnapshot;
- (void)_updateSelectionSnapshotIfNeeded;
- (void)_setDataSource:(id)arg1 withChangeHistory:(id)arg2;
- (void)_makeSimpleModificationToSelectedIndexPathsUsingBlock:(CDUnknownBlockType)arg1;
- (void)setSelectedState:(_Bool)arg1 forIndexPath:(struct PXSimpleIndexPath)arg2;
- (void)setSelectedState:(_Bool)arg1 forIndexPathSet:(id)arg2;
- (void)selectAllItems;
- (void)setSelectedIndexPaths:(id)arg1;
- (void)setCursorIndexPath:(struct PXSimpleIndexPath)arg1;
- (void)selectNonCopiedAssetsWithImportStatusManager:(id)arg1;

@end
