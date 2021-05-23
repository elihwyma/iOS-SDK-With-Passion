/*
 Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, WebBookmark;

__attribute__((visibility("hidden")))
@interface WBDuplicateBookmarkGroup : NSObject

{
    NSMutableArray *_dupicateBookmarks;
    NSMutableArray *_dupicateBookmarksToKeep;
    _Bool _foundDuplicates;
    WebBookmark *_originalBookmark;
}

@property (nonatomic, readonly) WebBookmark *originalBookmark;
@property (nonatomic, readonly) NSArray *duplicates;
@property (nonatomic, readonly) NSArray *duplicatesToKeep;
@property (nonatomic, readonly) _Bool foundDuplicates;

- (id)initWithOriginalBookmark:(id)arg1;
- (void)addDuplicateBookmark:(id)arg1 replaceOriginal:(_Bool)arg2;
- (void)addDuplicateBookmarkToKeep:(id)arg1;
- (void)exchangeOriginalBookmarkWithBookmark:(id)arg1;
- (void)removeAllDuplicates;

@end
