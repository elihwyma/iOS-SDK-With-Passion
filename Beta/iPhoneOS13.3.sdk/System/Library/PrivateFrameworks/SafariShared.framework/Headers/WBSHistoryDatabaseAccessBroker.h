/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSURL;

@protocol OS_dispatch_queue;

@interface WBSHistoryDatabaseAccessBroker : NSObject

{
    NSURL *_historyDatabaseURL;
    NSObject<OS_dispatch_queue> *_writeRequestQueue;
}

- (id)init;
- (void)requestAccessType:(long long)arg1 onQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)requestAccessType:(long long)arg1 onQueue:(id)arg2 completionHandlerWithInvalidationHandler:(CDUnknownBlockType)arg3;
- (void)_requestReadOnlyAccessOnQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_requestReadWriteAccessOnQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_requestAccessType:(long long)arg1 onQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_openDatabaseWithAccessType:(long long)arg1 onQueue:(id)arg2 error:(id *)arg3;
- (id)initWithHistoryDatabaseURL:(id)arg1;
- (id)databaseLastModifiedDate;

@end
