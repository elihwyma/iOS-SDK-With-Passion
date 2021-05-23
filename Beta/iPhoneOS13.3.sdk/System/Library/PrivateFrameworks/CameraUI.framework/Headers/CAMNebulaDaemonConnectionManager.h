/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString, NSXPCConnection, Protocol;

@protocol CAMNebulaDaemonConnectionManagerDelegate, OS_dispatch_queue;

@interface CAMNebulaDaemonConnectionManager : NSObject

{
    id <CAMNebulaDaemonConnectionManagerDelegate> _delegate;
    NSString *_clientAccess;
    Protocol *_allowedProtocol;
    NSString *_bundleIdentifier;
    NSXPCConnection *__connection;
    NSString *__name;
    NSObject<OS_dispatch_queue> *__queue;
    NSMutableDictionary *__tasksPerIdentifier;
    NSMutableArray *__registeredTargets;
    NSMutableArray *__registeredProtocols;
}

@property (nonatomic, readonly) NSXPCConnection *_connection;
@property (copy, nonatomic, readonly) NSString *_name;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_queue;
@property (nonatomic, readonly) NSMutableDictionary *_tasksPerIdentifier;
@property (nonatomic, readonly) NSMutableArray *_registeredTargets;
@property (nonatomic, readonly) NSMutableArray *_registeredProtocols;
@property (weak, nonatomic) id <CAMNebulaDaemonConnectionManagerDelegate> delegate;
@property (copy, nonatomic, readonly) NSString *clientAccess;
@property (copy, nonatomic, readonly) Protocol *allowedProtocol;
@property (copy, nonatomic, readonly) NSString *bundleIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_daemonProtocolInterface;
+ (id)_clientProtocolInterface;

- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(_Bool)arg3;
- (void)pingAfterInterruption;
- (void)forceStopTimelapseCaptureWithReasons:(long long)arg1;
- (void)nebulaDaemonDidCompleteLocalVideoPersistenceWithResult:(id)arg1;
- (id)_targetsForSelector:(SEL)arg1;
- (void)_getProxyForExecutingBlock:(CDUnknownBlockType)arg1;
- (id)initWithConnection:(id)arg1 name:(id)arg2 bundleIdentifier:(id)arg3 queue:(id)arg4 clientAccess:(id)arg5 allowedProtocol:(id)arg6;
- (void)addTarget:(id)arg1 forProtocol:(id)arg2;

@end
