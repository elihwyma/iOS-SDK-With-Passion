/*
 Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

#import <Foundation/NSObject.h>

@class VTSiriPHash;

@interface VTSiriNotifications : NSObject

{
    struct __CFNotificationCenter *_center;
    VTSiriPHash *_hasher;
}

- (id)init;
- (void)broadcastAudioPayload:(id)arg1 numSamples:(unsigned long long)arg2 superVectorScore:(double)arg3 absoluteTime:(unsigned long long)arg4;

@end
