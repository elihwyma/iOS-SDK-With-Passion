/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface VSTextPreProcessor : NSObject

{
    NSArray *_rules;
    NSString *_languageID;
    struct __CFStringTokenizer *_tokenizer;
}

- (void)dealloc;
- (id)initWithContentsOfPath:(id)arg1 languageIdentifier:(id)arg2;
- (id)processedTextFromString:(id)arg1;

@end
