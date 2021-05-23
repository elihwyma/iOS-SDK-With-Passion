/*
 Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, TLAlertConfiguration;

@interface BBSound : NSObject

{
    _Bool _repeats;
    unsigned int _systemSoundID;
    TLAlertConfiguration *_alertConfiguration;
    NSString *_audioCategory;
    double _maxDuration;
    NSString *_ringtoneName;
    unsigned long long _soundBehavior;
    long long _soundType;
    NSDictionary *_vibrationPattern;
    NSString *_songPath;
}

@property (copy, nonatomic) TLAlertConfiguration *alertConfiguration;
@property (copy, nonatomic) NSString *audioCategory;
@property (nonatomic) double maxDuration;
@property (nonatomic, getter=isRepeating) _Bool repeats;
@property (copy, nonatomic) NSString *ringtoneName;
@property (nonatomic) long long soundType;
@property (copy, nonatomic) NSDictionary *vibrationPattern;
@property (copy, nonatomic) NSString *songPath;
@property (nonatomic) unsigned long long soundBehavior;
@property (nonatomic) unsigned int systemSoundID;
@property (nonatomic, readonly) long long alertType;
@property (copy, nonatomic, readonly) NSString *accountIdentifier;
@property (nonatomic, readonly) _Bool ignoreRingerSwitch;
@property (copy, nonatomic, readonly) NSString *toneIdentifier;
@property (copy, nonatomic, readonly) NSString *vibrationIdentifier;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)replacementObjectForCoder:(id)arg1;
- (id)awakeAfterUsingCoder:(id)arg1;
- (id)initWithToneAlertConfiguration:(id)arg1;
- (id)initWithToneAlert:(long long)arg1 accountIdentifier:(id)arg2 ignoreRingerSwitch:(_Bool)arg3;
- (id)initWithToneAlert:(long long)arg1 accountIdentifier:(id)arg2 toneIdentifier:(id)arg3 vibrationIdentifier:(id)arg4 ignoreRingerSwitch:(_Bool)arg5;
- (id)initWithToneAlert:(long long)arg1 toneIdentifier:(id)arg2 vibrationIdentifier:(id)arg3 ignoreRingerSwitch:(_Bool)arg4;
- (id)initWithToneAlert:(long long)arg1;
- (id)initWithToneAlert:(long long)arg1 ignoreRingerSwitch:(_Bool)arg2;
- (id)initWithToneAlert:(long long)arg1 accountIdentifier:(id)arg2;
- (id)initWithToneAlert:(long long)arg1 toneIdentifier:(id)arg2 vibrationIdentifier:(id)arg3;

@end
