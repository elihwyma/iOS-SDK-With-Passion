/*
 Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, NSURL;

@interface TLAlertConfiguration : NSObject

{
    _Bool _isFrozen;
    _Bool _hasCustomRepeatingFlag;
    _Bool _hasCustomAudioVolume;
    _Bool _forPreview;
    _Bool _shouldRepeat;
    _Bool _shouldIgnoreRingerSwitch;
    _Bool _shouldForcePlayingAtUserSelectedAudioVolume;
    float _audioVolume;
    double _audioPlaybackInitiationDelay;
    double _audioVolumeRampingDuration;
    long long _type;
    NSString *_topic;
    NSString *_toneIdentifier;
    NSString *_vibrationIdentifier;
    NSURL *_externalToneFileURL;
    unsigned long long _externalToneMediaLibraryItemIdentifier;
    NSDictionary *_externalVibrationPattern;
    NSURL *_externalVibrationPatternFileURL;
    NSString *_audioCategory;
    double _maximumDuration;
}

@property (nonatomic, readonly) _Bool _hasCustomAudioVolume;
@property (nonatomic, setter=_setAudioPlaybackInitiationDelay:) double _audioPlaybackInitiationDelay;
@property (nonatomic, setter=_setAudioVolumeRampingDuration:) double _audioVolumeRampingDuration;
@property (nonatomic, readonly) long long type;
@property (copy, nonatomic) NSString *topic;
@property (copy, nonatomic) NSString *toneIdentifier;
@property (copy, nonatomic) NSString *vibrationIdentifier;
@property (copy, nonatomic) NSURL *externalToneFileURL;
@property (nonatomic) unsigned long long externalToneMediaLibraryItemIdentifier;
@property (copy, nonatomic) NSDictionary *externalVibrationPattern;
@property (copy, nonatomic) NSURL *externalVibrationPatternFileURL;
@property (copy, nonatomic) NSString *audioCategory;
@property (nonatomic) float audioVolume;
@property (nonatomic, getter=isForPreview) _Bool forPreview;
@property (nonatomic) double maximumDuration;
@property (nonatomic) _Bool shouldRepeat;
@property (nonatomic) _Bool shouldIgnoreRingerSwitch;
@property (nonatomic) _Bool shouldForcePlayingAtUserSelectedAudioVolume;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1;
- (void)_freeze;
- (void)_throwForFrozenInstance;

@end
