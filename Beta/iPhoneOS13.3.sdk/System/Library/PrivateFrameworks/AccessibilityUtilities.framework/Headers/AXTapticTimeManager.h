/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@class NSDate, NSHashTable, NSLocale, NSMutableArray, NSMutableDictionary, NSNumber;

@protocol OS_os_activity;

@interface AXTapticTimeManager : NSObject

{
    NSMutableArray *_enqueuedSounds;
    NSMutableArray *_enqueuedSoundDelays;
    NSHashTable *_observers;
    unsigned int _ssIDHapticFast[24];
    unsigned int _ssIDHapticSlow[24];
    unsigned int _ssIDHapticMorse[10];
    NSMutableDictionary *_soundToPatterns;
    NSMutableDictionary *_hapticsDescriptions;
    _Bool _is24Hour;
    NSNumber *_cachedSpeed;
    long long _currentSsid;
    NSObject<OS_os_activity> *_activity;
    struct os_activity_scope_state_s _scopeState;
    _Bool _isCurrentlyOutputting;
    unsigned int _assertionID;
    CDUnknownBlockType _testingQueueCallback;
    NSLocale *_localeOverride;
    NSDate *_dateOverride;
}

@property (nonatomic) unsigned int assertionID;
@property (copy, nonatomic) CDUnknownBlockType testingQueueCallback;
@property (retain, nonatomic) NSLocale *localeOverride;
@property (retain, nonatomic) NSDate *dateOverride;
@property (nonatomic, readonly) _Bool isCurrentlyOutputting;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)_updateHapticPatternsIfNecessary:(_Bool)arg1;
- (void)_updateIs24HourTime;
- (void)_localeDidChange:(id)arg1;
- (void)_cleanupHapticsDict;
- (id)_atomToLegacyVibePattern:(id)arg1;
- (_Bool)_is24HourTime;
- (id)_dateComponentsForClockTime;
- (long long)_numberOfTapsForHourNumber:(long long)arg1 withEncoding:(long long)arg2;
- (_Bool)_startPowerAssertion;
- (void)_stopPowerAssertion;
- (void)_clearQueue;
- (_Bool)_preStartCheck;
- (void)_handleTestingQueueCallback;
- (void)_informObserversDidStart;
- (void)_dequeueSound;
- (long long)_numberOfTapHoursForClockTimeWithEncoding:(long long)arg1;
- (void)_enqueueHours:(unsigned long long)arg1 encoding:(long long)arg2;
- (long long)_numberOfTapMinutesForClockTime;
- (void)_enqueueMinutes:(unsigned long long)arg1 encoding:(long long)arg2;
- (void)_outputWithEnqueueBlock:(CDUnknownBlockType)arg1;
- (id)_convertSoundToStringName:(unsigned int)arg1;
- (void)_informObserversDidStop;
- (void)_informObserversDidOutputSSID:(long long)arg1;
- (void)_informObserversWillOutputSSID:(long long)arg1 hapticsDescriptions:(id)arg2;
- (void)outputHoursAndMinutes:(long long)arg1;
- (void)outputHours:(long long)arg1;
- (void)outputMinutes:(long long)arg1;
- (void)stopCurrentOutput;

@end
