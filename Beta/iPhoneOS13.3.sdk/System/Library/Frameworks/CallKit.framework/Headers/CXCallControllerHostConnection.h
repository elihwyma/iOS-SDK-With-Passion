/*
 Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

#import <Foundation/NSObject.h>

@class NSSet, NSString, NSURL, NSXPCConnection;

@protocol CXCallControllerHostConnectionDelegate, CXCallControllerVendorProtocol, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CXCallControllerHostConnection : NSObject

{
    _Bool _hasVoIPBackgroundMode;
    NSString *_applicationIdentifier;
    NSURL *_bundleURL;
    id <CXCallControllerHostConnectionDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSXPCConnection *_connection;
    NSSet *_capabilities;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (nonatomic) _Bool hasVoIPBackgroundMode;
@property (copy, nonatomic) NSString *applicationIdentifier;
@property (copy, nonatomic) NSURL *bundleURL;
@property (copy, nonatomic) NSSet *capabilities;
@property (nonatomic, readonly) id <CXCallControllerVendorProtocol> remoteObjectProxy;
@property (nonatomic, readonly, getter=isPermittedToUsePublicAPI) _Bool entitledForPublicAPI;
@property (nonatomic, readonly, getter=isPermittedToUsePrivateAPI) _Bool entitledForPrivateAPI;
@property (weak, nonatomic) id <CXCallControllerHostConnectionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (oneway void)requestTransaction:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (oneway void)addOrUpdateCall:(id)arg1;
- (oneway void)removeCall:(id)arg1;
- (id)initWithConnection:(id)arg1 serialQueue:(id)arg2;
- (oneway void)requestCalls:(CDUnknownBlockType)arg1;

@end
