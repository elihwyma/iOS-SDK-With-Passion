/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSObject.h>

@class MTTimerManager, NSString;

@interface MTTimerManagerExportedObject : NSObject

{
    MTTimerManager *_timerManager;
}

@property (weak, nonatomic, readonly) MTTimerManager *timerManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)timerFired:(id)arg1;
- (void)timersAdded:(id)arg1;
- (void)timersUpdated:(id)arg1;
- (void)timersRemoved:(id)arg1;
- (id)initWithTimerManager:(id)arg1;
- (void)_didReceiveTimerServerReadyNotification:(id)arg1;
- (void)timerDismissed:(id)arg1;
- (void)nextTimerChanged:(id)arg1;

@end
