/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXCollectionsDataSection.h>

@protocol PXDisplayCollection;

@interface _PXSingleCollectionDataSection : PXCollectionsDataSection

{
    long long _count;
    id <PXDisplayCollection> _displayCollection;
}

@property (nonatomic, readonly) id <PXDisplayCollection> displayCollection;

- (long long)count;
- (id)objectAtIndex:(long long)arg1;
- (long long)indexOfCollection:(id)arg1;
- (id)initWithDisplayCollection:(id)arg1;

@end
