/*
 Image: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
 */

#import <Foundation/NSObject.h>

@class AVAudioFormat, NSURL;

@interface AVAudioFile : NSObject

{
    void *_impl;
}

@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) AVAudioFormat *fileFormat;
@property (nonatomic, readonly) AVAudioFormat *processingFormat;
@property (nonatomic, readonly) long long length;
@property (nonatomic) long long framePosition;

- (void)dealloc;
- (_Bool)readIntoBuffer:(id)arg1 error:(id *)arg2;
- (id)initForReading:(id)arg1 error:(id *)arg2;
- (id)initForReading:(id)arg1 commonFormat:(unsigned long long)arg2 interleaved:(_Bool)arg3 error:(id *)arg4;
- (id)initForReadingFromExtAudioFile:(struct OpaqueExtAudioFile *)arg1 error:(id *)arg2;
- (id)initForReadingFromExtAudioFile:(struct OpaqueExtAudioFile *)arg1 commonFormat:(unsigned long long)arg2 interleaved:(_Bool)arg3 error:(id *)arg4;
- (id)initForWriting:(id)arg1 settings:(id)arg2 error:(id *)arg3;
- (id)initForWriting:(id)arg1 settings:(id)arg2 commonFormat:(unsigned long long)arg3 interleaved:(_Bool)arg4 error:(id *)arg5;
- (id)initSecondaryReader:(id)arg1 format:(id)arg2 error:(id *)arg3;
- (_Bool)writeFromBuffer:(id)arg1 error:(id *)arg2;
- (_Bool)readIntoBuffer:(id)arg1 frameCount:(unsigned int)arg2 error:(id *)arg3;

@end
