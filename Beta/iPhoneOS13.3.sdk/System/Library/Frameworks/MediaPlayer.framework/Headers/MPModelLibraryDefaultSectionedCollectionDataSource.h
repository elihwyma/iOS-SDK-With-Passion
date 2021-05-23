/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class MPMediaLibraryEntityTranslationContext, MPModelLibraryRequest, NSDictionary, NSString;

@interface MPModelLibraryDefaultSectionedCollectionDataSource : NSObject

{
    MPMediaLibraryEntityTranslationContext *_entityTranslationContext;
    vector_bbba3654 _allowedItemPersistentIDs;
    struct map<long long, unsigned long, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, unsigned long>>> _allowedItemPersistentIDToItemQueryResultsIndexMap;
    MPModelLibraryRequest *_request;
    NSDictionary *_indexPathToContainerUniqueIDMap;
    shared_ptr_8b9a1f72 _itemIdentifierQueryResults;
    shared_ptr_274c5e8b _itemQueryResults;
}

@property (retain, nonatomic) NSDictionary *indexPathToContainerUniqueIDMap;
@property (nonatomic, readonly) shared_ptr_8b9a1f72 itemIdentifierQueryResults;
@property (nonatomic, readonly) shared_ptr_274c5e8b itemQueryResults;
@property (nonatomic, readonly) MPModelLibraryRequest *request;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id).cxx_construct;
- (unsigned long long)numberOfSections;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (id)sectionIndexTitles;
- (id)sectionAtIndex:(unsigned long long)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (id)identifiersForItemAtIndexPath:(id)arg1;
- (id)identifiersForSectionAtIndex:(long long)arg1;
- (id)indexPathForItemWithIdentifiersIntersectingSet:(id)arg1;
- (struct _NSRange)optionalSectionIndexTitlesRange;
- (long long)indexOfSectionForSectionIndexTitleAtIndex:(long long)arg1;
- (_Bool)hasSameContentAsDataSource:(id)arg1;
- (id)initWithRequest:(id)arg1 itemQueryResults:(shared_ptr_274c5e8b)arg2 itemIdentifierQueryResults:(shared_ptr_8b9a1f72)arg3;
- (_Bool)_usesSections;
- (void)_populateIndexMap;
- (unsigned long long)_adjustedGlobalIndexForIndexPath:(id)arg1;
- (_Bool)_allowedEntityIdentifiersContainsAllPersistentIDs;
- (id)_buildIndexPathToContainerUniqueIDMapFromItemQueryResults:(shared_ptr_274c5e8b)arg1;

@end
