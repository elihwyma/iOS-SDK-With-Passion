/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <Foundation/NSObject.h>

@class IMDaemonController;

@protocol IMRemoteDaemonProtocol;

@interface IMOneTimeCodeAccelerator : NSObject

{
    _Bool _requestedOneTimeCodeStatusForConnection;
    IMDaemonController<IMRemoteDaemonProtocol> *_daemon;
    CDUnknownBlockType _updateBlock;
}

@property (retain, nonatomic) IMDaemonController<IMRemoteDaemonProtocol> *daemon;
@property (copy, nonatomic) CDUnknownBlockType updateBlock;
@property (nonatomic) _Bool requestedOneTimeCodeStatusForConnection;

- (void)dealloc;
- (void)daemonControllerWillConnect;
- (void)daemonControllerDidDisconnect;
- (void)daemonConnectionLost;
- (void)daemonControllerDidConnect;
- (id)initWithDaemon:(id)arg1 andBlock:(CDUnknownBlockType)arg2;
- (void)setUpConnectionToDaemaon;
- (void)_incomingCodeUpdateFromDaemon:(id)arg1;
- (id)initWithBlockForUpdates:(CDUnknownBlockType)arg1;
- (void)consumeCodeWithGuid:(id)arg1;

@end
