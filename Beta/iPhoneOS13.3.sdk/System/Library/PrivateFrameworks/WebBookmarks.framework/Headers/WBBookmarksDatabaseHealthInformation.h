/*
 Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface WBBookmarksDatabaseHealthInformation : NSObject

{
    unsigned long long _topLevelDuplicateBookmarksCount;
    unsigned long long _allDuplicateBookmarksCount;
}

@property (nonatomic, readonly) unsigned long long topLevelDuplicateBookmarksCount;
@property (nonatomic, readonly) unsigned long long allDuplicateBookmarksCount;

- (id)initWithTopLevelDuplicateBookmarksCount:(unsigned long long)arg1 allDuplicateBookmarksCount:(unsigned long long)arg2;

@end
