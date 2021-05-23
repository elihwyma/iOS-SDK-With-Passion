/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSectionedDataSource.h>

@protocol PXDisplaySuggestionFetchResult;

@interface PXSuggestionsDataSource : PXSectionedDataSource

{
    id <PXDisplaySuggestionFetchResult> _suggestions;
}

@property (nonatomic, readonly) id <PXDisplaySuggestionFetchResult> suggestions;

- (id)init;
- (long long)numberOfSections;
- (long long)numberOfItemsInSection:(long long)arg1;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2;
- (id)initWithSuggestionsFetchResult:(id)arg1;

@end
