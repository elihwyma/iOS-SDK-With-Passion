/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSNumber;

@protocol OS_dispatch_queue;

@interface MPPlaybackUserDefaults : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    _Bool _allowsHighQualityMusicStreamingOnCellular;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    int _musicEQPreset;
    long long _musicRepeatType;
    long long _musicShuffleType;
    _Bool _soundCheckEnabled;
    _Bool _speakerRouteEnabled;
    _Bool _includeContentItemDebugFields;
    NSMutableDictionary *_lastSiriPlaybackContextIDs;
    struct vector<int, std::__1::allocator<int>> _notifyTokens;
    NSObject<OS_dispatch_queue> *_userDefaultsMutationQueue;
    NSNumber *_currentPrivateListeningEnabledValue;
    NSObject<OS_dispatch_queue> *_loadValuesQueue;
    NSNumber *_devicePrivateListeningEnabled;
}

@property (nonatomic, readonly) _Bool allowsHighQualityMusicStreamingOnCellular;
@property (nonatomic, readonly) int musicEQPreset;
@property (nonatomic) long long musicRepeatType;
@property (nonatomic) long long musicShuffleType;
@property (nonatomic, readonly) _Bool soundCheckEnabled;
@property (nonatomic, readonly) _Bool speakerRouteEnabled;
@property (nonatomic, readonly) _Bool includeContentItemDebugFields;
@property (nonatomic, readonly) unsigned long long preferredVideosAssetQualityOnCellular;
@property (nonatomic, readonly) unsigned long long preferredVideosAssetQualityOnWifi;
@property (copy, nonatomic, getter=isPrivateListeningEnabled) NSNumber *privateListeningEnabled;
@property (copy, nonatomic, getter=isDevicePrivateListeningEnabled) NSNumber *devicePrivateListeningEnabled;

+ (id)standardUserDefaults;

- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (id)lastSiriPlaybackContextIDForPlayerID:(id)arg1;
- (void)setLastSiriPlaybackContextID:(id)arg1 forPlayerID:(id)arg2;
- (void)_addNotificationObserver:(CDUnknownBlockType)arg1 forUserDefaultKey:(struct __CFString *)arg2;
- (int)_calculateCurrentMusicEQPreset;
- (long long)_calculateCurrentMusicRepeatType;
- (long long)_calculateCurrentMusicShuffleType;
- (void)_postRepeatShuffleTypeGlobalNotification;
- (void)_mobileiPodPrefsDidChange;
- (void)_loadAccountProperties;
- (void)_accountStoreChangedNotification:(id)arg1;

@end
