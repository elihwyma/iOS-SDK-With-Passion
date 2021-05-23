/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, NSURL;

@interface CSSelectiveChannelAudioFileWriter : NSObject

{
    _Bool isWriting;
    struct OpaqueExtAudioFile *fFile;
    struct AudioStreamBasicDescription inASBD;
    struct AudioStreamBasicDescription outASBD;
    NSArray *selectedChannelList;
    unsigned int _numberOfChannels;
    NSURL *_fileURL;
}

@property (nonatomic, readonly) NSURL *fileURL;
@property (nonatomic, readonly) unsigned int numberOfChannels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (_Bool)endAudio;
- (_Bool)addSamples:(const void *)arg1 numSamples:(long long)arg2;
- (id)initWithURL:(id)arg1 inputFormat:(struct AudioStreamBasicDescription)arg2 outputFormat:(struct AudioStreamBasicDescription)arg3 channelBitset:(unsigned long long)arg4;

@end
