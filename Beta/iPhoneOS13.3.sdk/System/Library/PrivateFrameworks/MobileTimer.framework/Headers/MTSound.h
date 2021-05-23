/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSObject.h>

#import <MobileTimer/Swift-Protocol.h>

@class NSNumber, NSString;

@interface MTSound : NSObject <Swift>

{
    unsigned long long _soundType;
    NSString *_toneIdentifier;
    NSNumber *_mediaItemIdentifier;
    NSString *_vibrationIdentifier;
    NSNumber *_soundVolume;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long soundType;
@property (nonatomic, readonly) NSString *toneIdentifier;
@property (nonatomic, readonly) NSNumber *mediaItemIdentifier;
@property (nonatomic, readonly) NSString *vibrationIdentifier;
@property (nonatomic, readonly) NSNumber *soundVolume;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)toneSoundWithIdentifier:(id)arg1 vibrationIdentifer:(id)arg2 volume:(id)arg3;
+ (id)descriptionForCategory:(unsigned long long)arg1;
+ (long long)_alertTypeForCategory:(unsigned long long)arg1;
+ (id)songSoundWithIdentifier:(id)arg1 vibrationIdentifier:(id)arg2 volume:(id)arg3;
+ (id)defaultSoundForCategory:(unsigned long long)arg1;
+ (id)_loadDefaultAlarmSound;
+ (id)_loadDefaultTimerSound;
+ (void)_saveDefaultAlarmSound:(id)arg1;
+ (void)_saveDefaultTimerSound:(id)arg1;
+ (void)setDefaultSound:(id)arg1 forCategory:(unsigned long long)arg2;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSound:(id)arg1 usingVolume:(id)arg2;
- (id)unSoundForCategory:(unsigned long long)arg1;
- (id)unSound;
- (id)initWithToneIdentifier:(id)arg1 vibrationIdentifer:(id)arg2 volume:(id)arg3;
- (id)initWithMediaItemIdentifier:(id)arg1 vibrationIdentifier:(id)arg2 volume:(id)arg3;
- (_Bool)isEqualToSound:(id)arg1;
- (_Bool)isSilent;
- (id)soundByUpdatingVibrationIdentifier:(id)arg1;
- (id)soundByUpdatingVolume:(id)arg1;
- (_Bool)interruptAudio;
- (id)previewWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updatePreview:(id)arg1;

@end
