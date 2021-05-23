/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSectionedDataSourceManager.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSArray, NSString;

@interface PXStackedDataSourceManager : PXSectionedDataSourceManager <Swift>

{
    _Bool _initialDataSourceCreated;
    NSArray *_dataSectionManagers;
}

@property (nonatomic) _Bool initialDataSourceCreated;
@property (copy, nonatomic) NSArray *dataSectionManagers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)createInitialDataSource;
- (id)initWithDataSectionManagers:(id)arg1;
- (void)_registerAsChangeObserverForDataSectionManagers:(id)arg1;
- (void)_unregisterAsChangeObserverForDataSectionManagers:(id)arg1;
- (id)_newDataSource;
- (void)_updateDataSourceWithSectionChanges:(id)arg1 itemChanges:(id)arg2;

@end
