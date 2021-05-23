/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class NSURL;

@interface NviAudioFileWriter : NSObject

{
    struct OpaqueExtAudioFile *fFile;
    struct AudioStreamBasicDescription inASBD;
    struct AudioStreamBasicDescription outASBD;
    NSURL *_fileURL;
}

@property (nonatomic, readonly) NSURL *fileURL;

- (void)dealloc;
- (void)endAudio;
- (id)initWithURL:(id)arg1 inputFormat:(struct AudioStreamBasicDescription)arg2 outputFormat:(struct AudioStreamBasicDescription)arg3;
- (void)addSamples:(const void *)arg1 numSamples:(long long)arg2;

@end
