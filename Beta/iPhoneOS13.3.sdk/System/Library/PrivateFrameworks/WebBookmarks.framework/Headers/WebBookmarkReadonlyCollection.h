/*
 Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

#import <Foundation/NSObject.h>

@class NSString, WebBookmarkCollection;

@interface WebBookmarkReadonlyCollection : NSObject

{
    WebBookmarkCollection *_collection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)bookmarkWithID:(int)arg1;
- (id)readingListWithUnreadOnly:(_Bool)arg1 filteredUsingString:(id)arg2;
- (void)enumerateBookmarks:(_Bool)arg1 andReadingListItems:(_Bool)arg2 matchingString:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (id)bookmarksMatchingString:(id)arg1;
- (id)readingListBookmarksMatchingString:(id)arg1 maxResults:(unsigned int)arg2 onlyArchivedBookmarks:(_Bool)arg3;
- (id)databaseHealthInformation;
- (id)initReadonlySafariBookmarkCollection;

@end
