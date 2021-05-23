/*
 Image: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
 */

#import <Foundation/NSObject.h>

@class NSString, XPCServiceListener;

@protocol NSObject, OS_dispatch_queue, OS_xpc_object, XPCServiceConnectionDelegate;

@interface XPCServiceConnection : NSObject

{
    NSString *_serviceName;
    id <XPCServiceConnectionDelegate> _delegate;
    NSObject<OS_xpc_object> *_client;
    id <NSObject> _context;
    XPCServiceListener *_serviceListener;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (nonatomic, readonly) NSObject<OS_xpc_object> *client;
@property (weak, nonatomic) XPCServiceListener *serviceListener;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic, readonly) NSString *serviceName;
@property (weak, nonatomic) id <XPCServiceConnectionDelegate> delegate;
@property (retain, nonatomic) id <NSObject> context;

- (id)debugDescription;
- (void)resume;
- (void)sendMessage:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)shutDownCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithServiceName:(id)arg1 client:(id)arg2 queue:(id)arg3;
- (void)workQueueHandleIncomingMessage:(id)arg1;
- (void)workQueueShutDown;

@end
