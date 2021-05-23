/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@protocol CSAudioFileReaderDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface CSAudioFileReader : NSObject

{
    struct OpaqueExtAudioFile *_fFile;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_audioFeedTimer;
    double _bufferDuration;
    struct AudioStreamBasicDescription _outASBD;
    id <CSAudioFileReaderDelegate> _delegate;
}

@property (weak, nonatomic) id <CSAudioFileReaderDelegate> delegate;

- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (void)close;
- (void)stopRecording;
- (_Bool)startRecording;
- (_Bool)setRecordBufferDuration:(double)arg1;
- (void)_readAudioBufferAndFeed;
- (_Bool)prepareRecording:(id)arg1;
- (id)readSamplesFromChannelIdx:(unsigned int)arg1;

@end
