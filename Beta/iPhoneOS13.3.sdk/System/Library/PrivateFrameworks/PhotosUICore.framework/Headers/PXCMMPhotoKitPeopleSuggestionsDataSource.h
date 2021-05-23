/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXCMMPeopleSuggestionsDataSource.h>

@class NSObject, PXCMMPhotoKitPeopleSuggestionsDataSourceState;

@protocol OS_dispatch_queue;

@interface PXCMMPhotoKitPeopleSuggestionsDataSource : PXCMMPeopleSuggestionsDataSource

{
    NSObject<OS_dispatch_queue> *_queue;
    PXCMMPhotoKitPeopleSuggestionsDataSourceState *__state;
}

@property (nonatomic, readonly) PXCMMPhotoKitPeopleSuggestionsDataSourceState *_state;

- (id)initWithState:(id)arg1;
- (long long)numberOfSections;
- (long long)numberOfItemsInSection:(long long)arg1;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (struct PXSimpleIndexPath)indexPathForObjectReference:(id)arg1;

@end
