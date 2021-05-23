/*
 Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

#import <Foundation/NSObject.h>

@interface VTAudioFileReader : NSObject

{
    struct OpaqueExtAudioFile *_fFile;
}

- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (void)close;
- (id)readSamples:(unsigned long long)arg1;

@end
