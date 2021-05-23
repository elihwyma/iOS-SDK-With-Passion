/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface CSPlainAudioFileWriter : NSObject

{
    _Bool isWriting;
    struct OpaqueExtAudioFile *fFile;
    struct AudioStreamBasicDescription inASBD;
    struct AudioStreamBasicDescription outASBD;
    NSURL *_fileURL;
}

@property (nonatomic, readonly) NSURL *fileURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (id)initWithFilepath:(id)arg1;
- (_Bool)endAudio;
- (id)initWithURL:(id)arg1 inputFormat:(struct AudioStreamBasicDescription)arg2 outputFormat:(struct AudioStreamBasicDescription)arg3;
- (_Bool)addSamples:(const void *)arg1 numSamples:(long long)arg2;

@end
