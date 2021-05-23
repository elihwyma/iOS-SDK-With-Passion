/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class AVConferenceXPCClient, NSArray, NSMutableArray, NSMutableDictionary;

@protocol AVCQoSMonitorDelegate, OS_dispatch_queue;

@interface AVCQoSMonitor : NSObject

{
    NSObject<OS_dispatch_queue> *_stateQueue;
    id <AVCQoSMonitorDelegate> _delegate;
    AVConferenceXPCClient *_connection;
    NSMutableArray *_registeredStreamTokens;
    NSMutableDictionary *_reportingIntervals;
}

@property (weak, nonatomic) id <AVCQoSMonitorDelegate> delegate;
@property (nonatomic, readonly) NSArray *streamTokens;

- (void)dealloc;
- (void)registerBlocksForNotifications;
- (void)deregisterBlocksForNotifications;
- (_Bool)generateInvalidStreamTokenWithError:(id *)arg1;
- (void)terminateConnection;
- (id)initWithStreamToken:(long long)arg1 queue:(id)arg2 error:(id *)arg3;
- (void)requestQoSReport;
- (id)registerStreamToken:(long long)arg1;
- (long long)reportingIntervalForStreamToken:(long long)arg1;

@end
