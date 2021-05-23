/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXMemoriesDataSource.h>

@class NSArray;

@interface PXFeedBasedMemoriesDataSource : PXMemoriesDataSource

{
    NSArray *_entries;
}

@property (copy, nonatomic, readonly) NSArray *entries;

- (id)initWithDataSource:(id)arg1;
- (long long)numberOfSections;
- (long long)numberOfItemsInSection:(long long)arg1;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (struct PXSimpleIndexPath)indexPathForObjectReference:(id)arg1;

@end
