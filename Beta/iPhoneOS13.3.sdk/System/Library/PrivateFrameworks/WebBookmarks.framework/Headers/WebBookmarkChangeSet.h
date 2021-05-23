/*
 Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, NSMutableOrderedSet, NSURL;

@protocol OS_dispatch_queue;

@interface WebBookmarkChangeSet : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    int _lastBookmarkIDForAddingInMemoryBookmark;
    NSMutableOrderedSet *_changes;
    NSMutableDictionary *_bookmarkIDToChanges;
    NSMutableDictionary *_folderIDToDeletedChildrenChanges;
    NSMutableDictionary *_folderIDToAddedChildrenChanges;
    NSMutableDictionary *_folderIDToModifiedChildrenChanges;
    NSURL *_fileURL;
}

@property (copy, nonatomic, readonly) NSURL *fileURL;
@property (copy, nonatomic, readonly) NSArray *changes;

+ (void)setSharedChangeSet:(id)arg1;
+ (id)sharedChangeSet;

- (id)init;
- (void)addChange:(id)arg1;
- (id)initWithFileURL:(id)arg1;
- (void)persistChangesWithCompletion:(CDUnknownBlockType)arg1;
- (id)modifiedBookmarksInBookmarkFolder:(int)arg1;
- (long long)replayChangesToBookmark:(id)arg1;
- (void)_readPersistedChanges;
- (void)_addChange:(id)arg1;
- (void)_removeAllChanges;
- (int)nextBookmarkIDForAddingBookmarkInMemory;
- (void)removeChange:(id)arg1;
- (void)removeAllChanges;
- (_Bool)isBookmarkDeleted:(int)arg1;
- (id)deletedBookmarkIDsInBookmarkFolder:(int)arg1;
- (id)addedBookmarksInBookmarkFolder:(int)arg1;
- (unsigned long long)numberOfAddedBookmarksInBookmarkFolder:(int)arg1;
- (void)updateAddChangesWithInMemoryBookmarkID:(int)arg1 toDatabaseGeneratedID:(int)arg2;
- (_Bool)bookmarkIsAddedInMemory:(int)arg1;

@end
