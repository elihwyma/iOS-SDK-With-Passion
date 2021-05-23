/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKAction.h>

@interface OKActionMicrophoneNoise : OKAction

{
    float _meanAudioLevel;
}

@property (nonatomic, readonly) float meanAudioLevel;

+ (_Bool)supportsSecureCoding;
+ (void)setupJavascriptContext:(id)arg1;
+ (id)microphoneNoiseActionWithState:(unsigned long long)arg1 meanAudioLevel:(float)arg2 context:(id)arg3;
+ (id)microphoneNoiseActionWithState:(unsigned long long)arg1 location:(struct CGPoint)arg2 touchCount:(unsigned long long)arg3 meanAudioLevel:(float)arg4 context:(id)arg5;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
