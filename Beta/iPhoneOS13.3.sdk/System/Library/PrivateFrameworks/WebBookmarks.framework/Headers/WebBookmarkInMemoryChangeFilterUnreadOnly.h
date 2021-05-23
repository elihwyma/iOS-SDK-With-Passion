/*
 Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WebBookmarkInMemoryChangeFilterUnreadOnly : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)_bookmarksIDsFromBookmarks:(id)arg1 fromChangeSet:(id)arg2 withFilter:(CDUnknownBlockType)arg3;
- (id)bookmarkIDsModifiedInMemoryPassingFilterFromChangeSet:(id)arg1 inFolder:(int)arg2;
- (id)bookmarkIDsModifiedInMemoryNotPassingFilterFromChangeSet:(id)arg1 inFolder:(int)arg2;

@end
