/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXBrowserVisibleContentSnapshot.h>

@class NSArray;

@protocol PXDisplayAssetDataSource;

@interface _PXBrowserDataSourceVisibleContentSnapshot : PXBrowserVisibleContentSnapshot

{
    NSArray *_indexPaths;
    id <PXDisplayAssetDataSource> _dataSource;
    unsigned long long _dateType;
}

@property (copy, nonatomic, readonly) NSArray *indexPaths;
@property (nonatomic, readonly) id <PXDisplayAssetDataSource> dataSource;
@property (nonatomic, readonly) unsigned long long dateType;

- (id)dateInterval;
- (id)initWithIndexPaths:(id)arg1 dataSource:(id)arg2 dateIntervalGranularity:(unsigned long long)arg3 dateType:(unsigned long long)arg4;
- (id)initWithDateIntervalGranularity:(unsigned long long)arg1;

@end
