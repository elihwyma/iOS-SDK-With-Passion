/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Foundation/NSObject.h>

@class NSLock, NSMutableArray, NSString, NSXPCConnection, NSXPCInterface;

@interface SLRemoteSessionProxy : NSObject

{
    NSString *_serviceName;
    NSXPCInterface *_remoteInterface;
    id _remoteProxy;
    NSXPCConnection *_connection;
    NSMutableArray *_guaranteedRemoteCalls;
    NSLock *_guaranteedRemoteCallsLock;
    NSObject *_exportedObject;
    NSXPCInterface *_exportedInterface;
    CDUnknownBlockType _connectionResetBlock;
}

@property (weak) NSObject *exportedObject;
@property (retain) NSXPCInterface *exportedInterface;
@property (copy) CDUnknownBlockType connectionResetBlock;

- (void)dealloc;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)disconnect;
- (id)initForRemoteServiceName:(id)arg1 remoteInterface:(id)arg2;
- (void)dropGuaraneteedRemoteCall:(id)arg1;
- (void)registerGuaranteedRemoteCall:(id)arg1;
- (void)_remoteSessionConnectionWasInterrupted;
- (void)_setupConnection;

@end
