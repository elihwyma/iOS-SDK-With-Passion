/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSRegularExpression, NSString;

@interface AFPhonemeMapper : NSObject

{
    NSString *_languageCode;
    NSDictionary *_phonemeMap;
    NSRegularExpression *_regex;
}

+ (id)_mapForLanguageCode:(id)arg1;
+ (id)_buildRegexMatchingSubstrings:(id)arg1;

- (id)initWithLanguageCode:(id)arg1;
- (id)stringByReplacingPhonemesInString:(id)arg1;

@end
