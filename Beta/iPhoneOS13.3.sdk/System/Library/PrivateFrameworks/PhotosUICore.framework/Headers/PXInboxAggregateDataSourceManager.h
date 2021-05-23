/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSectionedDataSourceManager.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSArray, NSString, PXInboxAggregateDataSource;

@interface PXInboxAggregateDataSourceManager : PXSectionedDataSourceManager <Swift>

{
    NSArray *_dataSourceManagers;
}

@property (nonatomic, readonly) PXInboxAggregateDataSource *dataSource;
@property (nonatomic, readonly) NSArray *dataSourceManagers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)_dataSourceSnapshot;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)createInitialDataSource;
- (void)_updateDataSource;
- (id)initWithDataSourceManagers:(id)arg1;

@end
