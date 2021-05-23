/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCConnection, NSXPCListenerEndpoint;

@protocol OS_dispatch_queue, SFProxCardXPCServerInterface;

@interface SFProxCardSessionServer : NSObject

{
    _Bool _dismissCalled;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    struct LogCategory *_ucat;
    NSXPCConnection *_xpcCnx;
    id <SFProxCardXPCServerInterface> _delegate;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _errorHandler;
    CDUnknownBlockType _invalidationHandler;
    NSString *_label;
    NSXPCListenerEndpoint *_xpcEndpoint;
}

@property (retain, nonatomic) id <SFProxCardXPCServerInterface> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType errorHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (copy, nonatomic) NSString *label;
@property (retain, nonatomic) NSXPCListenerEndpoint *xpcEndpoint;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)_invalidate;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_invalidated;
- (void)_reportError:(id)arg1;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)performAction:(int)arg1 completion:(CDUnknownBlockType)arg2;

@end
