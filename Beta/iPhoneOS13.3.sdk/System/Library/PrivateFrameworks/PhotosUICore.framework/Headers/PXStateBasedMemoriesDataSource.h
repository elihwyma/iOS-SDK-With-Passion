/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXMemoriesDataSource.h>

@class NSObject, PXMemoriesDataSourceState;

@protocol OS_dispatch_queue;

@interface PXStateBasedMemoriesDataSource : PXMemoriesDataSource

{
    NSObject<OS_dispatch_queue> *_queue;
    PXMemoriesDataSourceState *__state;
}

@property (nonatomic, readonly) PXMemoriesDataSourceState *_state;

- (id)initWithState:(id)arg1;
- (long long)numberOfSections;
- (long long)numberOfItemsInSection:(long long)arg1;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (struct PXSimpleIndexPath)indexPathForObjectReference:(id)arg1;

@end
