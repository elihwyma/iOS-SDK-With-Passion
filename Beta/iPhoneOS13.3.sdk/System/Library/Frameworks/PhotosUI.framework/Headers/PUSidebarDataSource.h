/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class PXStackedDataSource;

@interface PUSidebarDataSource : NSObject

{
    PXStackedDataSource *_stackedDataSource;
}

@property (nonatomic, readonly) long long numberOfSections;

- (long long)numberOfItemsInSection:(long long)arg1;
- (id)initWithStackedDataSource:(id)arg1;
- (struct PXSimpleIndexPath)_simpleIndexPathFromIndexPath:(id)arg1;
- (id)listItemAtIndexPath:(id)arg1;
- (id)indexPathForListItem:(id)arg1;
- (id)validatedIndexPathForListItem:(id)arg1 hintIndexPath:(id)arg2;

@end
