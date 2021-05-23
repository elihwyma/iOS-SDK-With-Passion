/*
 Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

#import <Foundation/NSObject.h>

@class NSTimer;

__attribute__((visibility("hidden")))
@interface RMSSessionProxy : NSObject

{
    NSTimer *_heartbeatTimer;
    double _sessionTimeout;
    double _lastHeartbeatTime;
    _Bool _isPaused;
    int _sessionIdentifier;
}

@property (nonatomic) int sessionIdentifier;

- (id)init;
- (void)dealloc;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationWillResignActiveNotification:(id)arg1;
- (id)initWithTimeout:(double)arg1;
- (void)beginHeartbeat;
- (void)endHeartbeat;
- (_Bool)sessionMatchesNotification:(id)arg1;
- (void)heartbeatDidFail;
- (int)heartbeatTime;
- (void)_sendHeartbeat:(id)arg1;

@end
