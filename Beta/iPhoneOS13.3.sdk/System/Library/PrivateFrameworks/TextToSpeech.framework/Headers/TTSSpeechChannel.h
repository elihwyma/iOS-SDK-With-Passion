/*
 Image: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
 */

#import <Foundation/NSObject.h>

@class TTSSpeechVoice;

@interface TTSSpeechChannel : NSObject

{
    TTSSpeechVoice *_voice;
}

@property (retain, nonatomic) TTSSpeechVoice *voice;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithVoice:(id)arg1;

@end
