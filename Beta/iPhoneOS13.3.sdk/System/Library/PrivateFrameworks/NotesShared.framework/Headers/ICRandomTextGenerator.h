/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

@class ICRandomNumberGenerator;

@interface ICRandomTextGenerator : NSObject

{
    unsigned long long _language;
    ICRandomNumberGenerator *_randomNumberGenerator;
}

@property (retain, nonatomic) ICRandomNumberGenerator *randomNumberGenerator;
@property (nonatomic) unsigned long long language;
@property (nonatomic, readonly) _Bool isRightToLeftLanguage;

+ (id)loadWordsForLanguage:(unsigned long long)arg1;
+ (id)wordsForLanguage:(unsigned long long)arg1;
+ (_Bool)hasSpacesBetweenWordsForLanguage:(unsigned long long)arg1;
+ (id)sentencePunctuationForLanguage:(unsigned long long)arg1 endOfParagraph:(_Bool)arg2;

- (id)word;
- (id)paragraph;
- (id)generateMinWords:(unsigned long long)arg1 maxWords:(unsigned long long)arg2;
- (id)generateMinSentences:(unsigned long long)arg1 maxSentences:(unsigned long long)arg2 minWords:(unsigned long long)arg3 maxWords:(unsigned long long)arg4;
- (id)generateWords:(unsigned long long)arg1 minLength:(unsigned long long)arg2;
- (id)initWithRandomNumberGenerator:(id)arg1;
- (id)lineOfText;
- (id)sentence;
- (id)generateWordsWithMinLength:(unsigned long long)arg1;

@end
