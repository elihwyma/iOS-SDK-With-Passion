/*
 Image: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
 */

#import <NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface EARCSpeechRecognitionResultStreamGlue : NSObject

{
    struct EARCSpeechRecognitionResultStream _stream;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithStream:(struct EARCSpeechRecognitionResultStream *)arg1;
- (void)speechRecognizer:(id)arg1 didRecognizePartialResult:(id)arg2;
- (void)speechRecognizer:(id)arg1 didFinishRecognitionWithError:(id)arg2;
- (void)speechRecognizer:(id)arg1 didRecognizeFinalResults:(id)arg2;
- (void)speechRecognizer:(id)arg1 didRecognizeFinalResults:(id)arg2 tokenSausage:(id)arg3 nBestChoices:(id)arg4;
- (void)speechRecognizer:(id)arg1 didProcessAudioDuration:(double)arg2;

@end
