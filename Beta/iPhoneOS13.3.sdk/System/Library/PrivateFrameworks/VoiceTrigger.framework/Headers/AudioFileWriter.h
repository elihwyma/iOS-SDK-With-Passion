/*
 Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

#import <Foundation/NSObject.h>

@interface AudioFileWriter : NSObject

{
    _Bool isWriting;
    struct OpaqueExtAudioFile *fFile;
}

- (void)dealloc;
- (void)close;
- (id)initWithURL:(id)arg1 inputFormat:(struct AudioStreamBasicDescription)arg2 outputFormat:(struct AudioStreamBasicDescription)arg3;
- (short)addSamples:(void *)arg1 len:(long long)arg2;

@end
