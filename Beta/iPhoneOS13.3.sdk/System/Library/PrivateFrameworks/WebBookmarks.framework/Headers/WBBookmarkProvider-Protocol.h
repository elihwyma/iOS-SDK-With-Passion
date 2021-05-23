/*
 Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

#import <WebBookmarks/Swift-Protocol.h>

@protocol WBBookmarkProvider <Swift>

- (unsigned short)bookmarkWithID: /* Error: Ran out of types for this method. */;
- (unsigned short)readingListWithUnreadOnly:filteredUsingString: /* Error: Ran out of types for this method. */;
- (unsigned short)enumerateBookmarks:andReadingListItems:matchingString:usingBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)bookmarksMatchingString: /* Error: Ran out of types for this method. */;
- (unsigned short)readingListBookmarksMatchingString:maxResults:onlyArchivedBookmarks: /* Error: Ran out of types for this method. */;
- (unsigned short)databaseHealthInformation;

@end
