/*
 Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@protocol WebBookmarkInMemoryChangeFilter;

@interface WebBookmarkListQuery : NSObject

{
    NSString *_query;
    NSString *_queryWithOrderBy;
    NSString *_orderBy;
    NSArray *_titleWordPrefixes;
    NSArray *_titleWordPrefixesForInMemoryFiltering;
    NSString *_urlFilter;
    _Bool _includeHidden;
    _Bool _countShouldUseNumChildrenIfPossible;
    _Bool _customQuery;
    int _folderID;
    id <WebBookmarkInMemoryChangeFilter> _inMemoryFilter;
}

@property (nonatomic, readonly, getter=isCustomQuery) _Bool customQuery;
@property (nonatomic, readonly) int folderID;
@property (retain, nonatomic) id <WebBookmarkInMemoryChangeFilter> inMemoryFilter;

- (id)init;
- (id)debugDescription;
- (id)initWithBookmarksWhere:(id)arg1 orderBy:(id)arg2 usingFilter:(id)arg3;
- (id)initWithFolderID:(int)arg1 inCollection:(id)arg2 includeHidden:(_Bool)arg3 usingFilter:(id)arg4;
- (id)initWithBookmarksWhere:(id)arg1 folderID:(int)arg2 orderBy:(id)arg3 usingFilter:(id)arg4;
- (id)bookmarksInCollection:(id)arg1 fromIndex:(unsigned int)arg2 toIndex:(unsigned int)arg3;
- (int)countInCollection:(id)arg1;
- (id)_normalizeUserTypedString:(id)arg1;
- (void)_preparePrefixesFromNormalizedString:(id)arg1;
- (long long)_listQueryType;
- (id)_sqliteNotInConditionForInMemoryModifiedAndDeleted:(_Bool)arg1 bookmarksInFolder:(int)arg2 collection:(id)arg3;
- (id)_sqliteInConditionForInMemoryModifiedBookmarksInFolder:(int)arg1 collection:(id)arg2;
- (id)_filterBookmarks:(id)arg1;
- (int)_childCountInDatabaseForFolderFetchInCollection:(id)arg1 skipCountingInDatabaseBookmarksThatAreDeletedInMemory:(_Bool)arg2;
- (int)_inMemoryAddedChildrenCountForBookmarkFolder:(int)arg1 collection:(id)arg2 skipCountingBookmarksThatAreDeletedInMemory:(_Bool)arg3;

@end
