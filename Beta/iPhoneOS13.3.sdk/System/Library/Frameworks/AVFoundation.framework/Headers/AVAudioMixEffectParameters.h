/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVAudioMixEffectParametersInternal;

@interface AVAudioMixEffectParameters : NSObject

{
    AVAudioMixEffectParametersInternal *_audioEffect;
}

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
