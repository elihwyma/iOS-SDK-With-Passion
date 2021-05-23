/*
 Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

#import <NanoRegistry/Swift-Protocol.h>

@class NSString, NSXPCInterface;

@protocol NRNSXPCConnectionProtocol <Swift>

@property (retain, nonatomic) NSXPCInterface *exportedInterface;
@property (retain, nonatomic) id exportedObject;
@property (retain, nonatomic) NSXPCInterface *remoteObjectInterface;
@property (retain, nonatomic, readonly) id remoteObjectProxy;
@property (copy, nonatomic) CDUnknownBlockType interruptionHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (nonatomic, readonly) int processIdentifier;
@property (retain, nonatomic, readonly) NSString *processName;

- (unsigned short)invalidate;
- (unsigned short)resume;
- (unsigned short)_setQueue: /* Error: Ran out of types for this method. */;
- (unsigned short)remoteObjectProxyWithErrorHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)synchronousRemoteObjectProxyWithErrorHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)suspend;
- (unsigned short)initWithMachServiceName:options: /* Error: Ran out of types for this method. */;
- (unsigned short)valueForEntitlement: /* Error: Ran out of types for this method. */;
- (unsigned short)runCompletionBlock: /* Error: Ran out of types for this method. */;

@end
