/*
 Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString, NSURL;

@interface UNNotificationSound : NSObject

{
    long long _alertType;
    NSString *_alertTopic;
    NSString *_audioCategory;
    NSNumber *_audioVolume;
    double _maximumDuration;
    _Bool _critical;
    _Bool _shouldIgnoreRingerSwitch;
    _Bool _shouldRepeat;
    NSString *_toneFileName;
    NSURL *_toneFileURL;
    NSString *_toneIdentifier;
    unsigned long long _toneMediaLibraryItemIdentifier;
    NSString *_vibrationIdentifier;
    NSURL *_vibrationPatternFileURL;
}

@property (nonatomic, readonly) long long alertType;
@property (copy, nonatomic, readonly) NSString *alertTopic;
@property (copy, nonatomic, readonly) NSString *audioCategory;
@property (copy, nonatomic, readonly) NSNumber *audioVolume;
@property (nonatomic, readonly, getter=isCritical) _Bool critical;
@property (nonatomic, readonly) double maximumDuration;
@property (nonatomic, readonly) _Bool shouldIgnoreRingerSwitch;
@property (nonatomic, readonly) _Bool shouldRepeat;
@property (copy, nonatomic, readonly) NSString *toneFileName;
@property (copy, nonatomic, readonly) NSURL *toneFileURL;
@property (copy, nonatomic, readonly) NSString *toneIdentifier;
@property (nonatomic, readonly) unsigned long long toneMediaLibraryItemIdentifier;
@property (copy, nonatomic, readonly) NSString *vibrationIdentifier;
@property (copy, nonatomic, readonly) NSURL *vibrationPatternFileURL;

+ (_Bool)supportsSecureCoding;
+ (id)soundWithAlertType:(long long)arg1;
+ (id)_soundWithAlertType:(long long)arg1 audioVolume:(id)arg2 critical:(_Bool)arg3 toneFileName:(id)arg4;
+ (id)defaultSound;
+ (id)defaultSystemSound;
+ (id)defaultCriticalSound;
+ (id)defaultCriticalSoundWithAudioVolume:(float)arg1;
+ (id)criticalSoundNamed:(id)arg1;
+ (id)criticalSoundNamed:(id)arg1 withAudioVolume:(float)arg2;
+ (id)soundNamed:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithAlertType:(long long)arg1 alertTopic:(id)arg2 audioCategory:(id)arg3 audioVolume:(id)arg4 critical:(_Bool)arg5 maximumDuration:(double)arg6 shouldIgnoreRingerSwitch:(_Bool)arg7 shouldRepeat:(_Bool)arg8 toneFileName:(id)arg9 toneFileURL:(id)arg10 toneIdentifier:(id)arg11 toneMediaLibraryItemIdentifier:(unsigned long long)arg12 vibrationIdentifier:(id)arg13 vibrationPatternFileURL:(id)arg14;

@end
