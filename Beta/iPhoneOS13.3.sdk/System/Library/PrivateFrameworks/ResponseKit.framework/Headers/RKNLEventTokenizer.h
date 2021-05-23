/*
 Image: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface RKNLEventTokenizer : NSObject

{
    NSString *_languageID;
    struct __CFStringTokenizer *_tokenizer;
}

@property struct __CFStringTokenizer *tokenizer;
@property (readonly) NSString *languageID;

+ (void)initialize;
+ (_Bool)isSpecialToken:(id)arg1;

- (void)dealloc;
- (_Bool)hasEmoticon:(id)arg1;
- (id)processForEmoticons:(id)arg1;
- (id)processForHyphenation:(id)arg1;
- (id)tokenizeWithDataDetectors:(id)arg1;
- (id)processForEmoticonsAndEmojis:(id)arg1;
- (id)transform:(id)arg1;
- (id)getTokens:(id)arg1;
- (id)initWithLanguageID:(id)arg1;
- (id)buildTokenSquence:(id)arg1 withOffset:(unsigned long long)arg2;

@end
