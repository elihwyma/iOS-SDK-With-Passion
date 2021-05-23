/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandServices.framework/SpeechRecognitionCommandServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CMDPGrammarData : NSObject

{
    NSString *_commandIdentifier;
    NSString *_builtInLMIdentifier;
    NSString *_word;
}

@property (readonly) NSString *commandIdentifier;
@property (readonly) NSString *builtInLMIdentifier;
@property (readonly) NSString *word;

- (id)initWithGrammarDataWord:(id)arg1 lmIdentifer:(id)arg2 commandIdentifier:(id)arg3;

@end
