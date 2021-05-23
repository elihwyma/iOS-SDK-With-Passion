/*
 Image: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
 */

#import <PhotosUICore/PXObservable.h>

@class AEProgressViewModelSnapshot, NSDictionary, NSString, PXAssetsDataSourceManager;

__attribute__((visibility("hidden")))
@interface AEProgressViewModel : PXObservable

{
    AEProgressViewModelSnapshot *_currentSnapshot;
    PXAssetsDataSourceManager *__dataSourceManager;
    NSDictionary *__progressByAsset;
}

@property (nonatomic, readonly) PXAssetsDataSourceManager *_dataSourceManager;
@property (retain, nonatomic, setter=_setProgressByAsset:) NSDictionary *_progressByAsset;
@property (nonatomic, readonly) AEProgressViewModelSnapshot *progressSnapshot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)mutableChangeObject;
- (id)initWithDataSourceManager:(id)arg1;
- (id)sectionedDataSourceManagerInterestingObjectReferences:(id)arg1;
- (id)_createSnapshot;
- (void)setProgress:(id)arg1 forAssetReference:(id)arg2;

@end
