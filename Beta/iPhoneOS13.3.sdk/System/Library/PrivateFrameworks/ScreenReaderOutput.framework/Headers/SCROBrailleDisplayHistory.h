/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

#import <Foundation/NSObject.h>

@interface SCROBrailleDisplayHistory : NSObject

{
    struct __CFArray *_announcements;
    struct __CFArray *_unreadSnapshot;
    long long _currentIndex;
    long long _unreadCount;
}

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (void)addString:(id)arg1;
- (_Bool)_moveIndexBy:(long long)arg1;
- (void)snapshotUnread;
- (void)markSnapshotAsRead;
- (_Bool)hasUnread;
- (id)currentString;
- (_Bool)moveToNext;
- (_Bool)moveToPrevious;
- (_Bool)isOnMostRecent;
- (void)moveToMostRecent;

@end
