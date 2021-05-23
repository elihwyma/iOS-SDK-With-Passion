/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, NSTimer, TVPContentKeySession, TVPStateMachine;

__attribute__((visibility("hidden")))
@interface VUIOfflineKeyRenewalManager : NSObject

{
    _Bool _networkErrorOccurredDuringInvalidation;
    TVPStateMachine *_stateMachine;
    NSMutableArray *_keyLoaders;
    NSTimer *_keyRenewalTimer;
    NSTimer *_expirationTimer;
    TVPContentKeySession *_contentKeySession;
    unsigned long long _backgroundTaskIdentifier;
    NSMutableArray *_downloadsForRepairingKeys;
}

@property (retain, nonatomic) TVPStateMachine *stateMachine;
@property (retain, nonatomic) NSMutableArray *keyLoaders;
@property (nonatomic) _Bool networkErrorOccurredDuringInvalidation;
@property (retain, nonatomic) NSTimer *keyRenewalTimer;
@property (retain, nonatomic) NSTimer *expirationTimer;
@property (retain, nonatomic) TVPContentKeySession *contentKeySession;
@property (nonatomic) unsigned long long backgroundTaskIdentifier;
@property (retain, nonatomic) NSMutableArray *downloadsForRepairingKeys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)storeFPSKeyLoader:(id)arg1 didLoadOfflineKeyData:(id)arg2 forKeyRequest:(id)arg3;
- (void)_registerStateMachineHandlers;
- (void)download:(id)arg1 didChangeStateTo:(long long)arg2;
- (void)updateKeyRenewalAndExpiration;
- (void)_networkReachbilityDidChange:(id)arg1;
- (void)_isPlaybackUIBeingShownDidChange:(id)arg1;
- (void)_expirationTimerDidFire:(id)arg1;
- (void)_sendRenewalRequestForFirstArray:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_fetchNewKeysForVideosWithBrokenKeys:(id)arg1;
- (void)_renewalTimerDidFire:(id)arg1;

@end
