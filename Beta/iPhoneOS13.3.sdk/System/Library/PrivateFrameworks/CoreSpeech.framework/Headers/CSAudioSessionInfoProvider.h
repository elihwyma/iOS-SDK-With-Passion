/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSString;

@protocol OS_dispatch_queue;

@interface CSAudioSessionInfoProvider : NSObject

{
    NSObject<OS_dispatch_queue> *_sessionInfoQueue;
    NSHashTable *_observers;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *sessionInfoQueue;
@property (retain, nonatomic) NSHashTable *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)_stopMonitoring;
- (void)registerObserver:(id)arg1;
- (void)unregisterObserver:(id)arg1;
- (unsigned int)audioSessionID;
- (void)_startMonitoring;
- (void)_registerInterruptionNotification;
- (void)_registerAudioRouteChangeNotification;
- (void)_handleInterruption:(id)arg1;
- (void)_audioRouteChanged:(id)arg1;
- (void)CSAudioServerCrashMonitorDidReceiveServerCrash:(id)arg1;
- (void)CSAudioServerCrashMonitorDidReceiveServerRestart:(id)arg1;
- (void)_deregisterAudioSessionNotifications;
- (void)_registerAudioSessionNotifications;

@end
