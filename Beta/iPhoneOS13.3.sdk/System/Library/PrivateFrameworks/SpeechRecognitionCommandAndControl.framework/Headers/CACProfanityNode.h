/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface CACProfanityNode : NSObject

{
    NSMutableDictionary *_childMap;
    NSMutableDictionary *_terminalMap;
    NSMutableDictionary *_originalWordMap;
}

- (id)init;
- (id)description;
- (id)childForKey:(id)arg1;
- (void)createChildForKey:(id)arg1;
- (void)setTerminal:(id)arg1 originalWord:(id)arg2 forKey:(id)arg3;
- (id)terminalForKey:(id)arg1;
- (id)originalWordForKey:(id)arg1;

@end
