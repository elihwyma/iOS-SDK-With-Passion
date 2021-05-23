/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <CoreSpeech/CSEventMonitor.h>

@class NSObject, NSString;

@protocol OS_dispatch_queue;

@interface CSSiriAssertionMonitor : CSEventMonitor

{
    unsigned char _assertionState;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (_Bool)isEnabled;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_notifyObserver:(_Bool)arg1;
- (void)enableAssertionReceived;
- (void)disableAssertionReceived;
- (void)handleXPCMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3;

@end
