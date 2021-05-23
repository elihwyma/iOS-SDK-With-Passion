/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class BKSApplicationStateMonitor, NSArray;

@protocol OS_dispatch_queue, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface NSFileAccessProcessManager : NSObject

{
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _suspensionHandler;
    NSArray *_urls;
    BKSApplicationStateMonitor *_monitor;
    id _assertionToken;
    int _pendingMessageCount;
}

@property (copy) CDUnknownBlockType suspensionHandler;
@property (copy) NSArray *URLs;

+ (_Bool)needToManageConnection:(id)arg1 forURLs:(id)arg2;

- (void)dealloc;
- (void)invalidate;
- (void)killProcessWithMessage:(id)arg1;
- (void)_ensureMonitor;
- (void)allowSuspension;
- (id)initWithClient:(id)arg1 queue:(id)arg2;
- (void)safelySendMessageWithReplyUsingBlock:(CDUnknownBlockType)arg1;
- (void)preventSuspensionWithActivityName:(id)arg1;

@end
