/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/FigCaptureConnectionConfiguration.h>

@interface FigAudioCaptureConnectionConfiguration : FigCaptureConnectionConfiguration

{
    _Bool _builtInMicrophoneStereoAudioCaptureEnabled;
    int _builtInMicrophonePosition;
}

@property (nonatomic) _Bool builtInMicrophoneStereoAudioCaptureEnabled;
@property (nonatomic) int builtInMicrophonePosition;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;

@end
