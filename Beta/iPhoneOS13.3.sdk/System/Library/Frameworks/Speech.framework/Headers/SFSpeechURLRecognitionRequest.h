/*
 Image: /System/Library/Frameworks/Speech.framework/Speech
 */

#import <Speech/SFSpeechRecognitionRequest.h>

@class NSURL;

@interface SFSpeechURLRecognitionRequest : SFSpeechRecognitionRequest

{
    NSURL *_URL;
}

@property (copy, nonatomic, readonly) NSURL *URL;

- (id)init;
- (id)initWithURL:(id)arg1;
- (id)_startedConnectionWithLanguageCode:(id)arg1 delegate:(id)arg2 taskHint:(long long)arg3 requestIdentifier:(id)arg4;

@end
