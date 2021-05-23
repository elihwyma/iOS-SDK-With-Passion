/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <FileProvider/FPUnionCollection.h>

@class FPSearchCollection, FPTrashUnionCollection, NSFileProviderSearchQuery, NSPredicate;

@interface FPSearchTrashCollection : FPUnionCollection

{
    FPSearchCollection *_searchCollection;
    FPTrashUnionCollection *_trashCollection;
    NSPredicate *_searchQueryPredicate;
    unsigned long long _selectedMembership;
}

@property (copy, nonatomic) NSFileProviderSearchQuery *searchQuery;

- (id)init;
- (_Bool)isCollectionValidForItem:(id)arg1;
- (id)scopedSearchQuery;

@end
