/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol MTSystemStateDelegate;

@interface MTSystemStateListener : NSObject

{
    _Bool _restoreDoneHandled;
    id <MTSystemStateDelegate> _delegate;
}

@property (weak, nonatomic) id <MTSystemStateDelegate> delegate;
@property (nonatomic) _Bool restoreDoneHandled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)isSystemRestoreDone;
+ (id)_restoreNotification;

- (id)initWithDelegate:(id)arg1;
- (id)liveDarwinNotifications;
- (_Bool)handlesNotification:(id)arg1 ofType:(long long)arg2;
- (void)handleNotification:(id)arg1 ofType:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)printDiagnostics;
- (id)gatherDiagnostics;
- (void)springboardStartMonitor:(id)arg1 didReceiveStarted:(_Bool)arg2;
- (_Bool)_checkIfRestoreDone;
- (void)_handleRestoreDone;
- (void)_verifyRestoreDone;
- (_Bool)checkSystemReady;
- (void)_handleF5Reset;

@end
