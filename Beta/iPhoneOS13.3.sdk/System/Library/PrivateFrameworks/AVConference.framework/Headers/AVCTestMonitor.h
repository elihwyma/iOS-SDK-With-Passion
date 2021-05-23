/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class AVConferenceXPCClient;

@protocol OS_dispatch_queue;

@interface AVCTestMonitor : NSObject

{
    id _delegate;
    NSObject<OS_dispatch_queue> *_delegateNotificationQueue;
    AVConferenceXPCClient *_connection;
}

- (void)dealloc;
- (id)delegate;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (void)registerBlocksForNotifications;
- (void)deregisterBlocksForNotifications;
- (id)delegateNotificationQueue;
- (void)setupNotificationQueue:(id)arg1;
- (void)requestReport;
- (void)updateAudioInjectConfig:(id)arg1;
- (void)forceNetworkCellular:(_Bool)arg1;
- (void)setEnableLoopbackInterface:(_Bool)arg1;
- (void)setEmulatedRxPLR:(double)arg1;

@end
