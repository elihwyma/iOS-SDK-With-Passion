/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@class AXAccessQueue, NSLock, NSMutableArray, NSString;

@interface AXIPCClient : NSObject

{
    struct __CFMachPort *_serverPort;
    NSLock *_serverPortLock;
    unsigned int _assignedServerMachPort;
    CDUnknownBlockType _portDeathHandler;
    float _timeout;
    NSString *_clientIdentifier;
    struct __CFRunLoopSource *_clientSource;
    unsigned long long _connectionAttempts;
    NSMutableArray *_outstandingAsyncRequests;
    _Bool _connected;
    _Bool shouldRegisterCallbackSourceOnMainRunloop;
    _Bool _usesPerPidLookup;
    unsigned int clientCallbackPort;
    int _pid;
    NSString *_serviceName;
    NSMutableArray *_postConnectionTasks;
    AXAccessQueue *_connectionQueue;
    struct __CFRunLoopSource *clientCallbackSource;
    AXAccessQueue *_portDeathAccessQueue;
}

@property (nonatomic, getter=isConnected) _Bool connected;
@property (copy, nonatomic) NSString *serviceName;
@property (nonatomic) struct __CFMachPort *serverPort;
@property (retain, nonatomic) NSMutableArray *postConnectionTasks;
@property (retain, nonatomic) AXAccessQueue *connectionQueue;
@property (nonatomic) _Bool usesPerPidLookup;
@property (nonatomic) int pid;
@property (nonatomic, readonly) unsigned int serviceMachPort;
@property (copy, nonatomic) CDUnknownBlockType portDeathHandler;
@property (retain, nonatomic) AXAccessQueue *portDeathAccessQueue;
@property (nonatomic) float timeout;
@property (copy, nonatomic) NSString *clientIdentifier;
@property (nonatomic, readonly) unsigned int clientCallbackPort;
@property (nonatomic, readonly) struct __CFRunLoopSource *clientCallbackSource;
@property (nonatomic) _Bool shouldRegisterCallbackSourceOnMainRunloop;

+ (void)initialize;
+ (id)allClients;

- (void)dealloc;
- (id)description;
- (id)initWithServiceName:(id)arg1;
- (id)initWithPort:(unsigned int)arg1;
- (void)_commonInit;
- (void)sendSimpleMessage:(id)arg1;
- (id)sendMessage:(id)arg1 withError:(id *)arg2;
- (_Bool)sendAsyncMessage:(id)arg1 replyOnQueue:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (_Bool)sendSimpleMessage:(id)arg1 withError:(id *)arg2;
- (_Bool)sendAsyncMessage:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;
- (_Bool)connectWithError:(id *)arg1;
- (_Bool)_handleErrorWithMessage:(id)arg1 outError:(id *)arg2;
- (void)_registerWithServer;
- (void)_sendRegistrationMessageWithRetries:(int)arg1;
- (_Bool)verifyConnectionExists;
- (_Bool)_handleErrorWithMessage:(id)arg1 machError:(int)arg2 outError:(id *)arg3;
- (_Bool)_verifyConnectionWithError:(id *)arg1;
- (_Bool)sendSimpleMessage:(id)arg1 synchronizationPort:(unsigned int)arg2 error:(id *)arg3;
- (_Bool)_prepareToSendMessage:(id)arg1 withError:(id *)arg2 prepSuccessHandler:(CDUnknownBlockType)arg3;
- (id)_createRegistrationWithReplyMachPort:(unsigned int)arg1 forAsyncReplyOnQueue:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)_attemptToEstablishConnection;
- (_Bool)disconnectWithError:(id *)arg1;
- (void)_serverDied;
- (void)establishConnectionWithTimeout:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_descriptionForMachError:(int)arg1;

@end
