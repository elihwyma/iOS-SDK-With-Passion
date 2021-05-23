/*
 Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

#import <Foundation/NSObject.h>

@class WebBookmarksXPCConnection;

__attribute__((visibility("hidden")))
@interface WBReadingListPrivate : NSObject

{
    WebBookmarksXPCConnection *_connection;
}

- (id)init;
- (void)_addReadingListItemWithURL:(id)arg1 title:(id)arg2 previewText:(id)arg3;

@end
