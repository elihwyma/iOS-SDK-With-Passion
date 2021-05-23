/*
 Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
 */

#import <Foundation/NSObject.h>

@class NSCharacterSet, NSMutableDictionary, NSSet;

@interface WiFiLexicon : NSObject

{
    struct _LXLexicon *_lexiconEnglish;
    struct _LXLexicon *_lexiconUserLocale;
    NSCharacterSet *_tokenizationCharacterSet;
    NSCharacterSet *_tokenizationCharacterSetWithoutUpperCase;
    NSMutableDictionary *_stringCache;
    NSSet *_unwantedEnglishWords;
}

@property (retain, nonatomic) NSCharacterSet *tokenizationCharacterSet;
@property (retain, nonatomic) NSCharacterSet *tokenizationCharacterSetWithoutUpperCase;
@property (retain, nonatomic) NSMutableDictionary *stringCache;
@property (retain, nonatomic) NSSet *unwantedEnglishWords;

- (id)init;
- (void)dealloc;
- (id)_tokenizeStringForSpecialCharacters:(id)arg1;
- (_Bool)stringContainsUnwantedWords:(id)arg1;

@end
