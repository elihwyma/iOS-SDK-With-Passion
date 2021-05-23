/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXRecipientSearchDataSource.h>

@class NSArray;

@interface PXMFRecipientSearchDataSource : PXRecipientSearchDataSource

{
    NSArray *_searchResults;
}

@property (nonatomic, readonly) NSArray *searchResults;

- (long long)numberOfSections;
- (long long)numberOfItemsInSection:(long long)arg1;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2;
- (id)initWithSearchResults:(id)arg1;

@end
