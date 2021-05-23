/*
 Image: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
 */

#import <Foundation/NSObject.h>

@class NSData, NSDictionary, NSURL;

__attribute__((visibility("hidden")))
@interface PRDictionary : NSObject

{
    NSURL *_url;
    NSData *_data;
    NSDictionary *_offsetsDictionary;
    NSDictionary *_numEntriesDictionary;
    NSDictionary *_dictionariesDictionary;
    PRDictionary *_fallbackDictionary;
}

- (void)dealloc;
- (id)description;
- (id)initWithURL:(id)arg1 fallbackURL:(id)arg2;
- (_Bool)checkWordBuffer:(char *)arg1 length:(unsigned long long)arg2 encoding:(unsigned int)arg3 index:(unsigned long long)arg4 caseInsensitive:(_Bool)arg5;
- (id)dictionaryAtIndex:(unsigned long long)arg1;
- (id)fallbackDictionary;

@end
