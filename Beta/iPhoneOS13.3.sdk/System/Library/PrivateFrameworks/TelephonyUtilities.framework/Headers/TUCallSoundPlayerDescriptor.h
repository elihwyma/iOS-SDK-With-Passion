/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

@class NSNumber;

@interface TUCallSoundPlayerDescriptor : NSObject

{
    long long _soundType;
    NSNumber *_sound;
    unsigned long long _iterations;
    double _pauseDuration;
}

@property (nonatomic) long long soundType;
@property (retain, nonatomic) NSNumber *sound;
@property (nonatomic) unsigned long long iterations;
@property (nonatomic) double pauseDuration;

- (id)description;
- (id)initWithSoundType:(long long)arg1 call:(id)arg2;
- (id)initWithSoundType:(long long)arg1 provider:(id)arg2 video:(_Bool)arg3 region:(long long)arg4;
- (id)initWithSoundType:(long long)arg1 sound:(id)arg2 iterations:(unsigned long long)arg3 pauseDuration:(double)arg4;

@end
