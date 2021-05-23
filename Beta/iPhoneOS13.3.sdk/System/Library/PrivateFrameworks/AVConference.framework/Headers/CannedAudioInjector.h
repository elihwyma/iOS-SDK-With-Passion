/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSMutableData, NSString;

__attribute__((visibility("hidden")))
@interface CannedAudioInjector : NSObject

{
    NSString *_cannedMoviePath;
    NSMutableData *_samples;
    int _position;
    _Bool _fromBeginning;
    struct _opaque_pthread_mutex_t _samplesMutex;
    struct _opaque_pthread_cond_t _samplesConditional;
    struct AudioStreamBasicDescription _internalFormat;
}

@property (retain, nonatomic) NSString *cannedMoviePath;
@property (retain, nonatomic) NSMutableData *samples;
@property (nonatomic) int position;
@property (nonatomic) _Bool fromBeginning;

+ (_Bool)isAudioAvailable:(id)arg1;

- (void)dealloc;
- (int)readRawAudioSamples;
- (int)decodeAudio;
- (id)initWithPath:(id)arg1 withDescription:(struct AudioStreamBasicDescription)arg2 fromBeginning:(_Bool)arg3;
- (void)injectToBuffer:(char *)arg1 size:(int)arg2 time:(double)arg3 muted:(_Bool)arg4;

@end
