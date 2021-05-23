/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCConnection;

@protocol CAMNebulaDaemonIrisClientProtocol, CAMNebulaDaemonTimelapseClientProtocol, OS_dispatch_queue;

@interface CAMNebulaDaemonProxyManager : NSObject

{
    id <CAMNebulaDaemonTimelapseClientProtocol> _timelapseClientDelegate;
    id <CAMNebulaDaemonIrisClientProtocol> _irisClientDelegate;
    NSObject<OS_dispatch_queue> *__queue;
    NSXPCConnection *__connection;
    long long __connectionCount;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_queue;
@property (nonatomic, readonly) NSXPCConnection *_connection;
@property (nonatomic, readonly) long long _connectionCount;
@property (weak, nonatomic) id <CAMNebulaDaemonTimelapseClientProtocol> timelapseClientDelegate;
@property (weak, nonatomic) id <CAMNebulaDaemonIrisClientProtocol> irisClientDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_daemonProtocolInterface;
+ (id)_clientProtocolInterface;

- (id)init;
- (void)updatePendingWorkFromDiskForceEndLastSession:(_Bool)arg1;
- (void)startTimelapseWithUUID:(id)arg1;
- (void)resumeTimelapseWithUUID:(id)arg1;
- (void)updateTimelapseWithUUID:(id)arg1;
- (void)finishCaptureForTimelapseWithUUID:(id)arg1;
- (void)stopTimelapseWithUUID:(id)arg1;
- (void)performIrisCrashRecovery;
- (void)enqueueIrisVideoJobs:(id)arg1;
- (void)pingAfterInterruption;
- (void)forceStopTimelapseCaptureWithReasons:(long long)arg1;
- (void)nebulaDaemonDidCompleteLocalVideoPersistenceWithResult:(id)arg1;
- (void)_getProxyForExecutingBlock:(CDUnknownBlockType)arg1;
- (void)ensureConnectionToDaemon;
- (void)closeConnectionToDaemon;
- (void)_ensureConnectionToDaemon;
- (void)_closeConnectionToDaemon;
- (void)performCrashRecoveryIfNeededForceEndLastTimelapseSession:(_Bool)arg1;

@end
