/*
 Image: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
 */

#import <Foundation/NSObject.h>

@interface AVAudioTime : NSObject

{
    struct AudioTimeStamp _ats;
    double _sampleRate;
    void *_reserved;
}

@property (nonatomic, readonly, getter=isHostTimeValid) _Bool hostTimeValid;
@property (nonatomic, readonly) unsigned long long hostTime;
@property (nonatomic, readonly, getter=isSampleTimeValid) _Bool sampleTimeValid;
@property (nonatomic, readonly) long long sampleTime;
@property (nonatomic, readonly) double sampleRate;
@property (nonatomic, readonly) struct AudioTimeStamp audioTimeStamp;

+ (double)secondsForHostTime:(unsigned long long)arg1;
+ (id)timeWithAudioTimeStamp:(const struct AudioTimeStamp *)arg1 sampleRate:(double)arg2;
+ (id)timeWithHostTime:(unsigned long long)arg1;
+ (id)timeWithSampleTime:(long long)arg1 atRate:(double)arg2;
+ (id)timeWithHostTime:(unsigned long long)arg1 sampleTime:(long long)arg2 atRate:(double)arg3;
+ (unsigned long long)hostTimeForSeconds:(double)arg1;

- (id)init;
- (id)description;
- (id)initWithHostTime:(unsigned long long)arg1;
- (id)initWithSampleTime:(long long)arg1 atRate:(double)arg2;
- (id)initWithHostTime:(unsigned long long)arg1 sampleTime:(long long)arg2 atRate:(double)arg3;
- (id)extrapolateTimeFromAnchor:(id)arg1;
- (id)initWithAudioTimeStamp:(const struct AudioTimeStamp *)arg1 sampleRate:(double)arg2;

@end
