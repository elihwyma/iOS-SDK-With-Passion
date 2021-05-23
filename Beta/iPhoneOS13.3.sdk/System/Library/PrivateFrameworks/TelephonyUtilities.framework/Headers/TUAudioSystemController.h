/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <TelephonyUtilities/TUAudioController.h>

@class NSArray, NSDictionary, NSNumber, NSObject;

@protocol OS_dispatch_queue, TUAudioSystemControllerDelegate;

@interface TUAudioSystemController : TUAudioController

{
    NSObject<OS_dispatch_queue> *_uplinkMutedQueue;
    NSObject<OS_dispatch_queue> *_downlinkMutedQueue;
    NSObject<OS_dispatch_queue> *_ttyQueue;
    NSObject<OS_dispatch_queue> *_pickableRoutesQueue;
    NSNumber *_isUplinkMutedCached;
    NSNumber *_isDownlinkMutedCached;
    NSNumber *_isTTYCached;
    NSArray *_pickableRoutesForTTY;
    NSArray *_pickableRoutesForPhoneCall;
    NSArray *_pickableRoutesForPlayAndRecordVideo;
    NSArray *_pickableRoutesForPlayAndRecordVoice;
    NSArray *_pickableRoutesForPlayAndRecordRemoteVoice;
    NSArray *_pickableRoutesForVoicemail;
    NSArray *_currentPickableRoutes;
    _Bool _isRequestingUplinkMuted;
    _Bool _isRequestingDownlinkMuted;
    _Bool _isRequestingTTY;
    _Bool _isRequestingPickableRoutesForTTY;
    _Bool _isRequestingPickableRoutesForPhoneCall;
    _Bool _isRequestingPickableRoutesForPlayAndRecordVideo;
    _Bool _isRequestingPickableRoutesForPlayAndRecordVoice;
    _Bool _isRequestingPickableRoutesForPlayAndRecordRemoteVoice;
    _Bool _isRequestingPickableRoutesForVoicemail;
    unsigned long long _lastUplinkMutedRequestScheduleTime;
    unsigned long long _lastDownlinkMutedRequestScheduleTime;
    unsigned long long _lastTTYRequestScheduleTime;
    unsigned long long _lastTTYPickableRoutesScheduleTime;
    unsigned long long _lastPhoneCallCategoryRoutesScheduleTime;
    unsigned long long _lastPlayAndRecordVideoRoutesScheduleTime;
    unsigned long long _lastPlayAndRecordVoiceRoutesScheduleTime;
    unsigned long long _lastPlayAndRecordRemoteVoiceRoutesScheduleTime;
    unsigned long long _lastVoicemailRoutesScheduleTime;
    id <TUAudioSystemControllerDelegate> _delegate;
}

@property (weak, nonatomic) id <TUAudioSystemControllerDelegate> delegate;
@property (nonatomic) float activeCategoryVolume;
@property (nonatomic, getter=isUplinkMuted) _Bool uplinkMuted;
@property (nonatomic, getter=isDownlinkMuted) _Bool downlinkMuted;
@property (nonatomic, readonly, getter=isTTY) _Bool tty;
@property (copy, nonatomic, readonly) NSDictionary *pickedRouteAttribute;
@property (copy, nonatomic, readonly) NSArray *bestGuessPickableRoutesForAnyCall;
@property (copy, nonatomic, readonly) NSArray *pickableRoutesForTTY;

+ (id)sharedSystemController;
+ (id)filteredPickableRoutesFromPickableRoutes:(id)arg1;
+ (id)sharedAudioSystemController;
+ (id)sourceIdentifierForRouteID:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)_handleUplinkMuteDidChangeNotification:(id)arg1;
- (void)_handlePickableRoutesDidChangeNotification:(id)arg1;
- (void)_handleVolumeDidChangeNotification:(id)arg1;
- (void)_mediaServicesWereReset:(id)arg1;
- (void)_updateCachedState;
- (id)_pickableRoutesForPhoneCallWithForceNewRequest:(_Bool)arg1;
- (id)_pickableRoutesForPlayAndRecordVideoWithForceNewRequest:(_Bool)arg1;
- (id)_pickableRoutesForPlayAndRecordVoiceWithForceNewRequest:(_Bool)arg1;
- (id)_pickableRoutesForPlayAndRecordRemoteVoiceWithForceNewRequest:(_Bool)arg1;
- (id)_pickableRoutesForVoiceMailWithForceNewRequest:(_Bool)arg1;
- (id)_pickableRoutesForTTYWithForceNewRequest:(_Bool)arg1;
- (id)pickableRoutesForActiveCall;
- (id)pickableRoutesForCategory:(id)arg1 andMode:(id)arg2;
- (void)_getPickableRoutesForCategory:(id)arg1 mode:(id)arg2 onlyKnownCombinations:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_loadCurrentPickableRoutesWithCompletion:(CDUnknownBlockType)arg1;
- (void)_handleDownlinkMuteDidChangeNotification:(id)arg1;
- (id)currentlyPickedRouteIdForCategory:(id)arg1 andMode:(id)arg2;
- (void)getPickableRoutesForCategory:(id)arg1 mode:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)pickRoute:(id)arg1 error:(id *)arg2;
- (id)pickableRouteWithUniqueIdentifier:(id)arg1;
- (_Bool)shouldSuppressCallUsingRoute:(id)arg1;

@end
