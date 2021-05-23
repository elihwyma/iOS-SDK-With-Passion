/*
 Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <Foundation/NSObject.h>

@class NSTimer;

@protocol OS_dispatch_queue;

@interface MSDaemon : NSObject

{
    _Bool _stabilizedIsBusy;
    int _busyCount;
    int _UIBusyCount;
    NSObject<OS_dispatch_queue> *_idleCountQueue;
    NSTimer *_hysteresisTimer;
}

@property (nonatomic) int busyCount;
@property (nonatomic) int UIBusyCount;
@property (retain, nonatomic) NSTimer *hysteresisTimer;
@property (nonatomic) _Bool stabilizedIsBusy;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *idleCountQueue;

- (id)init;
- (_Bool)isBusy;
- (void)releasePowerAssertion;
- (void)retainPowerAssertion;
- (void)retainBusy;
- (void)releaseBusy;
- (void)retainUIBusy;
- (void)releaseUIBusy;
- (void)didIdle;
- (void)didUnidle;
- (void)_didChangeIdleBusyState:(_Bool)arg1;
- (void)_hysteresisTimerDidFire:(id)arg1;
- (void)stabilizedDidIdle;
- (void)stabilizedDidUnidle;

@end
