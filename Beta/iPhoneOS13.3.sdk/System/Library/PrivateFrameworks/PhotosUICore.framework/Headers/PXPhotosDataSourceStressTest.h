/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXObservable.h>

@class NSArray, NSDictionary, PXPhotosDataSource;

@interface PXPhotosDataSourceStressTest : PXObservable

{
    _Bool _isPrepared;
    NSArray *_categories;
    NSDictionary *_assetsByCategory;
    unsigned long long _sampleLength;
    unsigned long long _sampleIndex;
    _Bool _running;
    unsigned long long _maximumAssetCount;
    double _updateInterval;
    PXPhotosDataSource *_dataSource;
    unsigned long long _dataSourceIndex;
}

@property (retain, nonatomic, setter=_setDataSource:) PXPhotosDataSource *dataSource;
@property (nonatomic, setter=_setDataSourceIndex:) unsigned long long dataSourceIndex;
@property (nonatomic) unsigned long long maximumAssetCount;
@property (nonatomic) double updateInterval;
@property (nonatomic, getter=isRunning) _Bool running;

- (id)init;
- (void)_prepare;
- (id)mutableChangeObject;
- (id)_categoryForAsset:(id)arg1;
- (void)_updateDataSource;

@end
