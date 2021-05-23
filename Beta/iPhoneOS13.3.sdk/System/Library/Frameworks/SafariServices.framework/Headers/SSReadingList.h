/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class WebBookmarksXPCConnection;

@protocol OS_dispatch_queue, OS_xpc_object;

@interface SSReadingList : NSObject

{
    WebBookmarksXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_xpc_object> *_batchedReadingListItems;
    _Bool _batchScheduled;
}

+ (_Bool)supportsURL:(id)arg1;
+ (id)defaultReadingList;

- (id)init;
- (void)dealloc;
- (id)_init;
- (_Bool)addReadingListItemWithURL:(id)arg1 title:(id)arg2 previewText:(id)arg3 error:(id *)arg4;
- (void)_sendBatchedReadingListItems;
- (void)_addReadingListItemWithURL:(id)arg1 title:(id)arg2 previewText:(id)arg3;

@end
