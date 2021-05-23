/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSDate, NSTimer, TVPStateMachine;

@interface VUIRentalExpirationMonitor : NSObject

{
    TVPStateMachine *_stateMachine;
    NSDate *_dateOfLastRentalExpirationHandling;
    NSTimer *_earliestExpirationTimer;
}

@property (retain, nonatomic) TVPStateMachine *stateMachine;
@property (retain, nonatomic) NSDate *dateOfLastRentalExpirationHandling;
@property (retain, nonatomic) NSTimer *earliestExpirationTimer;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)startMonitoring;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_libraryContentsDidChange:(id)arg1;
- (void)_registerStateMachineHandlers;
- (void)_isPlaybackUIBeingShownDidChange:(id)arg1;
- (void)_expirationTimerDidFire:(id)arg1;

@end
