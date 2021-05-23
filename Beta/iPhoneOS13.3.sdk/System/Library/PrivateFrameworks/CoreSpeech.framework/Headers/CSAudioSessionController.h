/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class CSXPCClient, NSHashTable, NSString;

@protocol CSAudioSessionInfoProviding, OS_dispatch_queue;

@interface CSAudioSessionController : NSObject

{
    _Bool _shouldKeepConnection;
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_observers;
    id <CSAudioSessionInfoProviding> _sessionInfoProvider;
    CSXPCClient *_xpcClient;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) id <CSAudioSessionInfoProviding> sessionInfoProvider;
@property (retain, nonatomic) CSXPCClient *xpcClient;
@property _Bool shouldKeepConnection;
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
- (void)_mediaServicesWereReset:(id)arg1;
- (unsigned int)getAudioSessionID;
- (void)_startMonitoring;
- (unsigned int)_getAudioSessionID;
- (_Bool)_createXPCClientConnectionIfNeeded;
- (unsigned int)_getLocalAudioSessionID;
- (void)_mediaServicesWereLost:(id)arg1;
- (void)_registerInterruptionNotification;
- (void)_registerAudioRouteChangeNotification;
- (void)_handleInterruption:(id)arg1;
- (void)_audioRouteChanged:(id)arg1;
- (void)_teardownXPCClientIfNeeded;
- (void)audioSessionInfoProvider:(id)arg1 didReceiveAudioSessionInterruptionNotificationWithUserInfo:(id)arg2;
- (void)audioSessionInfoProvider:(id)arg1 didReceiveAudioSessionRouteChangeNotificationWithUserInfo:(id)arg2;
- (void)audioSessionInfoProvider:(id)arg1 didReceiveAudioSessionMediaServicesWereLostNotificationWithUserInfo:(id)arg2;
- (void)audioSessionInfoProvider:(id)arg1 didReceiveAudioSessionMediaServicesWereResetNotificationWithUserInfo:(id)arg2;
- (void)CSXPCClient:(id)arg1 didDisconnect:(_Bool)arg2;
- (void)getAudioSessionIDWithCompletion:(CDUnknownBlockType)arg1;

@end
