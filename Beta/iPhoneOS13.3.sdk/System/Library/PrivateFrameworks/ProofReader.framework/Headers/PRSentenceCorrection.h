/*
 Image: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface PRSentenceCorrection : NSObject

{
    int _category;
    struct _NSRange _range;
    NSString *_word;
    NSArray *_corrections;
}

- (void)dealloc;
- (id)description;
- (int)category;
- (struct _NSRange)range;
- (id)corrections;
- (id)word;
- (_Bool)presentAsSpellingError;
- (id)initWithCategory:(int)arg1 range:(struct _NSRange)arg2 word:(id)arg3 corrections:(id)arg4;
- (_Bool)presentAsAutocorrection;
- (_Bool)presentAsGrammarError;

@end
