/*
 Image: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
 */

#import <Foundation/NSObject.h>

@interface AVMIDIPlayer : NSObject

{
    void *_impl;
}

@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly, getter=isPlaying) _Bool playing;
@property (nonatomic) float rate;
@property (nonatomic) double currentPosition;

- (void)dealloc;
- (void)finalize;
- (void)stop;
- (struct MIDIPlayerImpl *)impl;
- (void)prepareToPlay;
- (void)play:(CDUnknownBlockType)arg1;
- (id)initBase;
- (id)initWithContentsOfURL:(id)arg1 soundBankURL:(id)arg2 error:(id *)arg3;
- (id)initWithData:(id)arg1 soundBankURL:(id)arg2 error:(id *)arg3;
- (unsigned long long)hostTimeForBeats:(double)arg1;
- (double)beatsForHostTime:(unsigned long long)arg1;
- (void)destroyBase;

@end
