/*
 Image: /System/Library/Frameworks/IdentityLookup.framework/IdentityLookup
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

@protocol OS_dispatch_queue;

@interface ILMessageFilter : NSObject

{
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) NSXPCConnection *connection;

- (id)init;
- (void)dealloc;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)performQueryRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performReportRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performClassificationReportRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
