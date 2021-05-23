/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSectionedDataSource.h>

@class NSArray;

@interface PXGadgetDataSource : PXSectionedDataSource

{
    NSArray *_gadgets;
}

@property (copy, nonatomic, readonly) NSArray *gadgets;
@property (readonly) _Bool hasNoContentGadget;

- (id)init;
- (long long)numberOfSections;
- (long long)numberOfItemsInSection:(long long)arg1;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2;
- (id)initWithGadgets:(id)arg1;
- (id)gadgetAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (struct PXSimpleIndexPath)indexPathForGadget:(id)arg1;
- (id)gadgetsOfType:(unsigned long long)arg1;
- (id)gadgetsOfClass:(Class)arg1;
- (id)gadgetWithId:(id)arg1;

@end
