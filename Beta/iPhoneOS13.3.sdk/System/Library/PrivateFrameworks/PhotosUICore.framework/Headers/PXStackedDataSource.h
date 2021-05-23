/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSectionedDataSource.h>

@class NSArray;

@interface PXStackedDataSource : PXSectionedDataSource

{
    NSArray *_dataSections;
}

@property (nonatomic, readonly) NSArray *dataSections;

- (id)init;
- (long long)numberOfSections;
- (long long)numberOfItemsInSection:(long long)arg1;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2;
- (id)initWithDataSections:(id)arg1;
- (id)changeDetailsToDataSource:(id)arg1 sectionChanges:(id)arg2 itemChanges:(id)arg3;

@end
