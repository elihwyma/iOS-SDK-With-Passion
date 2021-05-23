/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class NSURL;

@protocol OS_dispatch_queue;

@interface CSAudioFileLog : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    struct OpaqueExtAudioFile *_audioFile;
    struct AudioStreamBasicDescription _asbd;
    NSURL *_url;
    unsigned int _audioLength;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)stopRecording;
- (void)startRecording;
- (void)_closeAudioFile;
- (void)appendAudioData:(id)arg1;

@end
