/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSectionedDataSource.h>

@class NSArray, NSDictionary;

@interface PXPersonsSectionedDataSource : PXSectionedDataSource

{
    NSDictionary *_faceTiles;
    NSArray *_personsSections;
}

@property (copy, nonatomic, readonly) NSArray *personsSections;
@property (copy, nonatomic, readonly) NSDictionary *faceTiles;
@property (nonatomic, readonly) long long totalItemCount;

- (long long)numberOfSections;
- (long long)numberOfItemsInSection:(long long)arg1;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)objectsInIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)initWithPersonsSections:(id)arg1 faceTiles:(id)arg2;
- (id)faceTileForIndexPath:(struct PXSimpleIndexPath)arg1;

@end
