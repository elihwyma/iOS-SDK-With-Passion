/*
 Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, WebBookmarkCollection, WebBookmarkListQuery;

@interface WebBookmarkList : NSObject

{
    NSMutableArray *_bookmarks;
    unsigned int _bookmarkCount;
    unsigned int _skipOffset;
    WebBookmarkListQuery *_query;
    WebBookmarkCollection *_collection;
}

@property (nonatomic, readonly) int folderID;

- (unsigned int)bookmarkCount;
- (id)bookmarkArray;
- (id)bookmarkAtIndex:(unsigned int)arg1;
- (id)initWithQuery:(id)arg1 skipOffset:(unsigned int)arg2 collection:(id)arg3;
- (void)_moveBookmarkAtIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2;
- (unsigned int)_reverseOrderIndex:(unsigned int)arg1;
- (id)_bookmarkAtIndex:(unsigned int)arg1 paginate:(_Bool)arg2;
- (void)_loadBookmarksForDifferenceFromList:(id)arg1;
- (id)_arrayForDifferenceCalculation;
- (id)bookmarkArrayRequestingCount:(unsigned int)arg1;
- (id)differenceFromList:(id)arg1 withOptions:(unsigned long long)arg2;

@end
