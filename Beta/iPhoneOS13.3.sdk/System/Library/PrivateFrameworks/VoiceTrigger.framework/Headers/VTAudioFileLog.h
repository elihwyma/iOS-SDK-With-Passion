/*
 Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

#import <Foundation/NSObject.h>

@class NSURL;

@protocol OS_dispatch_queue;

@interface VTAudioFileLog : NSObject

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
- (void)appendAudioData:(struct AudioBuffer)arg1;

@end
