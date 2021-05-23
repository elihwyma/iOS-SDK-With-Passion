/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VSTextPreProcessorRule : NSObject

{
    NSString *_matchPattern;
    NSString *_replacement;
    _Bool _caseSensitive;
    _Bool _eatPunctuation;
}

- (void)dealloc;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)matchedString:(id)arg1 forTokenInRange:(CDStruct_912cb5d2 *)arg2;

@end
