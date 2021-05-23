/*
 Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

#import <Foundation/NSString.h>

@interface NSString (WebBookmarksExtras)

- (id)wb_stringByRedactingBookmarkDAVServerID;
- (_Bool)_webBookmarks_hasCaseInsensitivePrefix:(id)arg1;
- (id)_wb_stringByStandardizingDAVServerID;
- (id)_wb_stringByDeletingTrailingSlash;

@end
