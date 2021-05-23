/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString, NSUUID, SFPasswordSharingInfo, SFService, SFUserAlert;

@protocol OS_dispatch_queue, SFPasswordSharingServiceDelegate;

@interface SFPasswordSharingService : NSObject

{
    _Bool _activateCalled;
    _Bool _invalidateCalled;
    SFUserAlert *_notification;
    NSUUID *_peer;
    SFPasswordSharingInfo *_promptedInfo;
    SFService *_service;
    int _serviceState;
    NSDate *_shareClock;
    double _shareTime;
    id <SFPasswordSharingServiceDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_networkName;
}

@property (weak, nonatomic) id <SFPasswordSharingServiceDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) NSString *networkName;

+ (unsigned int)passwordSharingAvailability;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)_cleanup;
- (void)activate;
- (void)_run;
- (void)_receivedObject:(id)arg1 flags:(unsigned int)arg2;
- (void)_handleSessionStarted:(id)arg1;
- (_Bool)disabledViaConfig;
- (int)_runServiceStart;
- (void)_sendPasswordReceived;
- (void)_passInfoToDelegate:(id)arg1;
- (void)_sendPasswordDeclinedWithError:(int)arg1;
- (void)_handleReceivedPassword:(id)arg1;
- (void)_handleUserNotificationResponse:(int)arg1;
- (void)_promptUserWithInfo:(id)arg1 message:(id)arg2;
- (id)messageForDisplayName:(id)arg1 deviceName:(id)arg2 info:(id)arg3;
- (_Bool)__activateCalled;
- (_Bool)__invalidateCalled;
- (void)__testReceivedObject:(id)arg1 withFlags:(unsigned int)arg2;

@end
