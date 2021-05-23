/*
 Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

#import <Foundation/NSObject.h>

@class WBReadingListPrivate;

@protocol OS_dispatch_queue;

@interface WBReadingList : NSObject

{
    WBReadingListPrivate *_private;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

+ (_Bool)supportsURL:(id)arg1;
+ (id)defaultReadingList;

- (id)init;
- (id)_init;
- (_Bool)addReadingListItemWithURL:(id)arg1 title:(id)arg2 previewText:(id)arg3 error:(id *)arg4;

@end
