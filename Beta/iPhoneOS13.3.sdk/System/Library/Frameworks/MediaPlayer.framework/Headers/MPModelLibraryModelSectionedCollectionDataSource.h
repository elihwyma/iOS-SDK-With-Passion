/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class MPMediaLibraryEntityTranslationContext, MPModelLibraryRequest, NSString;

@interface MPModelLibraryModelSectionedCollectionDataSource : NSObject

{
    MPMediaLibraryEntityTranslationContext *_itemTranslationContext;
    MPMediaLibraryEntityTranslationContext *_sectionTranslationContext;
    vector_bbba3654 _allowedSectionPersistentIDs;
    struct map<long long, unsigned long, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, unsigned long>>> _allowedSectionPersistentIDToSectionQueryResultsIndexMap;
    MPModelLibraryRequest *_request;
    shared_ptr_87e3a99b _itemEntityQueryResults;
    shared_ptr_274c5e8b _sectionEntityQueryResult;
}

@property (nonatomic, readonly) shared_ptr_87e3a99b itemEntityQueryResults;
@property (nonatomic, readonly) shared_ptr_274c5e8b sectionEntityQueryResult;
@property (nonatomic, readonly) MPModelLibraryRequest *request;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id).cxx_construct;
- (unsigned long long)numberOfSections;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (id)sectionAtIndex:(unsigned long long)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (id)identifiersForItemAtIndexPath:(id)arg1;
- (id)identifiersForSectionAtIndex:(long long)arg1;
- (id)indexPathForItemWithIdentifiersIntersectingSet:(id)arg1;
- (_Bool)hasSameContentAsDataSource:(id)arg1;
- (void)_populateIndexMap;
- (_Bool)_allowedEntityIdentifiersContainsAllPersistentIDs;
- (id)initWithRequest:(id)arg1 sectionQueryResults:(shared_ptr_274c5e8b)arg2 itemQueryResults:(map_be45dc27 *)arg3;
- (unsigned long long)_adjustedIndexForSectionIndex:(long long)arg1;

@end
