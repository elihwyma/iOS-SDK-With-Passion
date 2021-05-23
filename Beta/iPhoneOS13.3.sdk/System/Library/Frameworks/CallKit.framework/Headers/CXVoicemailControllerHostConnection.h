/*
 Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

#import <Foundation/NSObject.h>

@class NSSet, NSString, NSURL, NSXPCConnection;

@protocol CXVoicemailControllerHostConnectionDelegate, CXVoicemailControllerVendorProtocol, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CXVoicemailControllerHostConnection : NSObject

{
    NSString *_applicationIdentifier;
    NSURL *_bundleURL;
    id <CXVoicemailControllerHostConnectionDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSXPCConnection *_connection;
    NSSet *_capabilities;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (copy, nonatomic) NSString *applicationIdentifier;
@property (copy, nonatomic) NSURL *bundleURL;
@property (copy, nonatomic) NSSet *capabilities;
@property (nonatomic, readonly) id <CXVoicemailControllerVendorProtocol> remoteObjectProxy;
@property (nonatomic, readonly, getter=isPermittedToUsePrivateAPI) _Bool permittedToUsePrivateAPI;
@property (weak, nonatomic) id <CXVoicemailControllerHostConnectionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (oneway void)requestTransaction:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)initWithConnection:(id)arg1 serialQueue:(id)arg2;
- (oneway void)requestVoicemails:(CDUnknownBlockType)arg1;
- (oneway void)addOrUpdateVoicemails:(id)arg1;
- (oneway void)removeVoicemails:(id)arg1;

@end
