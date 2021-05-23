/*
 Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCConnection;

@protocol _TPSXPCExportable;

@interface _TPSXPCConnection : NSObject

{
    NSXPCConnection *_underlyingConnection;
    id <_TPSXPCExportable> _exportedObject;
    NSString *_debugIdentifier;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
}

@property (weak, nonatomic) id <_TPSXPCExportable> exportedObject;
@property (copy, nonatomic) NSString *debugIdentifier;
@property (copy, nonatomic) CDUnknownBlockType interruptionHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;

- (void)dealloc;
- (void)invalidate;
- (void)resume;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)initWithListenerEndpoint:(id)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)initWithServiceName:(id)arg1;
- (id)initWithMachServiceName:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithUnderlyingConnection:(id)arg1;

@end
