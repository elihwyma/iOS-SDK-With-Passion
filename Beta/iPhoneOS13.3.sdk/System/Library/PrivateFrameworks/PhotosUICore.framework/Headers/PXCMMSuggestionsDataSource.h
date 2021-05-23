/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSectionedDataSource.h>

@class NSObject, PXCMMSuggestionsDataSourceState;

@protocol OS_dispatch_queue;

@interface PXCMMSuggestionsDataSource : PXSectionedDataSource

{
    NSObject<OS_dispatch_queue> *_queue;
    PXCMMSuggestionsDataSourceState *__state;
}

@property (nonatomic, readonly) PXCMMSuggestionsDataSourceState *_state;

- (id)initWithState:(id)arg1;
- (long long)numberOfSections;
- (long long)numberOfItemsInSection:(long long)arg1;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (struct PXSimpleIndexPath)indexPathForObjectReference:(id)arg1;
- (id)suggestionAtItemIndexPath:(struct PXSimpleIndexPath)arg1;
- (long long)_adjustedIndexFromIndex:(long long)arg1;

@end
