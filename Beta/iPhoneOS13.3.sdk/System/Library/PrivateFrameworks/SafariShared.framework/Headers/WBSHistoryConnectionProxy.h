/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

@protocol OS_dispatch_queue;

@interface WBSHistoryConnectionProxy : NSObject

{
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_connectionProxyQueue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *connectionProxyQueue;

- (id)init;
- (void)dealloc;
- (void)_setupConnection;
- (void)queryMemoryFootprint:(CDUnknownBlockType)arg1;
- (id)queryMemoryFootprintWithError:(id *)arg1;
- (void)ensureConnected:(CDUnknownBlockType)arg1;
- (void)beginHistoryAccessSession:(CDUnknownBlockType)arg1;
- (void)getServiceInfo:(CDUnknownBlockType)arg1;
- (void)beginURLCompletionSession:(CDUnknownBlockType)arg1;
- (void)getVisitedLinksWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)groupVisitsIntoSessionsBetweenStartDate:(id)arg1 endDate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)debugGetDatabaseURLWithCompletionHandler:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)_defaultProxyErrorHandlerWithSimpleReplyCompletionHandler:(CDUnknownBlockType)arg1;
- (void)killService;

@end
