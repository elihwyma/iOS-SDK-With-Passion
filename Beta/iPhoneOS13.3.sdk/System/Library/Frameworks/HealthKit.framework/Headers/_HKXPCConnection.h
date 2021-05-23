/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCConnection;

@protocol _HKXPCExportable;

@interface _HKXPCConnection : NSObject

{
    NSXPCConnection *_underlyingConnection;
    id <_HKXPCExportable> _exportedObject;
    NSString *_debugIdentifier;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
}

@property (weak, nonatomic) id <_HKXPCExportable> exportedObject;
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
- (id)_loggingPrefix;
- (id)initWithUnderlyingConnection:(id)arg1;
- (void)unitTest_interrupt;

@end
